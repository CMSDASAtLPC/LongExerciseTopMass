void nbtags()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 13 10:33:12 2021) by ROOT version 6.14/09
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
   p1->Range(0,0,1,1);
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
   
   TH1F *frame__7 = new TH1F("frame__7","t#bar{t}",5,0,5);
   frame__7->SetMinimum(0.1);
   frame__7->SetMaximum(0);
   frame__7->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__7->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__7->SetMarkerColor(ci);
   frame__7->GetXaxis()->SetTitle("b-tag multiplicity");
   frame__7->GetXaxis()->SetLabelFont(42);
   frame__7->GetXaxis()->SetLabelSize(0.035);
   frame__7->GetXaxis()->SetTitleSize(0.035);
   frame__7->GetXaxis()->SetTitleFont(42);
   frame__7->GetYaxis()->SetTitle(" Events");
   frame__7->GetYaxis()->SetNoExponent();
   frame__7->GetYaxis()->SetLabelFont(42);
   frame__7->GetYaxis()->SetTitleSize(0.045);
   frame__7->GetYaxis()->SetTitleOffset(1.3);
   frame__7->GetYaxis()->SetTitleFont(42);
   frame__7->GetZaxis()->SetLabelFont(42);
   frame__7->GetZaxis()->SetLabelSize(0.035);
   frame__7->GetZaxis()->SetTitleSize(0.035);
   frame__7->GetZaxis()->SetTitleFont(42);
   frame__7->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_4 = new TH1F("mc_stack_4","mc",5,0,5);
   mc_stack_4->SetMinimum(0);
   mc_stack_4->SetMaximum(0);
   mc_stack_4->SetDirectory(0);
   mc_stack_4->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_4->SetLineColor(ci);
   mc_stack_4->GetXaxis()->SetLabelFont(42);
   mc_stack_4->GetXaxis()->SetLabelSize(0.035);
   mc_stack_4->GetXaxis()->SetTitleSize(0.035);
   mc_stack_4->GetXaxis()->SetTitleFont(42);
   mc_stack_4->GetYaxis()->SetLabelFont(42);
   mc_stack_4->GetYaxis()->SetLabelSize(0.035);
   mc_stack_4->GetYaxis()->SetTitleSize(0.035);
   mc_stack_4->GetYaxis()->SetTitleOffset(0);
   mc_stack_4->GetYaxis()->SetTitleFont(42);
   mc_stack_4->GetZaxis()->SetLabelFont(42);
   mc_stack_4->GetZaxis()->SetLabelSize(0.035);
   mc_stack_4->GetZaxis()->SetTitleSize(0.035);
   mc_stack_4->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_4);
   
   
   TH1F *nbtags_t#bar{t}_stack_1 = new TH1F("nbtags_t#bar{t}_stack_1","t#bar{t}",5,0,5);
   nbtags_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nbtags_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nbtags_t#bar{t}_stack_1->SetMarkerColor(ci);
   nbtags_t#bar{t}_stack_1->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   nbtags_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Events");
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   nbtags_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   nbtags_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   nbtags_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_t#bar{t}_stack_1,"hist");
   
   TH1F *nbtags_Diboson_stack_2 = new TH1F("nbtags_Diboson_stack_2","Diboson",5,0,5);
   nbtags_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nbtags_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nbtags_Diboson_stack_2->SetMarkerColor(ci);
   nbtags_Diboson_stack_2->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   nbtags_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   nbtags_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   nbtags_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   nbtags_Diboson_stack_2->GetYaxis()->SetTitle(" Events");
   nbtags_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   nbtags_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   nbtags_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   nbtags_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   nbtags_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   nbtags_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   nbtags_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   nbtags_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   nbtags_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_Diboson_stack_2,"hist");
   
   TH1F *nbtags_DY_stack_3 = new TH1F("nbtags_DY_stack_3","DY",5,0,5);
   nbtags_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nbtags_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nbtags_DY_stack_3->SetMarkerColor(ci);
   nbtags_DY_stack_3->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_DY_stack_3->GetXaxis()->SetLabelFont(42);
   nbtags_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   nbtags_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   nbtags_DY_stack_3->GetXaxis()->SetTitleFont(42);
   nbtags_DY_stack_3->GetYaxis()->SetTitle(" Events");
   nbtags_DY_stack_3->GetYaxis()->SetLabelFont(42);
   nbtags_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   nbtags_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   nbtags_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   nbtags_DY_stack_3->GetYaxis()->SetTitleFont(42);
   nbtags_DY_stack_3->GetZaxis()->SetLabelFont(42);
   nbtags_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   nbtags_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   nbtags_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_DY_stack_3,"hist");
   
   TH1F *nbtags_W_stack_4 = new TH1F("nbtags_W_stack_4","W",5,0,5);
   nbtags_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nbtags_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nbtags_W_stack_4->SetMarkerColor(ci);
   nbtags_W_stack_4->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_W_stack_4->GetXaxis()->SetLabelFont(42);
   nbtags_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   nbtags_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   nbtags_W_stack_4->GetXaxis()->SetTitleFont(42);
   nbtags_W_stack_4->GetYaxis()->SetTitle(" Events");
   nbtags_W_stack_4->GetYaxis()->SetLabelFont(42);
   nbtags_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   nbtags_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   nbtags_W_stack_4->GetYaxis()->SetTitleOffset(0);
   nbtags_W_stack_4->GetYaxis()->SetTitleFont(42);
   nbtags_W_stack_4->GetZaxis()->SetLabelFont(42);
   nbtags_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   nbtags_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   nbtags_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_W_stack_4,"hist");
   
   TH1F *nbtags_SinglesPtop_stack_5 = new TH1F("nbtags_SinglesPtop_stack_5","Single top",5,0,5);
   nbtags_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nbtags_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nbtags_SinglesPtop_stack_5->SetMarkerColor(ci);
   nbtags_SinglesPtop_stack_5->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   nbtags_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Events");
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   nbtags_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   nbtags_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   nbtags_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nbtags_fx3007[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   0};
   Double_t Graph_from_nbtags_fy3007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_nbtags_felx3007[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nbtags_fely3007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_nbtags_fehx3007[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nbtags_fehy3007[6] = {
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph_from_nbtags_fx3007,Graph_from_nbtags_fy3007,Graph_from_nbtags_felx3007,Graph_from_nbtags_fehx3007,Graph_from_nbtags_fely3007,Graph_from_nbtags_fehy3007);
   grae->SetName("Graph_from_nbtags");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nbtags3007 = new TH1F("Graph_Graph_from_nbtags3007","Data",100,0,5.5);
   Graph_Graph_from_nbtags3007->SetMinimum(0);
   Graph_Graph_from_nbtags3007->SetMaximum(2.02516);
   Graph_Graph_from_nbtags3007->SetDirectory(0);
   Graph_Graph_from_nbtags3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nbtags3007->SetLineColor(ci);
   Graph_Graph_from_nbtags3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nbtags3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3007->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_nbtags3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nbtags3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nbtags3007);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_nbtags","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nbtags_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("nbtags_Diboson","Diboson","f");

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
   entry=leg->AddEntry("nbtags_DY","DY","f");

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
   entry=leg->AddEntry("nbtags_W","W","f");

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
   entry=leg->AddEntry("nbtags_Single top","Single top","f");

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
   p2->Range(-0.7228916,0.4485106,5.301205,1.597447);
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
   
   TH1F *ratioframe__8 = new TH1F("ratioframe__8","t#bar{t}",5,0,5);
   ratioframe__8->SetMinimum(0.46);
   ratioframe__8->SetMaximum(1.54);

   ci = TColor::GetColor("#cc0000");
   ratioframe__8->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__8->SetMarkerColor(ci);
   ratioframe__8->GetXaxis()->SetTitle("b-tag multiplicity");
   ratioframe__8->GetXaxis()->SetLabelFont(42);
   ratioframe__8->GetXaxis()->SetLabelSize(0);
   ratioframe__8->GetXaxis()->SetTitleSize(0);
   ratioframe__8->GetXaxis()->SetTitleOffset(0);
   ratioframe__8->GetXaxis()->SetTitleFont(42);
   ratioframe__8->GetYaxis()->SetTitle("Data/MC");
   ratioframe__8->GetYaxis()->SetNoExponent();
   ratioframe__8->GetYaxis()->SetNdivisions(5);
   ratioframe__8->GetYaxis()->SetLabelFont(42);
   ratioframe__8->GetYaxis()->SetLabelSize(0.18);
   ratioframe__8->GetYaxis()->SetTitleSize(0.2);
   ratioframe__8->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__8->GetYaxis()->SetTitleFont(42);
   ratioframe__8->GetZaxis()->SetLabelFont(42);
   ratioframe__8->GetZaxis()->SetLabelSize(0.035);
   ratioframe__8->GetZaxis()->SetTitleSize(0.035);
   ratioframe__8->GetZaxis()->SetTitleFont(42);
   ratioframe__8->Draw("");
   
   Double_t Graph_from_ratio_fx3008[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_ratio_fy3008[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_felx3008[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3008[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_fehx3008[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3008[5] = {
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph_from_ratio_fx3008,Graph_from_ratio_fy3008,Graph_from_ratio_felx3008,Graph_from_ratio_fehx3008,Graph_from_ratio_fely3008,Graph_from_ratio_fehy3008);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3008 = new TH1F("Graph_Graph_from_ratio3008","Data",100,0,5.5);
   Graph_Graph_from_ratio3008->SetMinimum(0);
   Graph_Graph_from_ratio3008->SetMaximum(1.1);
   Graph_Graph_from_ratio3008->SetDirectory(0);
   Graph_Graph_from_ratio3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3008->SetLineColor(ci);
   Graph_Graph_from_ratio3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3008->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3008);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
