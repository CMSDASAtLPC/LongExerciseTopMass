#!/usr/bin/env python
import math, ROOT, json, optparse, os, sys

#configuration
usage = 'usage: %prog [options]'
parser = optparse.OptionParser(usage)
parser.add_option('-i', '--inDir',       dest='inDir',       help='input directory with files',   default=None,        type='string')
parser.add_option('-j', '--json',        dest='json'  ,      help='json with list of files',      default=None,    type='string')
parser.add_option('-o', '--outDir',      dest='outDir',      help='output directory',             default='table',  type='string')
(opt, args) = parser.parse_args()

#read list of samples
samplesList=[]
jsonFile = open(opt.json,'r')
jsonList=json.load(jsonFile,encoding='utf-8').items()
jsonFile.close()
for tag,sample in jsonList: 
    if not sample[3] in samplesList and not "Data" in sample[3]:
        samplesList.append(sample[3])

print samplesList

#prepare output
if not os.path.isdir(opt.outDir):
    os.mkdir(opt.outDir)

texFile = "NumberOfEvents.tex"
tex = open(os.path.join(opt.outDir,texFile), 'w')
tex.write("\\documentclass[a4paper]{article}\n")
tex.write("\\usepackage{array}\n")
tex.write("\\usepackage{amsmath}\n")
tex.write("\\newcommand{\\ttbar}{\\ensuremath{\\text{t}\\bar{\\text{t}}}}\n")
tex.write("\\begin{document}\n")
tex.write("\\begin{center}\n")
tex.write("\n%%%\n")

tex.write("\\begin{table}[b!] \n")
tex.write("\\begin{center} \n")
tex.write("\\begin{tabular}{lc} \n")
tex.write("Process & Number of events \\\\ \n")
tex.write("\\hline\n")

inF = ROOT.TFile.Open(os.path.join(os.path.join(opt.inDir,"plots"),"plotter.root"))

#iterate over all processes
NSim = 0.
ErrNSim = 0.
for sampleInfo in samplesList: 
    print "nvtx/nvtx_%s" % sampleInfo
    hist = inF.Get(str("nvtx/nvtx_%s" % sampleInfo))

    NTot = 0.;
    ErrNTot = 0.;
    for i in range(0,hist.GetNbinsX()+2):
        NTot += hist.GetBinContent(i)
        ErrNTot += hist.GetBinError(i)*hist.GetBinError(i)
    #NTot = hist.Integral()
    ErrNTot = ROOT.TMath.Sqrt(ErrNTot)
    NSim += NTot
    ErrNSim += ErrNTot*ErrNTot
    if ErrNTot > 1:
        tex.write("%s & $%d\\pm%d$ \\\\ \n" % (sampleInfo.replace("t#bar{t}","\\ttbar"), NTot, ErrNTot))
    else:
        tex.write("%s & $%.1f\\pm%.1f$ \\\\ \n" % (sampleInfo.replace("t#bar{t}","\\ttbar"), NTot, ErrNTot))
 
hist = inF.Get("nvtx/nvtx").Clone()
NData = hist.Integral(-1,-1)

# finish output
tex.write("\\hline\n")
tex.write("Total from simulations & $%d\\pm%d$ \\\\ \n" % (NSim, ErrNTot))
tex.write("Data & $%d$ \\\\ \n" % (NData))
        
tex.write("\\end{tabular}\n")
tex.write("\\end{center}\n")
tex.write("\\end{table}\n")

tex.write("\n%%%\n")
tex.write("\\end{center}\n")
tex.write("\n\\end{document}")
    
tex.close()

savedir = os.getcwd()
os.chdir(opt.outDir)
cmd = "pdflatex " + texFile
os.system(cmd)
cmd = "rm -f *.aux *.log"
os.system(cmd)
#os.system("cd -")
os.chdir(savedir)
print "\n"+os.path.join(opt.outDir,texFile)+" has been created and compiled."
