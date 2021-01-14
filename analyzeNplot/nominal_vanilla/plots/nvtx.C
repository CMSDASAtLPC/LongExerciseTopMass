void nvtx()
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
   
   TH1F *frame__5 = new TH1F("frame__5","t#bar{t}",30,0,30);
   frame__5->SetMinimum(0.1);
   frame__5->SetMaximum(0);
   frame__5->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__5->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__5->SetMarkerColor(ci);
   frame__5->GetXaxis()->SetTitle("Vertex multiplicity");
   frame__5->GetXaxis()->SetLabelFont(42);
   frame__5->GetXaxis()->SetLabelSize(0.035);
   frame__5->GetXaxis()->SetTitleSize(0.035);
   frame__5->GetXaxis()->SetTitleFont(42);
   frame__5->GetYaxis()->SetTitle(" Events");
   frame__5->GetYaxis()->SetNoExponent();
   frame__5->GetYaxis()->SetLabelFont(42);
   frame__5->GetYaxis()->SetTitleSize(0.045);
   frame__5->GetYaxis()->SetTitleOffset(1.3);
   frame__5->GetYaxis()->SetTitleFont(42);
   frame__5->GetZaxis()->SetLabelFont(42);
   frame__5->GetZaxis()->SetLabelSize(0.035);
   frame__5->GetZaxis()->SetTitleSize(0.035);
   frame__5->GetZaxis()->SetTitleFont(42);
   frame__5->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_3 = new TH1F("mc_stack_3","mc",30,0,30);
   mc_stack_3->SetMinimum(0);
   mc_stack_3->SetMaximum(0);
   mc_stack_3->SetDirectory(0);
   mc_stack_3->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_3->SetLineColor(ci);
   mc_stack_3->GetXaxis()->SetLabelFont(42);
   mc_stack_3->GetXaxis()->SetLabelSize(0.035);
   mc_stack_3->GetXaxis()->SetTitleSize(0.035);
   mc_stack_3->GetXaxis()->SetTitleFont(42);
   mc_stack_3->GetYaxis()->SetLabelFont(42);
   mc_stack_3->GetYaxis()->SetLabelSize(0.035);
   mc_stack_3->GetYaxis()->SetTitleSize(0.035);
   mc_stack_3->GetYaxis()->SetTitleOffset(0);
   mc_stack_3->GetYaxis()->SetTitleFont(42);
   mc_stack_3->GetZaxis()->SetLabelFont(42);
   mc_stack_3->GetZaxis()->SetLabelSize(0.035);
   mc_stack_3->GetZaxis()->SetTitleSize(0.035);
   mc_stack_3->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_3);
   
   
   TH1F *nvtx_t#bar{t}_stack_1 = new TH1F("nvtx_t#bar{t}_stack_1","t#bar{t}",30,0,30);
   nvtx_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}_stack_1->SetMarkerColor(ci);
   nvtx_t#bar{t}_stack_1->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   nvtx_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Events");
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   nvtx_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   nvtx_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_t#bar{t}_stack_1,"hist");
   
   TH1F *nvtx_Diboson_stack_2 = new TH1F("nvtx_Diboson_stack_2","Diboson",30,0,30);
   nvtx_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson_stack_2->SetMarkerColor(ci);
   nvtx_Diboson_stack_2->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   nvtx_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   nvtx_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   nvtx_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   nvtx_Diboson_stack_2->GetYaxis()->SetTitle(" Events");
   nvtx_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   nvtx_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   nvtx_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   nvtx_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   nvtx_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   nvtx_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   nvtx_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   nvtx_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   nvtx_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Diboson_stack_2,"hist");
   
   TH1F *nvtx_DY_stack_3 = new TH1F("nvtx_DY_stack_3","DY",30,0,30);
   nvtx_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY_stack_3->SetMarkerColor(ci);
   nvtx_DY_stack_3->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_DY_stack_3->GetXaxis()->SetLabelFont(42);
   nvtx_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   nvtx_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   nvtx_DY_stack_3->GetXaxis()->SetTitleFont(42);
   nvtx_DY_stack_3->GetYaxis()->SetTitle(" Events");
   nvtx_DY_stack_3->GetYaxis()->SetLabelFont(42);
   nvtx_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   nvtx_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   nvtx_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   nvtx_DY_stack_3->GetYaxis()->SetTitleFont(42);
   nvtx_DY_stack_3->GetZaxis()->SetLabelFont(42);
   nvtx_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   nvtx_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   nvtx_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_DY_stack_3,"hist");
   
   TH1F *nvtx_W_stack_4 = new TH1F("nvtx_W_stack_4","W",30,0,30);
   nvtx_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nvtx_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nvtx_W_stack_4->SetMarkerColor(ci);
   nvtx_W_stack_4->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_W_stack_4->GetXaxis()->SetLabelFont(42);
   nvtx_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   nvtx_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   nvtx_W_stack_4->GetXaxis()->SetTitleFont(42);
   nvtx_W_stack_4->GetYaxis()->SetTitle(" Events");
   nvtx_W_stack_4->GetYaxis()->SetLabelFont(42);
   nvtx_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   nvtx_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   nvtx_W_stack_4->GetYaxis()->SetTitleOffset(0);
   nvtx_W_stack_4->GetYaxis()->SetTitleFont(42);
   nvtx_W_stack_4->GetZaxis()->SetLabelFont(42);
   nvtx_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   nvtx_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   nvtx_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_W_stack_4,"hist");
   
   TH1F *nvtx_SinglesPtop_stack_5 = new TH1F("nvtx_SinglesPtop_stack_5","Single top",30,0,30);
   nvtx_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop_stack_5->SetMarkerColor(ci);
   nvtx_SinglesPtop_stack_5->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   nvtx_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Events");
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   nvtx_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   nvtx_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nvtx_fx3005[31] = {
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
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   0};
   Double_t Graph_from_nvtx_fy3005[31] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_nvtx_felx3005[31] = {
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
   Double_t Graph_from_nvtx_fely3005[31] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_nvtx_fehx3005[31] = {
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
   Double_t Graph_from_nvtx_fehy3005[31] = {
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_nvtx_fx3005,Graph_from_nvtx_fy3005,Graph_from_nvtx_felx3005,Graph_from_nvtx_fehx3005,Graph_from_nvtx_fely3005,Graph_from_nvtx_fehy3005);
   grae->SetName("Graph_from_nvtx");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nvtx3005 = new TH1F("Graph_Graph_from_nvtx3005","Data",100,0,33);
   Graph_Graph_from_nvtx3005->SetMinimum(0);
   Graph_Graph_from_nvtx3005->SetMaximum(2.02516);
   Graph_Graph_from_nvtx3005->SetDirectory(0);
   Graph_Graph_from_nvtx3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nvtx3005->SetLineColor(ci);
   Graph_Graph_from_nvtx3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_nvtx3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nvtx3005);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_nvtx","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nvtx_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("nvtx_Diboson","Diboson","f");

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
   entry=leg->AddEntry("nvtx_DY","DY","f");

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
   entry=leg->AddEntry("nvtx_W","W","f");

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
   entry=leg->AddEntry("nvtx_Single top","Single top","f");

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
   p2->Range(-4.337349,0.4485106,31.80723,1.597447);
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
   
   TH1F *ratioframe__6 = new TH1F("ratioframe__6","t#bar{t}",30,0,30);
   ratioframe__6->SetMinimum(0.46);
   ratioframe__6->SetMaximum(1.54);

   ci = TColor::GetColor("#cc0000");
   ratioframe__6->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__6->SetMarkerColor(ci);
   ratioframe__6->GetXaxis()->SetTitle("Vertex multiplicity");
   ratioframe__6->GetXaxis()->SetLabelFont(42);
   ratioframe__6->GetXaxis()->SetLabelSize(0);
   ratioframe__6->GetXaxis()->SetTitleSize(0);
   ratioframe__6->GetXaxis()->SetTitleOffset(0);
   ratioframe__6->GetXaxis()->SetTitleFont(42);
   ratioframe__6->GetYaxis()->SetTitle("Data/MC");
   ratioframe__6->GetYaxis()->SetNoExponent();
   ratioframe__6->GetYaxis()->SetNdivisions(5);
   ratioframe__6->GetYaxis()->SetLabelFont(42);
   ratioframe__6->GetYaxis()->SetLabelSize(0.18);
   ratioframe__6->GetYaxis()->SetTitleSize(0.2);
   ratioframe__6->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__6->GetYaxis()->SetTitleFont(42);
   ratioframe__6->GetZaxis()->SetLabelFont(42);
   ratioframe__6->GetZaxis()->SetLabelSize(0.035);
   ratioframe__6->GetZaxis()->SetTitleSize(0.035);
   ratioframe__6->GetZaxis()->SetTitleFont(42);
   ratioframe__6->Draw("");
   
   Double_t Graph_from_ratio_fx3006[30] = {
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
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5};
   Double_t Graph_from_ratio_fy3006[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_felx3006[30] = {
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
   Double_t Graph_from_ratio_fely3006[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_fehx3006[30] = {
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
   Double_t Graph_from_ratio_fehy3006[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3006,Graph_from_ratio_fy3006,Graph_from_ratio_felx3006,Graph_from_ratio_fehx3006,Graph_from_ratio_fely3006,Graph_from_ratio_fehy3006);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3006 = new TH1F("Graph_Graph_from_ratio3006","Data",100,0,33);
   Graph_Graph_from_ratio3006->SetMinimum(0);
   Graph_Graph_from_ratio3006->SetMaximum(1.1);
   Graph_Graph_from_ratio3006->SetDirectory(0);
   Graph_Graph_from_ratio3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3006->SetLineColor(ci);
   Graph_Graph_from_ratio3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3006);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
