void njets()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 14 18:00:08 2021) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,500,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0);
   c->SetRightMargin(0);
   c->SetTopMargin(0);
   c->SetBottomMargin(0);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,0.85);
   p1->Draw();
   p1->cd();
   p1->Range(-1.445783,-14183.96,10.60241,104016.5);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetGridx();
   p1->SetLeftMargin(0.12);
   p1->SetRightMargin(0.05);
   p1->SetTopMargin(0.01);
   p1->SetBottomMargin(0.12);
   p1->SetFrameBorderMode(0);
   p1->SetFrameBorderMode(0);
   
   TH1F *frame__3 = new TH1F("frame__3","t#bar{t}",10,0,10);
   frame__3->SetMinimum(0.1);
   frame__3->SetMaximum(102834.5);
   frame__3->SetEntries(32767);
   frame__3->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__3->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__3->SetMarkerColor(ci);
   frame__3->GetXaxis()->SetTitle("jet multiplicity");
   frame__3->GetXaxis()->SetLabelFont(42);
   frame__3->GetXaxis()->SetLabelSize(0.035);
   frame__3->GetXaxis()->SetTitleSize(0.035);
   frame__3->GetXaxis()->SetTitleFont(42);
   frame__3->GetYaxis()->SetTitle(" Events");
   frame__3->GetYaxis()->SetNoExponent();
   frame__3->GetYaxis()->SetLabelFont(42);
   frame__3->GetYaxis()->SetTitleSize(0.045);
   frame__3->GetYaxis()->SetTitleOffset(1.3);
   frame__3->GetYaxis()->SetTitleFont(42);
   frame__3->GetZaxis()->SetLabelFont(42);
   frame__3->GetZaxis()->SetLabelSize(0.035);
   frame__3->GetZaxis()->SetTitleSize(0.035);
   frame__3->GetZaxis()->SetTitleFont(42);
   frame__3->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_2 = new TH1F("mc_stack_2","mc",10,0,10);
   mc_stack_2->SetMinimum(-1.958145e-09);
   mc_stack_2->SetMaximum(83058.67);
   mc_stack_2->SetDirectory(0);
   mc_stack_2->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_2->SetLineColor(ci);
   mc_stack_2->GetXaxis()->SetLabelFont(42);
   mc_stack_2->GetXaxis()->SetLabelSize(0.035);
   mc_stack_2->GetXaxis()->SetTitleSize(0.035);
   mc_stack_2->GetXaxis()->SetTitleFont(42);
   mc_stack_2->GetYaxis()->SetLabelFont(42);
   mc_stack_2->GetYaxis()->SetLabelSize(0.035);
   mc_stack_2->GetYaxis()->SetTitleSize(0.035);
   mc_stack_2->GetYaxis()->SetTitleOffset(0);
   mc_stack_2->GetYaxis()->SetTitleFont(42);
   mc_stack_2->GetZaxis()->SetLabelFont(42);
   mc_stack_2->GetZaxis()->SetLabelSize(0.035);
   mc_stack_2->GetZaxis()->SetTitleSize(0.035);
   mc_stack_2->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_2);
   
   
   TH1F *njets_t#bar{t}_stack_1 = new TH1F("njets_t#bar{t}_stack_1","t#bar{t}",10,0,10);
   njets_t#bar{t}_stack_1->SetBinContent(3,74611.02);
   njets_t#bar{t}_stack_1->SetBinContent(4,39100.77);
   njets_t#bar{t}_stack_1->SetBinContent(5,15267.88);
   njets_t#bar{t}_stack_1->SetBinContent(6,4662.705);
   njets_t#bar{t}_stack_1->SetBinContent(7,1228.678);
   njets_t#bar{t}_stack_1->SetBinContent(8,354.2231);
   njets_t#bar{t}_stack_1->SetBinContent(9,60.62996);
   njets_t#bar{t}_stack_1->SetBinContent(10,18.8769);
   njets_t#bar{t}_stack_1->SetBinContent(11,16.71329);
   njets_t#bar{t}_stack_1->SetBinError(3,630.9328);
   njets_t#bar{t}_stack_1->SetBinError(4,457.0695);
   njets_t#bar{t}_stack_1->SetBinError(5,285.9462);
   njets_t#bar{t}_stack_1->SetBinError(6,157.4911);
   njets_t#bar{t}_stack_1->SetBinError(7,80.96022);
   njets_t#bar{t}_stack_1->SetBinError(8,44.008);
   njets_t#bar{t}_stack_1->SetBinError(9,17.93386);
   njets_t#bar{t}_stack_1->SetBinError(10,9.601362);
   njets_t#bar{t}_stack_1->SetBinError(11,9.655742);
   njets_t#bar{t}_stack_1->SetEntries(27079);
   njets_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   njets_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   njets_t#bar{t}_stack_1->SetMarkerColor(ci);
   njets_t#bar{t}_stack_1->GetXaxis()->SetTitle("jet multiplicity");
   njets_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   njets_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   njets_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   njets_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   njets_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Events");
   njets_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   njets_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   njets_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   njets_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   njets_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   njets_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   njets_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   njets_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   njets_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(njets_t#bar{t}_stack_1,"hist");
   
   TH1F *njets_Diboson_stack_2 = new TH1F("njets_Diboson_stack_2","Diboson",10,0,10);
   njets_Diboson_stack_2->SetBinContent(3,121.6821);
   njets_Diboson_stack_2->SetBinContent(4,41.91245);
   njets_Diboson_stack_2->SetBinContent(5,13.49563);
   njets_Diboson_stack_2->SetBinContent(6,4.672719);
   njets_Diboson_stack_2->SetBinContent(7,0.388285);
   njets_Diboson_stack_2->SetBinError(3,6.891139);
   njets_Diboson_stack_2->SetBinError(4,4.04514);
   njets_Diboson_stack_2->SetBinError(5,2.297015);
   njets_Diboson_stack_2->SetBinError(6,1.321089);
   njets_Diboson_stack_2->SetBinError(7,0.388285);
   njets_Diboson_stack_2->SetEntries(511);
   njets_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   njets_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   njets_Diboson_stack_2->SetMarkerColor(ci);
   njets_Diboson_stack_2->GetXaxis()->SetTitle("jet multiplicity");
   njets_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   njets_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   njets_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   njets_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   njets_Diboson_stack_2->GetYaxis()->SetTitle(" Events");
   njets_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   njets_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   njets_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   njets_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   njets_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   njets_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   njets_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   njets_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   njets_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(njets_Diboson_stack_2,"hist");
   
   TH1F *njets_DY_stack_3 = new TH1F("njets_DY_stack_3","DY",10,0,10);
   njets_DY_stack_3->SetBinContent(3,248.0725);
   njets_DY_stack_3->SetBinContent(4,91.23482);
   njets_DY_stack_3->SetBinError(3,64.50947);
   njets_DY_stack_3->SetBinError(4,41.05902);
   njets_DY_stack_3->SetEntries(21);
   njets_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   njets_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   njets_DY_stack_3->SetMarkerColor(ci);
   njets_DY_stack_3->GetXaxis()->SetTitle("jet multiplicity");
   njets_DY_stack_3->GetXaxis()->SetLabelFont(42);
   njets_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   njets_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   njets_DY_stack_3->GetXaxis()->SetTitleFont(42);
   njets_DY_stack_3->GetYaxis()->SetTitle(" Events");
   njets_DY_stack_3->GetYaxis()->SetLabelFont(42);
   njets_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   njets_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   njets_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   njets_DY_stack_3->GetYaxis()->SetTitleFont(42);
   njets_DY_stack_3->GetZaxis()->SetLabelFont(42);
   njets_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   njets_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   njets_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(njets_DY_stack_3,"hist");
   
   TH1F *njets_W_stack_4 = new TH1F("njets_W_stack_4","W",10,0,10);
   njets_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   njets_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   njets_W_stack_4->SetMarkerColor(ci);
   njets_W_stack_4->GetXaxis()->SetTitle("jet multiplicity");
   njets_W_stack_4->GetXaxis()->SetLabelFont(42);
   njets_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   njets_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   njets_W_stack_4->GetXaxis()->SetTitleFont(42);
   njets_W_stack_4->GetYaxis()->SetTitle(" Events");
   njets_W_stack_4->GetYaxis()->SetLabelFont(42);
   njets_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   njets_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   njets_W_stack_4->GetYaxis()->SetTitleOffset(0);
   njets_W_stack_4->GetYaxis()->SetTitleFont(42);
   njets_W_stack_4->GetZaxis()->SetLabelFont(42);
   njets_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   njets_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   njets_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(njets_W_stack_4,"hist");
   
   TH1F *njets_SinglesPtop_stack_5 = new TH1F("njets_SinglesPtop_stack_5","Single top",10,0,10);
   njets_SinglesPtop_stack_5->SetBinContent(3,4122.728);
   njets_SinglesPtop_stack_5->SetBinContent(4,1701.416);
   njets_SinglesPtop_stack_5->SetBinContent(5,451.7709);
   njets_SinglesPtop_stack_5->SetBinContent(6,129.3519);
   njets_SinglesPtop_stack_5->SetBinContent(7,22.28345);
   njets_SinglesPtop_stack_5->SetBinContent(8,8.490811);
   njets_SinglesPtop_stack_5->SetBinContent(9,2.325978);
   njets_SinglesPtop_stack_5->SetBinError(3,74.2349);
   njets_SinglesPtop_stack_5->SetBinError(4,47.72606);
   njets_SinglesPtop_stack_5->SetBinError(5,24.65347);
   njets_SinglesPtop_stack_5->SetBinError(6,13.18814);
   njets_SinglesPtop_stack_5->SetBinError(7,5.31733);
   njets_SinglesPtop_stack_5->SetBinError(8,3.497065);
   njets_SinglesPtop_stack_5->SetBinError(9,1.666833);
   njets_SinglesPtop_stack_5->SetEntries(5156);
   njets_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   njets_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   njets_SinglesPtop_stack_5->SetMarkerColor(ci);
   njets_SinglesPtop_stack_5->GetXaxis()->SetTitle("jet multiplicity");
   njets_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   njets_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   njets_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   njets_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   njets_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Events");
   njets_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   njets_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   njets_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   njets_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   njets_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   njets_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   njets_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   njets_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   njets_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(njets_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_njets_fx3003[11] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   0};
   Double_t Graph_from_njets_fy3003[11] = {
   0,
   0,
   72655,
   38342,
   14101,
   4433,
   1200,
   293,
   72,
   19,
   0};
   Double_t Graph_from_njets_felx3003[11] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_njets_fely3003[11] = {
   0,
   0,
   269.5459,
   195.8111,
   118.7476,
   66.58078,
   34.64102,
   17.11724,
   8.465699,
   4.320299,
   0};
   Double_t Graph_from_njets_fehx3003[11] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_njets_fehy3003[11] = {
   1.841055,
   1.841055,
   269.5459,
   195.8111,
   118.7476,
   66.58078,
   34.64102,
   17.11724,
   9.524792,
   5.435307,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_from_njets_fx3003,Graph_from_njets_fy3003,Graph_from_njets_felx3003,Graph_from_njets_fehx3003,Graph_from_njets_fely3003,Graph_from_njets_fehy3003);
   grae->SetName("Graph_from_njets");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_njets3003 = new TH1F("Graph_Graph_from_njets3003","Data",100,0,11);
   Graph_Graph_from_njets3003->SetMinimum(0);
   Graph_Graph_from_njets3003->SetMaximum(80217);
   Graph_Graph_from_njets3003->SetDirectory(0);
   Graph_Graph_from_njets3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_njets3003->SetLineColor(ci);
   Graph_Graph_from_njets3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_njets3003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_njets3003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_njets3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_njets3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_njets3003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_njets3003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_njets3003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_njets3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_njets3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_njets3003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_njets3003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_njets3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_njets3003);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.45,0.815,0.98,0.925,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(16);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph_from_njets","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("njets_t#bar{t}","t#bar{t}","f");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("njets_Diboson","Diboson","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("njets_DY","DY","f");

   ci = TColor::GetColor("#33ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("njets_W","W","f");

   ci = TColor::GetColor("#3366ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("njets_Single top","Single top","f");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.95,"#bf{CMS} #it{Preliminary} 35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(43);
   tex->SetTextSize(16);
   tex->SetLineWidth(2);
   tex->Draw();
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0,0.85,1,1);
   p2->Draw();
   p2->cd();
   p2->Range(-1.445783,0.4485106,10.60241,1.597447);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetGridx();
   p2->SetGridy();
   p2->SetLeftMargin(0.12);
   p2->SetRightMargin(0.05);
   p2->SetTopMargin(0.05);
   p2->SetBottomMargin(0.01);
   p2->SetFrameBorderMode(0);
   p2->SetFrameBorderMode(0);
   
   TH1F *ratioframe__4 = new TH1F("ratioframe__4","t#bar{t}",10,0,10);
   ratioframe__4->SetMinimum(0.46);
   ratioframe__4->SetMaximum(1.54);
   ratioframe__4->SetEntries(32767);

   ci = TColor::GetColor("#cc0000");
   ratioframe__4->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__4->SetMarkerColor(ci);
   ratioframe__4->GetXaxis()->SetTitle("jet multiplicity");
   ratioframe__4->GetXaxis()->SetLabelFont(42);
   ratioframe__4->GetXaxis()->SetLabelSize(0);
   ratioframe__4->GetXaxis()->SetTitleSize(0);
   ratioframe__4->GetXaxis()->SetTitleOffset(0);
   ratioframe__4->GetXaxis()->SetTitleFont(42);
   ratioframe__4->GetYaxis()->SetTitle("Data/MC");
   ratioframe__4->GetYaxis()->SetNoExponent();
   ratioframe__4->GetYaxis()->SetNdivisions(5);
   ratioframe__4->GetYaxis()->SetLabelFont(42);
   ratioframe__4->GetYaxis()->SetLabelSize(0.18);
   ratioframe__4->GetYaxis()->SetTitleSize(0.2);
   ratioframe__4->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__4->GetYaxis()->SetTitleFont(42);
   ratioframe__4->GetZaxis()->SetLabelFont(42);
   ratioframe__4->GetZaxis()->SetLabelSize(0.035);
   ratioframe__4->GetZaxis()->SetTitleSize(0.035);
   ratioframe__4->GetZaxis()->SetTitleFont(42);
   ratioframe__4->Draw("");
   
   Double_t Graph_from_ratio_fx3004[10] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5};
   Double_t Graph_from_ratio_fy3004[10] = {
   0,
   0,
   0.9184803,
   0.9366481,
   0.8962606,
   0.9241713,
   0.9589648,
   0.8077993,
   1.143657,
   1.006521};
   Double_t Graph_from_ratio_felx3004[10] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3004[10] = {
   0,
   0,
   0.008160234,
   0.01159054,
   0.01800828,
   0.03346499,
   0.06806192,
   0.1090584,
   0.3538638,
   0.5616138};
   Double_t Graph_from_ratio_fehx3004[10] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3004[10] = {
   0,
   0,
   0.008160234,
   0.01159054,
   0.01800828,
   0.03346499,
   0.06806192,
   0.1090584,
   0.3538638,
   0.5616138};
   grae = new TGraphAsymmErrors(10,Graph_from_ratio_fx3004,Graph_from_ratio_fy3004,Graph_from_ratio_felx3004,Graph_from_ratio_fehx3004,Graph_from_ratio_fely3004,Graph_from_ratio_fehy3004);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3004 = new TH1F("Graph_Graph_from_ratio3004","Data",100,0,11);
   Graph_Graph_from_ratio3004->SetMinimum(0);
   Graph_Graph_from_ratio3004->SetMaximum(1.724949);
   Graph_Graph_from_ratio3004->SetDirectory(0);
   Graph_Graph_from_ratio3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3004->SetLineColor(ci);
   Graph_Graph_from_ratio3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3004);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
