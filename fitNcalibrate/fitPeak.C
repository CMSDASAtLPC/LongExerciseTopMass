#include <iomanip>
#include <string>
#include <sstream>

#include "TROOT.h"
#include "TMath.h"
#include "TStyle.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TPaveText.h"
#include "TH1.h"
#include "TF1.h"
#include "TGraph.h"
#include "TGraphErrors.h"
#include "TCanvas.h"
#include "TString.h"
#include "TFitResult.h"
#include "TFile.h"
#include "TTree.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooGaussian.h"
#include "RooPlot.h"
#include "RooArgSet.h"

#pragma once

#define TITLE_FONTSIZE 26
#define LABEL_FONTSIZE 18

#define LEFT_MARGIN 0.17
#define RIGHT_MARGIN 0.03
#define TOP_MARGIN 0.05
#define BOTTOM_MARGIN 0.13

/*
 * Performing a gaussian binned likelihood fit for data
 * and a CB binned likelihood fit for MC
 */

TStyle* createMyStyle() {
  TStyle *myStyle = new TStyle("myStyle", "myStyle");

  // For the canvas:
  myStyle->SetCanvasBorderMode(0);
  myStyle->SetCanvasColor(kWhite);
  myStyle->SetCanvasDefH(800); //Height of canvas
  myStyle->SetCanvasDefW(800); //Width of canvas
  myStyle->SetCanvasDefX(0);   //POsition on screen
  myStyle->SetCanvasDefY(0);

  // For the Pad:
  myStyle->SetPadBorderMode(0);
  myStyle->SetPadColor(kWhite);
  myStyle->SetPadGridX(false);
  myStyle->SetPadGridY(false);
  myStyle->SetGridColor(0);
  myStyle->SetGridStyle(3);
  myStyle->SetGridWidth(1);

  // For the frame:
  myStyle->SetFrameBorderMode(0);
  myStyle->SetFrameBorderSize(1);
  myStyle->SetFrameFillColor(0);
  myStyle->SetFrameFillStyle(0);
  myStyle->SetFrameLineColor(1);
  myStyle->SetFrameLineStyle(1);
  myStyle->SetFrameLineWidth(1);

  // For the histo:
  myStyle->SetHistLineStyle(1);
  myStyle->SetHistLineWidth(2);
  myStyle->SetEndErrorSize(2);

  //For the fit/function:
  myStyle->SetFitFormat("5.4g");
  myStyle->SetFuncColor(2);
  myStyle->SetFuncStyle(1);
  myStyle->SetFuncWidth(1);

  // For the statistics box:
  myStyle->SetOptFile(0);
  myStyle->SetStatColor(kWhite);
  myStyle->SetStatTextColor(1);
  myStyle->SetStatFormat("6.4g");
  myStyle->SetStatBorderSize(1);
  myStyle->SetStatH(0.12);
  myStyle->SetStatW(0.3);
  myStyle->SetStatY(0.92);
  myStyle->SetStatX(0.94);

  //For the date:
  myStyle->SetOptDate(0);

  // Margins:
  myStyle->SetPadTopMargin(TOP_MARGIN);
  myStyle->SetPadBottomMargin(BOTTOM_MARGIN);
  myStyle->SetPadLeftMargin(LEFT_MARGIN);
  myStyle->SetPadRightMargin(RIGHT_MARGIN);

  // For the Global title:
  myStyle->SetOptTitle(0);
  myStyle->SetTitleFont(63);
  myStyle->SetTitleColor(1);
  myStyle->SetTitleTextColor(1);
  myStyle->SetTitleFillColor(10);
  myStyle->SetTitleBorderSize(0);
  myStyle->SetTitleAlign(33); 
  myStyle->SetTitleX(1);
  myStyle->SetTitleFontSize(TITLE_FONTSIZE);

  // For the axis titles:

  myStyle->SetTitleColor(1, "XYZ");
  myStyle->SetTitleFont(43, "XYZ");
  myStyle->SetTitleSize(TITLE_FONTSIZE, "XYZ");
  myStyle->SetTitleYOffset(2.5); 
  myStyle->SetTitleXOffset(1.5);

  myStyle->SetLabelColor(1, "XYZ");
  myStyle->SetLabelFont(43, "XYZ");
  myStyle->SetLabelOffset(0.01, "YZ");
  myStyle->SetLabelOffset(0.015, "X");
  myStyle->SetLabelSize(LABEL_FONTSIZE, "XYZ");

  myStyle->SetAxisColor(1, "XYZ");
  myStyle->SetStripDecimals(kTRUE);
  myStyle->SetTickLength(0.03, "XYZ");
  myStyle->SetNdivisions(510, "XYZ");
  myStyle->SetPadTickX(1);  // To get tick marks on the opposite side of the frame
  myStyle->SetPadTickY(1);

  myStyle->SetOptLogx(0);
  myStyle->SetOptLogy(0);
  myStyle->SetOptLogz(0);

  myStyle->SetHatchesSpacing(1.3);
  myStyle->SetHatchesLineWidth(1);

  myStyle->cd();

  return myStyle;
}

