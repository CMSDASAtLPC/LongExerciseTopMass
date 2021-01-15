void nbtags()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 14 13:08:04 2021) by ROOT version 6.14/09
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
   p1->Range(-0.7228916,-16263.57,5.301205,119267);
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
   
   TH1F *frame__9 = new TH1F("frame__9","t#bar{t}",5,0,5);
   frame__9->SetMinimum(0.1);
   frame__9->SetMaximum(117911.7);
   frame__9->SetEntries(365945);
   frame__9->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__9->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__9->SetMarkerColor(ci);
   frame__9->GetXaxis()->SetTitle("b-tag multiplicity");
   frame__9->GetXaxis()->SetLabelFont(42);
   frame__9->GetXaxis()->SetLabelSize(0.035);
   frame__9->GetXaxis()->SetTitleSize(0.035);
   frame__9->GetXaxis()->SetTitleFont(42);
   frame__9->GetYaxis()->SetTitle(" Events");
   frame__9->GetYaxis()->SetNoExponent();
   frame__9->GetYaxis()->SetLabelFont(42);
   frame__9->GetYaxis()->SetTitleSize(0.045);
   frame__9->GetYaxis()->SetTitleOffset(1.3);
   frame__9->GetYaxis()->SetTitleFont(42);
   frame__9->GetZaxis()->SetLabelFont(42);
   frame__9->GetZaxis()->SetLabelSize(0.035);
   frame__9->GetZaxis()->SetTitleSize(0.035);
   frame__9->GetZaxis()->SetTitleFont(42);
   frame__9->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_5 = new TH1F("mc_stack_5","mc",5,0,5);
   mc_stack_5->SetMinimum(0);
   mc_stack_5->SetMaximum(95236.37);
   mc_stack_5->SetDirectory(0);
   mc_stack_5->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_5->SetLineColor(ci);
   mc_stack_5->GetXaxis()->SetLabelFont(42);
   mc_stack_5->GetXaxis()->SetLabelSize(0.035);
   mc_stack_5->GetXaxis()->SetTitleSize(0.035);
   mc_stack_5->GetXaxis()->SetTitleFont(42);
   mc_stack_5->GetYaxis()->SetLabelFont(42);
   mc_stack_5->GetYaxis()->SetLabelSize(0.035);
   mc_stack_5->GetYaxis()->SetTitleSize(0.035);
   mc_stack_5->GetYaxis()->SetTitleOffset(0);
   mc_stack_5->GetYaxis()->SetTitleFont(42);
   mc_stack_5->GetZaxis()->SetLabelFont(42);
   mc_stack_5->GetZaxis()->SetLabelSize(0.035);
   mc_stack_5->GetZaxis()->SetTitleSize(0.035);
   mc_stack_5->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_5);
   
   
   TH1F *nbtags_t#bar{t}_stack_1 = new TH1F("nbtags_t#bar{t}_stack_1","t#bar{t}",5,0,5);
   nbtags_t#bar{t}_stack_1->SetBinContent(2,85300.87);
   nbtags_t#bar{t}_stack_1->SetBinContent(3,52800.67);
   nbtags_t#bar{t}_stack_1->SetBinError(2,187.2514);
   nbtags_t#bar{t}_stack_1->SetBinError(3,147.2167);
   nbtags_t#bar{t}_stack_1->SetEntries(360257);
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
   nbtags_Diboson_stack_2->SetBinContent(2,171.6413);
   nbtags_Diboson_stack_2->SetBinContent(3,10.50985);
   nbtags_Diboson_stack_2->SetBinError(2,8.188742);
   nbtags_Diboson_stack_2->SetBinError(3,1.991931);
   nbtags_Diboson_stack_2->SetEntries(511);
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
   nbtags_DY_stack_3->SetBinContent(2,283.7373);
   nbtags_DY_stack_3->SetBinContent(3,55.57008);
   nbtags_DY_stack_3->SetBinError(2,69.35243);
   nbtags_DY_stack_3->SetBinError(3,32.2111);
   nbtags_DY_stack_3->SetEntries(21);
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
   nbtags_SinglesPtop_stack_5->SetBinContent(2,4945.064);
   nbtags_SinglesPtop_stack_5->SetBinContent(3,1493.305);
   nbtags_SinglesPtop_stack_5->SetBinError(2,81.32827);
   nbtags_SinglesPtop_stack_5->SetBinError(3,44.71368);
   nbtags_SinglesPtop_stack_5->SetEntries(5156);
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
   
   Double_t Graph_from_nbtags_fx3009[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   0};
   Double_t Graph_from_nbtags_fy3009[6] = {
   0,
   83737,
   47383,
   0,
   0,
   0};
   Double_t Graph_from_nbtags_felx3009[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nbtags_fely3009[6] = {
   0,
   289.3735,
   217.6764,
   0,
   0,
   0};
   Double_t Graph_from_nbtags_fehx3009[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nbtags_fehy3009[6] = {
   1.841055,
   289.3735,
   217.6764,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph_from_nbtags_fx3009,Graph_from_nbtags_fy3009,Graph_from_nbtags_felx3009,Graph_from_nbtags_fehx3009,Graph_from_nbtags_fely3009,Graph_from_nbtags_fehy3009);
   grae->SetName("Graph_from_nbtags");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nbtags3009 = new TH1F("Graph_Graph_from_nbtags3009","Data",100,0,5.5);
   Graph_Graph_from_nbtags3009->SetMinimum(0);
   Graph_Graph_from_nbtags3009->SetMaximum(92429.01);
   Graph_Graph_from_nbtags3009->SetDirectory(0);
   Graph_Graph_from_nbtags3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nbtags3009->SetLineColor(ci);
   Graph_Graph_from_nbtags3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nbtags3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_nbtags3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nbtags3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nbtags3009);
   
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
   
   TH1F *ratioframe__10 = new TH1F("ratioframe__10","t#bar{t}",5,0,5);
   ratioframe__10->SetMinimum(0.46);
   ratioframe__10->SetMaximum(1.54);
   ratioframe__10->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__10->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__10->SetMarkerColor(ci);
   ratioframe__10->GetXaxis()->SetTitle("b-tag multiplicity");
   ratioframe__10->GetXaxis()->SetLabelFont(42);
   ratioframe__10->GetXaxis()->SetLabelSize(0);
   ratioframe__10->GetXaxis()->SetTitleSize(0);
   ratioframe__10->GetXaxis()->SetTitleOffset(0);
   ratioframe__10->GetXaxis()->SetTitleFont(42);
   ratioframe__10->GetYaxis()->SetTitle("Data/MC");
   ratioframe__10->GetYaxis()->SetNoExponent();
   ratioframe__10->GetYaxis()->SetNdivisions(5);
   ratioframe__10->GetYaxis()->SetLabelFont(42);
   ratioframe__10->GetYaxis()->SetLabelSize(0.18);
   ratioframe__10->GetYaxis()->SetTitleSize(0.2);
   ratioframe__10->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__10->GetYaxis()->SetTitleFont(42);
   ratioframe__10->GetZaxis()->SetLabelFont(42);
   ratioframe__10->GetZaxis()->SetLabelSize(0.035);
   ratioframe__10->GetZaxis()->SetTitleSize(0.035);
   ratioframe__10->GetZaxis()->SetTitleFont(42);
   ratioframe__10->Draw("");
   
   Double_t Graph_from_ratio_fx3010[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_ratio_fy3010[5] = {
   0,
   0.9232172,
   0.8716511,
   0,
   0};
   Double_t Graph_from_ratio_felx3010[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3010[5] = {
   0,
   0.003873229,
   0.004731699,
   0,
   0};
   Double_t Graph_from_ratio_fehx3010[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3010[5] = {
   0,
   0.003873229,
   0.004731699,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph_from_ratio_fx3010,Graph_from_ratio_fy3010,Graph_from_ratio_felx3010,Graph_from_ratio_fehx3010,Graph_from_ratio_fely3010,Graph_from_ratio_fehy3010);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3010 = new TH1F("Graph_Graph_from_ratio3010","Data",100,0,5.5);
   Graph_Graph_from_ratio3010->SetMinimum(0);
   Graph_Graph_from_ratio3010->SetMaximum(1.019799);
   Graph_Graph_from_ratio3010->SetDirectory(0);
   Graph_Graph_from_ratio3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3010->SetLineColor(ci);
   Graph_Graph_from_ratio3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3010);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
