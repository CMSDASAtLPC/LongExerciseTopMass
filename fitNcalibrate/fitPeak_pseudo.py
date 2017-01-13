#!/usr/bin/env python
import math, ROOT, json, optparse, os, sys, pprint
from ROOT import *

def myFitFunc(x=None,par=None):
    return par[0]*TMath.Gaus(x[0],par[1],par[2],kFALSE)

def gPeak(h=None,inDir=None,isData=None,lumi=None):

    # Set the stats off 
    gStyle.SetOptStat(0)
    gStyle.SetOptTitle(0)
    gStyle.SetTickLength(0.03)

    # Get the log(E) histogram 
    hFit = h.Clone()
    hFit.SetMarkerStyle(8)
    hFit.GetYaxis().SetTitleSize(0.062)
    hFit.GetYaxis().SetLabelSize(0.062)
    hFit.GetYaxis().SetTitleOffset(0.62)
    hFit.GetYaxis().SetTitle("1/E dN_{b jets}/dlog(E)")
    hFit.GetXaxis().SetLabelOffset(1)
    hFit.GetXaxis().SetTitle("log(E)")
    hFit.SetLineColor(kBlack)
    hFit.SetMarkerColor(kBlack)

    # Define the fit function and parameters
    ## Set limits
    minToFit = 3.6
    maxToFit = 4.8
    ## Set the function
    fitfunc = TF1("Gaussian fit", myFitFunc, minToFit, maxToFit, 3)
    ## Set normalization
    fitfunc.SetParameter(2, h.Integral());
    fitfunc.SetParLimits(2, 0.1*h.Integral(), 2.5*h.Integral());
    ## Set gaussian mean starting value and limits
    fitfunc.SetParameter(1, 4.2);
    fitfunc.SetParLimits(1, 4., 4.4);
    ## Set gaussian width starting value and limits
    fitfunc.SetParameter(2, 0.65);
    fitfunc.SetParLimits(2, 0.35, 0.95);
    ## Some cosmetics
    fitfunc.SetLineColor(kBlue)
    fitfunc.SetLineWidth(3)
    fitfunc.SetLineStyle(1)

    # Do the fit
    hFit.Fit("Gaussian fit","EMQ", "", minToFit, maxToFit) 
    # "E" stands for Minos, "M" for improving fit results
    # cf. ftp://root.cern.ch/root/doc/5FittingHistograms.pdf    

    # Get Fit Parameters
    mean = fitfunc.GetParameter(1)
    meanErr = fitfunc.GetParError(1)
    sigma = fitfunc.GetParameter(2)
    sigmaErr = fitfunc.GetParError(2)
    chi2 = fitfunc.GetChisquare()
    NDF = fitfunc.GetNDF()
    chi2ndf = chi2/NDF
    # Calculate the uncalibrated Energy peak position and its uncertainty
    Ereco = math.exp(mean)
    Err = abs(Ereco*meanErr)

    #all done here ;)
    return Ereco,Err

def main():

    usage = 'usage: %prog [options]'
    parser = optparse.OptionParser(usage)
    parser.add_option('-d', '--isData',  action = 'store_true',   dest='isData')
    parser.add_option('-i', '--inDir',   dest='inDir',   help='input directory',          default='nominal',    type='string')
    parser.add_option('-j', '--json',    dest='json',    help='json with list of files',  default="../analyzeNplot/data/samples_Run2015_25ns.json", type='string')
    parser.add_option('-l', '--lumi',    dest='lumi' ,   help='lumi to print out',        default=2444.,        type=float)
    (opt, args) = parser.parse_args()
    
    # Read list of MC samples
    if opt.isData is not True:
        samplesList=[]
        jsonFile = open(opt.json,'r')
        jsonList=json.load(jsonFile,encoding='utf-8').items()
        jsonFile.close()
        for tag,sample in jsonList: 
            if not sample[3] in samplesList and not "Data" in sample[3]:
                samplesList.append(sample[3])

    # Open the root file
    fiName = "../analyzeNplot/"+opt.inDir+"/plots/plotter.root"
    print "... processing", fiName
    if not os.path.isfile(fiName):
        print "Help, file doesn't exist"
        exit(-1)
    res = ROOT.TFile(fiName, "read")

    #Get the histogram 
    hName = "bjetenls/"   
    if opt.isData is True:
        hName = hName + "bjetenls"
    else:
        hName = hName + "bjetenls_" + samplesList[0]
    histo = res.Get(hName)
    histo.SetDirectory(0)
    if opt.isData is not True:
        for sampleInfo in samplesList:
            if sampleInfo is not samplesList[0]: 
                histo.Add(res.Get("bjetenls/bjetenls_"+sampleInfo).Clone());

    #Generate pseudo-exp
    r3 = TRandom3()
    r3.SetSeed(1)
    Npe = 1000
    heb = TH1F("heb", "", 50,63,70) # 169v5
    #heb = TH1F("heb", "", 50,63,70) # 172v5
    #heb = TH1F("heb", "", 50,63,70) # 175v5
    hde = TH1F("hde", "", 30,0,0.4) # 169v5
    #hde = TH1F("hde", "", 30,0,0.4) # 172v5
    #hde = TH1F("hde", "", 30,0,0.4) # 175v5
    hpull = TH1F("hpull", "",200,-30,20)
    pred = 65.740336799410 #169v5
    #pred = 67.570939637681 #172v5
    #pred = 69.390239814814 #175v5
    for i in range(0,Npe):
        hpe = histo.Clone()
        for ibin in range(0,histo.GetNbinsX()):
            y = histo.GetBinContent(ibin)
            x = histo.GetXaxis().GetBinCenter(ibin)
            fluct = r3.PoissonD(y*math.exp(x))/math.exp(x)
            hpe.SetBinContent(ibin,fluct)
            err = math.sqrt(fluct)/math.exp(x)
            hpe.SetBinError(ibin,err)
        # Calculate the energy peak position in the big MC sample
        Eb,DEb = gPeak(h=hpe,inDir=opt.inDir,isData=opt.isData,lumi=opt.lumi)
        heb.Fill(Eb)
        hde.Fill(DEb)
        if DEb !=0:
            pull = (Eb - pred)/float(DEb)
            #print "Eb:", Eb, "  DEb:", DEb, "  Pull:", pull, "Delta:", abs(Eb-pred)
            hpull.Fill(pull)
        else: 
            print "Infinite pull!"
 
    gStyle.SetOptFit(0111)
    c1 = TCanvas("c1","")
    heb.Fit("gaus")
    heb.Draw()
    c1.SaveAs("Eb.pdf")
    c2 = TCanvas("c2","")
    hde.Fit("gaus")
    hde.Draw()
    c2.SaveAs("Deb.pdf")
    c3 = TCanvas("c3","")
    hpull.Fit("gaus")
    hpull.Draw()
    c3.SaveAs("Pull.pdf")

    # Create the output directory
    if not os.path.isdir(opt.inDir):
        os.mkdir(opt.inDir)

    #print "<E_{b}> = (%3.2f #pm %3.2f) GeV" % (Eb,DEb)

    res.Close()
               
if __name__ == "__main__":
    sys.exit(main())


