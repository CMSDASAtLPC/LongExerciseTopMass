#include <iomanip>
#include <string>
#include <sstream>

#include "TROOT.h"
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
double *gPeak(TString dir, TString file)
  //---------------------------------------------------------------
{
  using namespace RooFit;

  TFile *res = TFile::Open("../analyzeNplot/"+dir+"/"+file+".root");

  RooRealVar Eb("mass", "E_{b}", 3., 7., "GeV");
  RooRealVar mean_gaus("mean_gaus", "mass_gaus", 4., 4.2, 4.4);
  RooRealVar width_gaus("width_gaus", "width_gaus", 0.35, 0.65, 0.95);

  TH1F *histo = (TH1F*)res->Get("bjetenls");
  RooDataHist *datahist = new RooDataHist("datahist", "datahist", RooArgList(Eb), histo, 1.);
  RooGaussian pdf("Gall", "Gall", Eb, mean_gaus, width_gaus);
  pdf.fitTo(*datahist, Range(3.6, 4.8), SumW2Error(kTRUE));

  TCanvas *cn = new TCanvas("cn", "cn", 800, 800);
  cn->cd();
  RooPlot *massframe = Eb.frame();
  datahist->plotOn(massframe, DataError(RooAbsData::SumW2)); 
  pdf.plotOn(massframe, LineColor(38), Range(3.6, 4.8), Name("bleu"));
  massframe->Draw();
  TLegend *leg = new TLegend(0.58,0.82,0.93,0.92,NULL,"brNDC");
  leg->SetTextSize(0.025);
  leg->SetHeader("Gaussian fit parameters:");
  leg->AddEntry(massframe->findObject("bleu"), TString::Format("#mu = (%4.2f #pm %4.2f) GeV/c^{2}",mean_gaus.getVal(),mean_gaus.getError()), "l");
  leg->AddEntry((TObject*)0, TString::Format("#sigma = (%4.2f #pm %4.2f) GeV/c^{2}",width_gaus.getVal(),width_gaus.getError()), "");
  leg_myStyle(leg);
  leg->Draw("same");
  massframe->Draw("same");
  cms_myStyle(false);
  cn->SaveAs(dir+"/fit_"+file+".pdf");
  cn->SaveAs(dir+"/fit_"+file+".png");

  res->Close();

  double *resPeak = new double[2];
  resPeak[0] = mean_gaus.getVal();
  resPeak[1] = mean_gaus.getError();
  return resPeak;
}

//---------------------------------------------------------------
int fitPeak(TString dir = "nominal", TString file = "MC13TeV_TTJets")
//---------------------------------------------------------------
{  
  TStyle* my_style = createMyStyle();
  my_style->cd();
  gROOT->SetBatch(true);

  gROOT->ProcessLine(".! mkdir "+dir);

  double *peakPos = gPeak(dir, file); 
  TString res = TString::Format("<E_{b}> = (%3.2f #pm %3.2f) GeV", peakPos[0], peakPos[1]);
  cout << res << endl;

  return 0;
}



