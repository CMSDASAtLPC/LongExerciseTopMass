void e_pt()
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
   p1->Range(-28.91566,-2921.648,212.0482,21426.25);
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
   
   TH1F *frame__13 = new TH1F("frame__13","t#bar{t}",30,0,200);
   frame__13->SetMinimum(0.1);
   frame__13->SetMaximum(21182.77);
   frame__13->SetEntries(365945);
   frame__13->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__13->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__13->SetMarkerColor(ci);
   frame__13->GetXaxis()->SetTitle("electron p_{T}");
   frame__13->GetXaxis()->SetLabelFont(42);
   frame__13->GetXaxis()->SetLabelSize(0.035);
   frame__13->GetXaxis()->SetTitleSize(0.035);
   frame__13->GetXaxis()->SetTitleFont(42);
   frame__13->GetYaxis()->SetTitle("Events");
   frame__13->GetYaxis()->SetNoExponent();
   frame__13->GetYaxis()->SetLabelFont(42);
   frame__13->GetYaxis()->SetTitleSize(0.045);
   frame__13->GetYaxis()->SetTitleOffset(1.3);
   frame__13->GetYaxis()->SetTitleFont(42);
   frame__13->GetZaxis()->SetLabelFont(42);
   frame__13->GetZaxis()->SetLabelSize(0.035);
   frame__13->GetZaxis()->SetTitleSize(0.035);
   frame__13->GetZaxis()->SetTitleFont(42);
   frame__13->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_7 = new TH1F("mc_stack_7","mc",30,0,200);
   mc_stack_7->SetMinimum(-9.345868e-07);
   mc_stack_7->SetMaximum(17109.16);
   mc_stack_7->SetDirectory(0);
   mc_stack_7->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_7->SetLineColor(ci);
   mc_stack_7->GetXaxis()->SetLabelFont(42);
   mc_stack_7->GetXaxis()->SetLabelSize(0.035);
   mc_stack_7->GetXaxis()->SetTitleSize(0.035);
   mc_stack_7->GetXaxis()->SetTitleFont(42);
   mc_stack_7->GetYaxis()->SetLabelFont(42);
   mc_stack_7->GetYaxis()->SetLabelSize(0.035);
   mc_stack_7->GetYaxis()->SetTitleSize(0.035);
   mc_stack_7->GetYaxis()->SetTitleOffset(0);
   mc_stack_7->GetYaxis()->SetTitleFont(42);
   mc_stack_7->GetZaxis()->SetLabelFont(42);
   mc_stack_7->GetZaxis()->SetLabelSize(0.035);
   mc_stack_7->GetZaxis()->SetTitleSize(0.035);
   mc_stack_7->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_7);
   
   
   TH1F *e_pt_t#bar{t}_stack_1 = new TH1F("e_pt_t#bar{t}_stack_1","t#bar{t}",30,0,200);
   e_pt_t#bar{t}_stack_1->SetBinContent(4,13666.42);
   e_pt_t#bar{t}_stack_1->SetBinContent(5,15425.41);
   e_pt_t#bar{t}_stack_1->SetBinContent(6,15620.95);
   e_pt_t#bar{t}_stack_1->SetBinContent(7,14453);
   e_pt_t#bar{t}_stack_1->SetBinContent(8,12913.33);
   e_pt_t#bar{t}_stack_1->SetBinContent(9,11045.41);
   e_pt_t#bar{t}_stack_1->SetBinContent(10,9382.99);
   e_pt_t#bar{t}_stack_1->SetBinContent(11,7819.018);
   e_pt_t#bar{t}_stack_1->SetBinContent(12,6496.955);
   e_pt_t#bar{t}_stack_1->SetBinContent(13,5317.895);
   e_pt_t#bar{t}_stack_1->SetBinContent(14,4491.168);
   e_pt_t#bar{t}_stack_1->SetBinContent(15,3684.266);
   e_pt_t#bar{t}_stack_1->SetBinContent(16,3029.118);
   e_pt_t#bar{t}_stack_1->SetBinContent(17,2477.582);
   e_pt_t#bar{t}_stack_1->SetBinContent(18,2023.442);
   e_pt_t#bar{t}_stack_1->SetBinContent(19,1675.132);
   e_pt_t#bar{t}_stack_1->SetBinContent(20,1364.234);
   e_pt_t#bar{t}_stack_1->SetBinContent(21,1184.314);
   e_pt_t#bar{t}_stack_1->SetBinContent(22,930.1201);
   e_pt_t#bar{t}_stack_1->SetBinContent(23,778.5751);
   e_pt_t#bar{t}_stack_1->SetBinContent(24,663.4992);
   e_pt_t#bar{t}_stack_1->SetBinContent(25,558.0499);
   e_pt_t#bar{t}_stack_1->SetBinContent(26,489.9589);
   e_pt_t#bar{t}_stack_1->SetBinContent(27,365.6564);
   e_pt_t#bar{t}_stack_1->SetBinContent(28,333.5173);
   e_pt_t#bar{t}_stack_1->SetBinContent(29,275.8874);
   e_pt_t#bar{t}_stack_1->SetBinContent(30,237.5299);
   e_pt_t#bar{t}_stack_1->SetBinContent(31,1397.889);
   e_pt_t#bar{t}_stack_1->SetBinError(4,74.13467);
   e_pt_t#bar{t}_stack_1->SetBinError(5,78.81431);
   e_pt_t#bar{t}_stack_1->SetBinError(6,79.80424);
   e_pt_t#bar{t}_stack_1->SetBinError(7,76.92942);
   e_pt_t#bar{t}_stack_1->SetBinError(8,72.74641);
   e_pt_t#bar{t}_stack_1->SetBinError(9,67.38209);
   e_pt_t#bar{t}_stack_1->SetBinError(10,62.11386);
   e_pt_t#bar{t}_stack_1->SetBinError(11,56.68755);
   e_pt_t#bar{t}_stack_1->SetBinError(12,51.64407);
   e_pt_t#bar{t}_stack_1->SetBinError(13,46.76259);
   e_pt_t#bar{t}_stack_1->SetBinError(14,43.25289);
   e_pt_t#bar{t}_stack_1->SetBinError(15,39.50062);
   e_pt_t#bar{t}_stack_1->SetBinError(16,35.88828);
   e_pt_t#bar{t}_stack_1->SetBinError(17,32.44349);
   e_pt_t#bar{t}_stack_1->SetBinError(18,29.29535);
   e_pt_t#bar{t}_stack_1->SetBinError(19,26.63537);
   e_pt_t#bar{t}_stack_1->SetBinError(20,24.04909);
   e_pt_t#bar{t}_stack_1->SetBinError(21,22.44652);
   e_pt_t#bar{t}_stack_1->SetBinError(22,19.88955);
   e_pt_t#bar{t}_stack_1->SetBinError(23,18.18495);
   e_pt_t#bar{t}_stack_1->SetBinError(24,16.74841);
   e_pt_t#bar{t}_stack_1->SetBinError(25,15.37788);
   e_pt_t#bar{t}_stack_1->SetBinError(26,14.43054);
   e_pt_t#bar{t}_stack_1->SetBinError(27,12.48454);
   e_pt_t#bar{t}_stack_1->SetBinError(28,11.94563);
   e_pt_t#bar{t}_stack_1->SetBinError(29,10.83077);
   e_pt_t#bar{t}_stack_1->SetBinError(30,10.05827);
   e_pt_t#bar{t}_stack_1->SetBinError(31,24.36009);
   e_pt_t#bar{t}_stack_1->SetEntries(360257);
   e_pt_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   e_pt_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   e_pt_t#bar{t}_stack_1->SetMarkerColor(ci);
   e_pt_t#bar{t}_stack_1->GetXaxis()->SetTitle("electron p_{T}");
   e_pt_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   e_pt_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   e_pt_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   e_pt_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   e_pt_t#bar{t}_stack_1->GetYaxis()->SetTitle("Events");
   e_pt_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   e_pt_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   e_pt_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   e_pt_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   e_pt_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   e_pt_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   e_pt_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   e_pt_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   e_pt_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(e_pt_t#bar{t}_stack_1,"hist");
   
   TH1F *e_pt_Diboson_stack_2 = new TH1F("e_pt_Diboson_stack_2","Diboson",30,0,200);
   e_pt_Diboson_stack_2->SetBinContent(4,14.17574);
   e_pt_Diboson_stack_2->SetBinContent(5,16.52048);
   e_pt_Diboson_stack_2->SetBinContent(6,17.11089);
   e_pt_Diboson_stack_2->SetBinContent(7,17.0396);
   e_pt_Diboson_stack_2->SetBinContent(8,12.29581);
   e_pt_Diboson_stack_2->SetBinContent(9,11.92868);
   e_pt_Diboson_stack_2->SetBinContent(10,11.2647);
   e_pt_Diboson_stack_2->SetBinContent(11,8.382763);
   e_pt_Diboson_stack_2->SetBinContent(12,6.781612);
   e_pt_Diboson_stack_2->SetBinContent(13,6.769183);
   e_pt_Diboson_stack_2->SetBinContent(14,8.024007);
   e_pt_Diboson_stack_2->SetBinContent(15,4.765175);
   e_pt_Diboson_stack_2->SetBinContent(16,4.729686);
   e_pt_Diboson_stack_2->SetBinContent(17,1.249235);
   e_pt_Diboson_stack_2->SetBinContent(18,5.594527);
   e_pt_Diboson_stack_2->SetBinContent(19,0.8382068);
   e_pt_Diboson_stack_2->SetBinContent(20,2.530344);
   e_pt_Diboson_stack_2->SetBinContent(21,1.528613);
   e_pt_Diboson_stack_2->SetBinContent(22,4.489367);
   e_pt_Diboson_stack_2->SetBinContent(23,2.883083);
   e_pt_Diboson_stack_2->SetBinContent(24,0.8584026);
   e_pt_Diboson_stack_2->SetBinContent(25,1.435564);
   e_pt_Diboson_stack_2->SetBinContent(26,2.048455);
   e_pt_Diboson_stack_2->SetBinContent(27,0.9216708);
   e_pt_Diboson_stack_2->SetBinContent(28,0.835095);
   e_pt_Diboson_stack_2->SetBinContent(29,2.472095);
   e_pt_Diboson_stack_2->SetBinContent(30,0.8881451);
   e_pt_Diboson_stack_2->SetBinContent(31,13.79005);
   e_pt_Diboson_stack_2->SetBinError(4,2.317726);
   e_pt_Diboson_stack_2->SetBinError(5,2.488244);
   e_pt_Diboson_stack_2->SetBinError(6,2.547199);
   e_pt_Diboson_stack_2->SetBinError(7,2.554219);
   e_pt_Diboson_stack_2->SetBinError(8,2.168937);
   e_pt_Diboson_stack_2->SetBinError(9,2.116611);
   e_pt_Diboson_stack_2->SetBinError(10,2.120711);
   e_pt_Diboson_stack_2->SetBinError(11,1.848131);
   e_pt_Diboson_stack_2->SetBinError(12,1.600885);
   e_pt_Diboson_stack_2->SetBinError(13,1.593476);
   e_pt_Diboson_stack_2->SetBinError(14,1.782759);
   e_pt_Diboson_stack_2->SetBinError(15,1.407361);
   e_pt_Diboson_stack_2->SetBinError(16,1.375666);
   e_pt_Diboson_stack_2->SetBinError(17,0.7202108);
   e_pt_Diboson_stack_2->SetBinError(18,1.496632);
   e_pt_Diboson_stack_2->SetBinError(19,0.533472);
   e_pt_Diboson_stack_2->SetBinError(20,1.026097);
   e_pt_Diboson_stack_2->SetBinError(21,0.766731);
   e_pt_Diboson_stack_2->SetBinError(22,1.308979);
   e_pt_Diboson_stack_2->SetBinError(23,1.092149);
   e_pt_Diboson_stack_2->SetBinError(24,0.6013279);
   e_pt_Diboson_stack_2->SetBinError(25,0.7508512);
   e_pt_Diboson_stack_2->SetBinError(26,0.9297443);
   e_pt_Diboson_stack_2->SetBinError(27,0.6211838);
   e_pt_Diboson_stack_2->SetBinError(28,0.5906324);
   e_pt_Diboson_stack_2->SetBinError(29,1.013442);
   e_pt_Diboson_stack_2->SetBinError(30,0.6282451);
   e_pt_Diboson_stack_2->SetBinError(31,2.379219);
   e_pt_Diboson_stack_2->SetEntries(511);
   e_pt_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   e_pt_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   e_pt_Diboson_stack_2->SetMarkerColor(ci);
   e_pt_Diboson_stack_2->GetXaxis()->SetTitle("electron p_{T}");
   e_pt_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   e_pt_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   e_pt_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   e_pt_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   e_pt_Diboson_stack_2->GetYaxis()->SetTitle("Events");
   e_pt_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   e_pt_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   e_pt_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   e_pt_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   e_pt_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   e_pt_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   e_pt_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   e_pt_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   e_pt_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(e_pt_Diboson_stack_2,"hist");
   
   TH1F *e_pt_DY_stack_3 = new TH1F("e_pt_DY_stack_3","DY",30,0,200);
   e_pt_DY_stack_3->SetBinContent(4,185.5511);
   e_pt_DY_stack_3->SetBinContent(5,50.50248);
   e_pt_DY_stack_3->SetBinContent(6,17.63883);
   e_pt_DY_stack_3->SetBinContent(7,17.90387);
   e_pt_DY_stack_3->SetBinContent(10,9.033381);
   e_pt_DY_stack_3->SetBinContent(11,16.81726);
   e_pt_DY_stack_3->SetBinContent(15,20.71554);
   e_pt_DY_stack_3->SetBinContent(25,0.3771112);
   e_pt_DY_stack_3->SetBinContent(28,20.7678);
   e_pt_DY_stack_3->SetBinError(4,56.029);
   e_pt_DY_stack_3->SetBinError(5,29.17858);
   e_pt_DY_stack_3->SetBinError(6,17.63883);
   e_pt_DY_stack_3->SetBinError(7,17.90386);
   e_pt_DY_stack_3->SetBinError(10,9.03338);
   e_pt_DY_stack_3->SetBinError(11,16.81726);
   e_pt_DY_stack_3->SetBinError(15,20.71554);
   e_pt_DY_stack_3->SetBinError(25,0.3771112);
   e_pt_DY_stack_3->SetBinError(28,20.7678);
   e_pt_DY_stack_3->SetEntries(21);
   e_pt_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   e_pt_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   e_pt_DY_stack_3->SetMarkerColor(ci);
   e_pt_DY_stack_3->GetXaxis()->SetTitle("electron p_{T}");
   e_pt_DY_stack_3->GetXaxis()->SetLabelFont(42);
   e_pt_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   e_pt_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   e_pt_DY_stack_3->GetXaxis()->SetTitleFont(42);
   e_pt_DY_stack_3->GetYaxis()->SetTitle("Events");
   e_pt_DY_stack_3->GetYaxis()->SetLabelFont(42);
   e_pt_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   e_pt_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   e_pt_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   e_pt_DY_stack_3->GetYaxis()->SetTitleFont(42);
   e_pt_DY_stack_3->GetZaxis()->SetLabelFont(42);
   e_pt_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   e_pt_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   e_pt_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(e_pt_DY_stack_3,"hist");
   
   TH1F *e_pt_W_stack_4 = new TH1F("e_pt_W_stack_4","W",30,0,200);
   e_pt_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   e_pt_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   e_pt_W_stack_4->SetMarkerColor(ci);
   e_pt_W_stack_4->GetXaxis()->SetTitle("electron p_{T}");
   e_pt_W_stack_4->GetXaxis()->SetLabelFont(42);
   e_pt_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   e_pt_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   e_pt_W_stack_4->GetXaxis()->SetTitleFont(42);
   e_pt_W_stack_4->GetYaxis()->SetTitle("Events");
   e_pt_W_stack_4->GetYaxis()->SetLabelFont(42);
   e_pt_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   e_pt_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   e_pt_W_stack_4->GetYaxis()->SetTitleOffset(0);
   e_pt_W_stack_4->GetYaxis()->SetTitleFont(42);
   e_pt_W_stack_4->GetZaxis()->SetLabelFont(42);
   e_pt_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   e_pt_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   e_pt_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(e_pt_W_stack_4,"hist");
   
   TH1F *e_pt_SinglesPtop_stack_5 = new TH1F("e_pt_SinglesPtop_stack_5","Single top",30,0,200);
   e_pt_SinglesPtop_stack_5->SetBinContent(4,551.0693);
   e_pt_SinglesPtop_stack_5->SetBinContent(5,594.7341);
   e_pt_SinglesPtop_stack_5->SetBinContent(6,638.7437);
   e_pt_SinglesPtop_stack_5->SetBinContent(7,600.7728);
   e_pt_SinglesPtop_stack_5->SetBinContent(8,529.0573);
   e_pt_SinglesPtop_stack_5->SetBinContent(9,463.3674);
   e_pt_SinglesPtop_stack_5->SetBinContent(10,389.7924);
   e_pt_SinglesPtop_stack_5->SetBinContent(11,333.4159);
   e_pt_SinglesPtop_stack_5->SetBinContent(12,306.3341);
   e_pt_SinglesPtop_stack_5->SetBinContent(13,247.2285);
   e_pt_SinglesPtop_stack_5->SetBinContent(14,229.0967);
   e_pt_SinglesPtop_stack_5->SetBinContent(15,158.0583);
   e_pt_SinglesPtop_stack_5->SetBinContent(16,179.8041);
   e_pt_SinglesPtop_stack_5->SetBinContent(17,141.3495);
   e_pt_SinglesPtop_stack_5->SetBinContent(18,129.1323);
   e_pt_SinglesPtop_stack_5->SetBinContent(19,116.5183);
   e_pt_SinglesPtop_stack_5->SetBinContent(20,103.4682);
   e_pt_SinglesPtop_stack_5->SetBinContent(21,92.4483);
   e_pt_SinglesPtop_stack_5->SetBinContent(22,80.8036);
   e_pt_SinglesPtop_stack_5->SetBinContent(23,57.31458);
   e_pt_SinglesPtop_stack_5->SetBinContent(24,61.29114);
   e_pt_SinglesPtop_stack_5->SetBinContent(25,44.48124);
   e_pt_SinglesPtop_stack_5->SetBinContent(26,42.99162);
   e_pt_SinglesPtop_stack_5->SetBinContent(27,28.42434);
   e_pt_SinglesPtop_stack_5->SetBinContent(28,33.48324);
   e_pt_SinglesPtop_stack_5->SetBinContent(29,28.80548);
   e_pt_SinglesPtop_stack_5->SetBinContent(30,12.23976);
   e_pt_SinglesPtop_stack_5->SetBinContent(31,244.1419);
   e_pt_SinglesPtop_stack_5->SetBinError(4,26.74118);
   e_pt_SinglesPtop_stack_5->SetBinError(5,27.89459);
   e_pt_SinglesPtop_stack_5->SetBinError(6,29.12759);
   e_pt_SinglesPtop_stack_5->SetBinError(7,28.38024);
   e_pt_SinglesPtop_stack_5->SetBinError(8,26.54219);
   e_pt_SinglesPtop_stack_5->SetBinError(9,24.83388);
   e_pt_SinglesPtop_stack_5->SetBinError(10,22.66776);
   e_pt_SinglesPtop_stack_5->SetBinError(11,21.08405);
   e_pt_SinglesPtop_stack_5->SetBinError(12,20.28233);
   e_pt_SinglesPtop_stack_5->SetBinError(13,18.27848);
   e_pt_SinglesPtop_stack_5->SetBinError(14,17.5834);
   e_pt_SinglesPtop_stack_5->SetBinError(15,14.76299);
   e_pt_SinglesPtop_stack_5->SetBinError(16,15.67985);
   e_pt_SinglesPtop_stack_5->SetBinError(17,14.02258);
   e_pt_SinglesPtop_stack_5->SetBinError(18,13.31636);
   e_pt_SinglesPtop_stack_5->SetBinError(19,12.59942);
   e_pt_SinglesPtop_stack_5->SetBinError(20,11.98603);
   e_pt_SinglesPtop_stack_5->SetBinError(21,11.19352);
   e_pt_SinglesPtop_stack_5->SetBinError(22,10.58027);
   e_pt_SinglesPtop_stack_5->SetBinError(23,8.752813);
   e_pt_SinglesPtop_stack_5->SetBinError(24,9.240119);
   e_pt_SinglesPtop_stack_5->SetBinError(25,7.824134);
   e_pt_SinglesPtop_stack_5->SetBinError(26,7.714423);
   e_pt_SinglesPtop_stack_5->SetBinError(27,6.16001);
   e_pt_SinglesPtop_stack_5->SetBinError(28,6.712914);
   e_pt_SinglesPtop_stack_5->SetBinError(29,6.368929);
   e_pt_SinglesPtop_stack_5->SetBinError(30,4.006408);
   e_pt_SinglesPtop_stack_5->SetBinError(31,18.23643);
   e_pt_SinglesPtop_stack_5->SetEntries(5156);
   e_pt_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   e_pt_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   e_pt_SinglesPtop_stack_5->SetMarkerColor(ci);
   e_pt_SinglesPtop_stack_5->GetXaxis()->SetTitle("electron p_{T}");
   e_pt_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   e_pt_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   e_pt_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   e_pt_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   e_pt_SinglesPtop_stack_5->GetYaxis()->SetTitle("Events");
   e_pt_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   e_pt_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   e_pt_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   e_pt_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   e_pt_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   e_pt_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   e_pt_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   e_pt_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   e_pt_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(e_pt_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_e_pt_fx3013[31] = {
   3.333333,
   10,
   16.66667,
   23.33333,
   30,
   36.66667,
   43.33333,
   50,
   56.66667,
   63.33333,
   70,
   76.66667,
   83.33333,
   90,
   96.66667,
   103.3333,
   110,
   116.6667,
   123.3333,
   130,
   136.6667,
   143.3333,
   150,
   156.6667,
   163.3333,
   170,
   176.6667,
   183.3333,
   190,
   196.6667,
   0};
   Double_t Graph_from_e_pt_fy3013[31] = {
   0,
   0,
   0,
   13162,
   15161,
   15310,
   13826,
   12364,
   10611,
   8742,
   7497,
   6071,
   4931,
   4187,
   3373,
   2762,
   2319,
   1734,
   1536,
   1201,
   1014,
   859,
   703,
   597,
   461,
   414,
   362,
   268,
   230,
   219,
   0};
   Double_t Graph_from_e_pt_felx3013[31] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   0};
   Double_t Graph_from_e_pt_fely3013[31] = {
   0,
   0,
   0,
   114.7258,
   123.13,
   123.7336,
   117.584,
   111.1935,
   103.0097,
   93.49866,
   86.58522,
   77.91662,
   70.22108,
   64.70703,
   58.07753,
   52.55473,
   48.156,
   41.64133,
   39.19184,
   34.65545,
   31.84337,
   29.3087,
   26.51415,
   24.43358,
   21.47091,
   20.34699,
   19.0263,
   16.37071,
   15.16575,
   14.79865,
   0};
   Double_t Graph_from_e_pt_fehx3013[31] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   0};
   Double_t Graph_from_e_pt_fehy3013[31] = {
   1.841055,
   1.841055,
   1.841055,
   114.7258,
   123.13,
   123.7336,
   117.584,
   111.1935,
   103.0097,
   93.49866,
   86.58522,
   77.91662,
   70.22108,
   64.70703,
   58.07753,
   52.55473,
   48.156,
   41.64133,
   39.19184,
   34.65545,
   31.84337,
   29.3087,
   26.51415,
   24.43358,
   21.47091,
   20.34699,
   19.0263,
   16.37071,
   15.16575,
   14.79865,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_e_pt_fx3013,Graph_from_e_pt_fy3013,Graph_from_e_pt_felx3013,Graph_from_e_pt_fehx3013,Graph_from_e_pt_fely3013,Graph_from_e_pt_fehy3013);
   grae->SetName("Graph_from_e_pt");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_e_pt3013 = new TH1F("Graph_Graph_from_e_pt3013","Data",100,0,220);
   Graph_Graph_from_e_pt3013->SetMinimum(0);
   Graph_Graph_from_e_pt3013->SetMaximum(16977.11);
   Graph_Graph_from_e_pt3013->SetDirectory(0);
   Graph_Graph_from_e_pt3013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_e_pt3013->SetLineColor(ci);
   Graph_Graph_from_e_pt3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_e_pt3013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_e_pt3013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_e_pt3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_e_pt3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_e_pt3013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_e_pt3013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_e_pt3013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_e_pt3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_e_pt3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_e_pt3013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_e_pt3013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_e_pt3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_e_pt3013);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_e_pt","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("e_pt_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("e_pt_Diboson","Diboson","f");

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
   entry=leg->AddEntry("e_pt_DY","DY","f");

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
   entry=leg->AddEntry("e_pt_W","W","f");

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
   entry=leg->AddEntry("e_pt_Single top","Single top","f");

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
   p2->Range(-28.91566,0.4485106,212.0482,1.597447);
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
   
   TH1F *ratioframe__14 = new TH1F("ratioframe__14","t#bar{t}",30,0,200);
   ratioframe__14->SetMinimum(0.46);
   ratioframe__14->SetMaximum(1.54);
   ratioframe__14->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__14->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__14->SetMarkerColor(ci);
   ratioframe__14->GetXaxis()->SetTitle("electron p_{T}");
   ratioframe__14->GetXaxis()->SetLabelFont(42);
   ratioframe__14->GetXaxis()->SetLabelSize(0);
   ratioframe__14->GetXaxis()->SetTitleSize(0);
   ratioframe__14->GetXaxis()->SetTitleOffset(0);
   ratioframe__14->GetXaxis()->SetTitleFont(42);
   ratioframe__14->GetYaxis()->SetTitle("Data/MC");
   ratioframe__14->GetYaxis()->SetNoExponent();
   ratioframe__14->GetYaxis()->SetNdivisions(5);
   ratioframe__14->GetYaxis()->SetLabelFont(42);
   ratioframe__14->GetYaxis()->SetLabelSize(0.18);
   ratioframe__14->GetYaxis()->SetTitleSize(0.2);
   ratioframe__14->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__14->GetYaxis()->SetTitleFont(42);
   ratioframe__14->GetZaxis()->SetLabelFont(42);
   ratioframe__14->GetZaxis()->SetLabelSize(0.035);
   ratioframe__14->GetZaxis()->SetTitleSize(0.035);
   ratioframe__14->GetZaxis()->SetTitleFont(42);
   ratioframe__14->Draw("");
   
   Double_t Graph_from_ratio_fx3014[30] = {
   3.333333,
   10,
   16.66667,
   23.33333,
   30,
   36.66667,
   43.33333,
   50,
   56.66667,
   63.33333,
   70,
   76.66667,
   83.33333,
   90,
   96.66667,
   103.3333,
   110,
   116.6667,
   123.3333,
   130,
   136.6667,
   143.3333,
   150,
   156.6667,
   163.3333,
   170,
   176.6667,
   183.3333,
   190,
   196.6667};
   Double_t Graph_from_ratio_fy3014[30] = {
   0,
   0,
   0,
   0.9129364,
   0.9424282,
   0.9395843,
   0.9163141,
   0.9189367,
   0.9210373,
   0.8926712,
   0.9167688,
   0.8914738,
   0.8849776,
   0.8855212,
   0.8720708,
   0.8594583,
   0.8850536,
   0.8034592,
   0.8569091,
   0.8168775,
   0.7932467,
   0.8459612,
   0.8381293,
   0.8227121,
   0.7628108,
   0.7738332,
   0.91645,
   0.689649,
   0.7487833,
   0.873701};
   Double_t Graph_from_ratio_felx3014[30] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333};
   Double_t Graph_from_ratio_fely3014[30] = {
   0,
   0,
   0,
   0.01004174,
   0.00924739,
   0.009094833,
   0.00931294,
   0.009812881,
   0.01062713,
   0.01132232,
   0.01271527,
   0.01355369,
   0.01491594,
   0.01624361,
   0.01837893,
   0.01942371,
   0.02191746,
   0.02271832,
   0.02601026,
   0.02790748,
   0.02937775,
   0.03444684,
   0.03751137,
   0.04005676,
   0.0416848,
   0.0448152,
   0.0580125,
   0.06103711,
   0.05815463,
   0.07010426};
   Double_t Graph_from_ratio_fehx3014[30] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333};
   Double_t Graph_from_ratio_fehy3014[30] = {
   0,
   0,
   0,
   0.01004174,
   0.00924739,
   0.009094833,
   0.00931294,
   0.009812881,
   0.01062713,
   0.01132232,
   0.01271527,
   0.01355369,
   0.01491594,
   0.01624361,
   0.01837893,
   0.01942371,
   0.02191746,
   0.02271832,
   0.02601026,
   0.02790748,
   0.02937775,
   0.03444684,
   0.03751137,
   0.04005676,
   0.0416848,
   0.0448152,
   0.0580125,
   0.06103711,
   0.05815463,
   0.07010426};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3014,Graph_from_ratio_fy3014,Graph_from_ratio_felx3014,Graph_from_ratio_fehx3014,Graph_from_ratio_fely3014,Graph_from_ratio_fehy3014);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3014 = new TH1F("Graph_Graph_from_ratio3014","Data",100,0,220);
   Graph_Graph_from_ratio3014->SetMinimum(0);
   Graph_Graph_from_ratio3014->SetMaximum(1.071909);
   Graph_Graph_from_ratio3014->SetDirectory(0);
   Graph_Graph_from_ratio3014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3014->SetLineColor(ci);
   Graph_Graph_from_ratio3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3014);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
