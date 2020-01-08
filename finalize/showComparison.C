int showComparison(double lumi = 2444., double value = 172.5, double stat = 5., double syst = 5.){

   TCanvas *topmass_cms = new TCanvas("topmass_cms", "topmass_cms",1367,52,550,650);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   topmass_cms->Range(162,-1.275181,184,9.351325);
   topmass_cms->SetFillColor(0);
   topmass_cms->SetBorderMode(0);
   topmass_cms->SetBorderSize(2);
   topmass_cms->SetTickx(1);
   topmass_cms->SetTicky(1);
   topmass_cms->SetLeftMargin(0.05);
   topmass_cms->SetRightMargin(0.05);
   topmass_cms->SetTopMargin(0.05);
   topmass_cms->SetBottomMargin(0.12);
   topmass_cms->SetFrameFillStyle(0);
   topmass_cms->SetFrameBorderMode(0);
   topmass_cms->SetFrameFillStyle(0);
   topmass_cms->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle(";m_{t} [GeV];");
   
   TGraphErrors *gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(0);
   gre->SetLineWidth(0);
   gre->SetMarkerColor(0);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,173,-1);
   gre->SetPointError(0,9,0.0001);
   gre->SetPoint(1,173,6);
   gre->SetPointError(1,9,0.0001);
   
   TH1F *Graph_Graph_Graph1316 = new TH1F("Graph_Graph_Graph1316","Graph",100,162.2,183.8);
   Graph_Graph_Graph1316->SetMinimum(0);
   Graph_Graph_Graph1316->SetMaximum(10);
   Graph_Graph_Graph1316->SetDirectory(0);
   Graph_Graph_Graph1316->SetStats(0);
   Graph_Graph_Graph1316->SetLineStyle(0);
   Graph_Graph_Graph1316->SetMarkerStyle(20);
   Graph_Graph_Graph1316->GetXaxis()->SetNdivisions(505);
   Graph_Graph_Graph1316->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1316->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1316->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph1316->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1316->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph1316->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1316->GetYaxis()->SetNdivisions(505);
   Graph_Graph_Graph1316->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1316->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1316->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph1316->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1316->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph1316->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1316->GetZaxis()->SetNdivisions(505);
   Graph_Graph_Graph1316->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1316->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1316->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph1316->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1316->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph1316);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,172.82,5.0);
   gre->SetPointError(0,1.234706,0.0001);
   gre->SetPoint(1,172.32,4.2);
   gre->SetPointError(1,0.6407808,0.0001);
   gre->SetPoint(2,172.35,3.4);
   gre->SetPointError(2,0.5059644,0.0001);
   gre->SetPoint(3,172.44,2.55);
   gre->SetPointError(3,0.4876474,0.0001);
   gre->SetPoint(4,172.25,1.75);
   gre->SetPointError(4,0.62514,0.0001);
   gre->SetPoint(5,value,1);
   gre->SetPointError(5,sqrt(stat*stat+syst*syst),0.0001);
   gre->SetPoint(6,174.34,0.15);
   gre->SetPointError(6,0.6382006,0.0001);
   gre->SetPoint(7,173.34,-0.7);
   gre->SetPointError(7,0.7596052,0.0001);
   
   TH1F *Graph_Graph_Graph1417 = new TH1F("Graph_Graph_Graph1417","Graph",100,168.8029,175.7771);
   Graph_Graph_Graph1417->SetMinimum(0.);
   Graph_Graph_Graph1417->SetMaximum(10);
   Graph_Graph_Graph1417->SetDirectory(0);
   Graph_Graph_Graph1417->SetStats(0);
   Graph_Graph_Graph1417->SetLineStyle(0);
   Graph_Graph_Graph1417->SetMarkerStyle(20);
   Graph_Graph_Graph1417->GetXaxis()->SetNdivisions(505);
   Graph_Graph_Graph1417->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1417->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1417->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph1417->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1417->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph1417->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1417->GetYaxis()->SetNdivisions(505);
   Graph_Graph_Graph1417->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1417->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1417->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph1417->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1417->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph1417->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1417->GetZaxis()->SetNdivisions(505);
   Graph_Graph_Graph1417->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1417->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1417->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph1417->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1417->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph1417);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,172.82,5.0);
   gre->SetPointError(0,0.19,0.0001);
   gre->SetPoint(1,172.32,4.2);
   gre->SetPointError(1,0.25,0.0001);
   gre->SetPoint(2,172.35,3.4);
   gre->SetPointError(2,0.16,0.0001);
   gre->SetPoint(3,172.44,2.55);
   gre->SetPointError(3,0.13,0.0001);
   gre->SetPoint(4,172.25,1.75);
   gre->SetPointError(4,0.08,0.0001);
   gre->SetPoint(5,value,1);
   gre->SetPointError(5,stat,0.0001);
   gre->SetPoint(6,174.34,0.15);
   gre->SetPointError(6,0.37,0.0001);
   gre->SetPoint(7,173.34,-0.7);
   gre->SetPointError(7,0.27,0.0001);
   
   TH1F *Graph_Graph_Graph1518 = new TH1F("Graph_Graph_Graph1518","Graph",100,170.761,175.069);
   Graph_Graph_Graph1518->SetMinimum(0);
   Graph_Graph_Graph1518->SetMaximum(10);
   Graph_Graph_Graph1518->SetDirectory(0);
   Graph_Graph_Graph1518->SetStats(0);
   Graph_Graph_Graph1518->SetLineStyle(0);
   Graph_Graph_Graph1518->SetMarkerStyle(20);
   Graph_Graph_Graph1518->GetXaxis()->SetNdivisions(505);
   Graph_Graph_Graph1518->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1518->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1518->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph1518->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1518->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph1518->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1518->GetYaxis()->SetNdivisions(505);
   Graph_Graph_Graph1518->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1518->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1518->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph1518->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1518->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph1518->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1518->GetZaxis()->SetNdivisions(505);
   Graph_Graph_Graph1518->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1518->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1518->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph1518->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1518->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph1518);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP,same");
   multigraph->GetXaxis()->SetTitle("m_{t} [GeV]");
   multigraph->GetXaxis()->SetNdivisions(505);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.007);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(0.9);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetNdivisions(505);
   multigraph->GetYaxis()->SetLabelColor(0);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.007);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTickLength(0);
   multigraph->GetYaxis()->SetTitleOffset(1.25);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLine *line = new TLine(164,0.4,182,0.4);
   line->SetLineStyle(2);
   line->Draw();
   

   TPaveLabel *pl = new TPaveLabel(0.07,0.7764257,0.5,0.8264257,"CMS 2012, dilepton","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.7564257,0.5,0.8064257,"PRD 93 (2016) 072004, 19.7 fb^{-1}","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.7764257,0.93,0.8264257,"172.82 #pm 0.19 #pm 1.22 GeV","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.7564257,0.93,0.8064257,"(value #pm stat #pm syst)","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.6939103,0.5,0.7435897,"CMS 2012, all-jets","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.6739103,0.5,0.7235897,"PRD 93 (2016) 072004, 18.2 fb^{-1}","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.6939103,0.93,0.7435897,"172.32 #pm 0.25 #pm 0.59 GeV","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.6739103,0.93,0.7235897,"(value #pm stat #pm syst)","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.6073718,0.5,0.6586538,"CMS 2012, lepton+jets","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.5873718,0.5,0.6386538,"PRD 93 (2016) 072004, 19.7 fb^{-1}","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.6073718,0.93,0.6586538,"172.35 #pm 0.16 #pm 0.48 GeV","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.5873718,0.93,0.6386538,"(value #pm stat #pm syst)","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.5224359,0.5,0.5721154,"CMS legacy","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#660000");
   pl->SetTextColor(ci);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.5024359,0.5,0.5521154,"PRD 93 (2016) 072004","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#660000");
   pl->SetTextColor(ci);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.5224359,0.93,0.5721154,"172.44 #pm 0.13 #pm 0.47 GeV","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#660000");
   pl->SetTextColor(ci);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.5024359,0.93,0.5521154,"(value #pm stat #pm syst)","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#660000");
   pl->SetTextColor(ci);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.4326923,0.5,0.4823718,"CMS 2016, lepton+jets","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#000000");
   pl->SetTextColor(ci);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.4126923,0.5,0.4623718,"TOP-17-007 (2017), 35.9 fb^{-1}","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#000000");
   pl->SetTextColor(ci);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.4326923,0.93,0.4823718,"172.25 #pm 0.08 #pm 0.62 GeV","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#000000");
   pl->SetTextColor(ci);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.4126923,0.93,0.4623718,"(value #pm stat #pm syst)","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#000000");
   pl->SetTextColor(ci);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.3525641,0.5,0.4022436,"CMS DAS 2018, b-energy peak","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#000066");
   pl->SetTextColor(ci);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.3325641,0.5,0.3822436,TString::Format("This analysis, %.0f pb^{-1}", lumi),"brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#000066");
   pl->SetTextColor(ci);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.3525641,0.93,0.4022436,TString::Format("%3.2f #pm %1.2f #pm %1.2f GeV", value, stat, syst),"brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#000066");
   pl->SetTextColor(ci);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.3325641,0.93,0.3822436,"(value #pm stat #pm syst)","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#000066");
   pl->SetTextColor(ci);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.2516026,0.5,0.3028846,"Tevatron combination","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#333333");
   pl->SetTextColor(ci);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.2316026,0.5,0.2828846,"arXiv:1407.2682 (2014)","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#333333");
   pl->SetTextColor(ci);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.2516026,0.93,0.3028846,"174.34 #pm 0.37 #pm 0.52 GeV","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#333333");
   pl->SetTextColor(ci);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.2316026,0.93,0.2828846,"(value #pm stat #pm syst)","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#333333");
   pl->SetTextColor(ci);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.1666667,0.5,0.2163462,"World combination","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#333333");
   pl->SetTextColor(ci);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.07,0.1466667,0.5,0.1963462,"arXiv:1403.4427 (2014)","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#333333");
   pl->SetTextColor(ci);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.1666667,0.93,0.2163462,"173.34 #pm 0.27 #pm 0.71 GeV","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#333333");
   pl->SetTextColor(ci);
   pl->SetTextSize(0.45);
   pl->Draw();
   
   pl = new TPaveLabel(0.63,0.1466667,0.93,0.1963462,"(value #pm stat #pm syst)","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);

   ci = TColor::GetColor("#333333");
   pl->SetTextColor(ci);
   pl->SetTextFont(42);
   pl->SetTextSize(0.45);
   pl->Draw();


   pl = new TPaveLabel(0.06,0.875,0.95,0.925,"CMS","br NDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextSize(1.1);
   pl->Draw();
   
   pl = new TPaveLabel(0.06,0.835,0.95,0.885,"#it{Preliminary}","br NDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextFont(42);
   pl->SetTextSize(0.8);
   pl->Draw();
   topmass_cms->Modified();
   topmass_cms->cd();
   topmass_cms->SetSelected(topmass_cms);

   topmass_cms->SaveAs("Results.pdf");
   topmass_cms->SaveAs("Results.png");

   return 0;
}