void h_myStyle(TH1 *h,
    int line_color=1,
    int fill_color=50,
    int fill_style=1001,
    double y_min=-1111.,
    double y_max=-1111.,
    int ndivx=510,
    int ndivy=510,
    int marker_style=20,
    int marker_color=1,
    double marker_size=1.2,
    int optstat=0) {

  h->SetLineColor(line_color);
  h->SetFillColor(fill_color);
  h->SetFillStyle(fill_style);
  h->SetMaximum(y_max);
  h->SetMinimum(y_min);
  h->GetXaxis()->SetNdivisions(ndivx);
  h->GetYaxis()->SetNdivisions(ndivy);
  h->GetYaxis()->SetTitleOffset(2.5);

  h->SetMarkerStyle(marker_style);
  h->SetMarkerColor(marker_color);
  h->SetMarkerSize(marker_size);
  h->SetStats(optstat);

  double binSize = h->GetXaxis()->GetBinWidth(1);
  std::stringstream ss;
  ss << "1/E dN/dlog(E) / " << std::fixed << std::setprecision(1) << binSize;
  h->GetYaxis()->SetTitle(ss.str().c_str());
}

void leg_myStyle(TLegend *leg,
    int text_align = 12,
    int fill_style = 1,
    int fill_color = 10,
    int line_color = 0,
    int line_width = 0,
    int border_size = 1) {

  leg->SetTextAlign(text_align);
  leg->SetFillStyle(fill_style);
  leg->SetFillColor(fill_color);
  leg->SetLineColor(line_color);
  leg->SetLineWidth(line_width);
  leg->SetBorderSize(border_size);
}

void cms_myStyle(bool isData = true, int lumi = 2444){
  std::string status = "Simulation preliminary";
  if (isData) status = "Preliminary";
  TPaveText* pt_exp = new TPaveText(LEFT_MARGIN, 1 - 0.5 * TOP_MARGIN, 1 - RIGHT_MARGIN, 1, "brNDC");
  pt_exp->SetFillStyle(0);
  pt_exp->SetBorderSize(0);
  pt_exp->SetMargin(0);
  pt_exp->SetTextFont(62);
  pt_exp->SetTextSize(0.75 * TOP_MARGIN);
  pt_exp->SetTextAlign(13);
  TString d = TString::Format("CMS #font[52]{#scale[0.76]{%s}}", status.c_str());
  pt_exp->AddText(d);
  pt_exp->Draw();

  TString lumi_s = TString::Format("%d pb^{-1} (8 TeV)", lumi);
  TPaveText* pt_lumi = new TPaveText(LEFT_MARGIN, 1 - 0.5 * TOP_MARGIN, 1 - RIGHT_MARGIN, 1, "brNDC");
  pt_lumi->SetFillStyle(0);
  pt_lumi->SetBorderSize(0);
  pt_lumi->SetMargin(0);
  pt_lumi->SetTextFont(42);
  pt_lumi->SetTextSize(0.6 * TOP_MARGIN);
  pt_lumi->SetTextAlign(33);
  pt_lumi->AddText(lumi_s);
  pt_lumi->Draw();
}

//---------------------------------------------------------------
double myFitFunc(double *x, double *par)
  //---------------------------------------------------------------
{
  return par[2]*TMath::Gaus(x[0],par[0],par[1],kFALSE);
}

//---------------------------------------------------------------
double *gPeak(TString dir, bool isData)
  //---------------------------------------------------------------
{
  // Open file and get the histogram
  TFile *res = TFile::Open("../analyzeNplot/"+dir+"/plots/plotter.root");
  TString hName = "bjetenls/";
  if (isData)
    hName = hName + "bjetenls";
  else 
    hName = hName + "bjetenls_t#bar{t}";
  TH1F *histo = (TH1F*)res->Get(hName)->Clone();
  histo->Sumw2();
  histo->SetDirectory(0);
  if (!isData) {
    histo->Add((TH1F*)res->Get("bjetenls/bjetenls_t#bar{t}+V")->Clone());
    histo->Add((TH1F*)res->Get("bjetenls/bjetenls_DY")->Clone());
    histo->Add((TH1F*)res->Get("bjetenls/bjetenls_W")->Clone());
    histo->Add((TH1F*)res->Get("bjetenls/bjetenls_Diboson")->Clone());
  }

  // Define the fit function
  TF1* fitfunc = new TF1("Gaussian fit", myFitFunc, 3.6, 4.8, 3);
  // Set gaussian mean starting value and limits
  fitfunc->SetParameter(0, 4.2);
  fitfunc->SetParLimits(0, 4., 4.4);
  // Set gaussian width starting value and limits
  fitfunc->SetParameter(1, 0.65);
  fitfunc->SetParLimits(1, 0.35, 0.95);

  // Fit the histogram
  histo->Fit("Gaussian fit", "LEM", "", 3.6, 4.8); 
  // "L" stands for likelihood fit, "E" for Minos, "M" for improving fit results
  // cf. ftp://root.cern.ch/root/doc/5FittingHistograms.pdf

  // Plot the result
  TCanvas *cn = new TCanvas("cn", "cn", 800, 800);
  cn->cd();
  h_myStyle(histo,38,38,3002,histo->GetMinimum(),1.2*histo->GetMaximum(),510,510,20,38,1.,0.);
  histo->Draw("hist");
  fitfunc->SetLineColor(38); fitfunc->SetLineStyle(2); fitfunc->SetLineWidth(2);
  fitfunc->Draw("same");
  TLegend *leg = new TLegend(0.58,0.82,0.93,0.92,NULL,"brNDC");
  leg->SetTextSize(0.025);
  leg->SetHeader("Gaussian fit parameters:");
  leg->AddEntry(histo, TString::Format("#mu = (%4.2f #pm %4.2f) GeV/c^{2}",fitfunc->GetParameter(0),fitfunc->GetParError(0)), "f");
  leg->AddEntry((TObject*)0, TString::Format("#sigma = (%4.2f #pm %4.2f) GeV/c^{2}",fitfunc->GetParameter(1),fitfunc->GetParError(1)), "");
  leg_myStyle(leg);
  leg->Draw("same");
  cms_myStyle(isData);
  TString sName = dir+"/fit_";
  if (isData)
    sName = sName+"Data";
  else 
    sName = sName+"MC";
  cn->SaveAs(sName+".pdf");
  cn->SaveAs(sName+".png");

  res->Close();

  double *resPeak = new double[2];
  resPeak[0] = fitfunc->GetParameter(0);
  resPeak[1] = fitfunc->GetParError(0);
  return resPeak;
}

//---------------------------------------------------------------
int fitPeak(TString dir = "nominal", bool isData = true)
//---------------------------------------------------------------
{  
  TStyle* my_style = createMyStyle();
  my_style->cd();
  gROOT->SetBatch(true);

  gROOT->ProcessLine(".! mkdir "+dir);

  double *peakPos = gPeak(dir, isData); 
  TString res = TString::Format("<E_{b}> = (%3.2f #pm %3.2f) GeV", peakPos[0], peakPos[1]);
  cout << res << endl;

  return 0;
}



