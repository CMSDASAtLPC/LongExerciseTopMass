void e_eta()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 14 09:33:56 2021) by ROOT version 6.14/09
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
   p1->Range(-3.609639,-1642.819,3.137349,12048.17);
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
   
   TH1F *frame__1 = new TH1F("frame__1","t#bar{t}",30,-2.8,2.8);
   frame__1->SetMinimum(0.1);
   frame__1->SetMaximum(11911.26);
   frame__1->SetEntries(365945);
   frame__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__1->SetMarkerColor(ci);
   frame__1->GetXaxis()->SetTitle("electron #eta");
   frame__1->GetXaxis()->SetLabelFont(42);
   frame__1->GetXaxis()->SetLabelSize(0.035);
   frame__1->GetXaxis()->SetTitleSize(0.035);
   frame__1->GetXaxis()->SetTitleFont(42);
   frame__1->GetYaxis()->SetTitle("Events");
   frame__1->GetYaxis()->SetNoExponent();
   frame__1->GetYaxis()->SetLabelFont(42);
   frame__1->GetYaxis()->SetTitleSize(0.045);
   frame__1->GetYaxis()->SetTitleOffset(1.3);
   frame__1->GetYaxis()->SetTitleFont(42);
   frame__1->GetZaxis()->SetLabelFont(42);
   frame__1->GetZaxis()->SetLabelSize(0.035);
   frame__1->GetZaxis()->SetTitleSize(0.035);
   frame__1->GetZaxis()->SetTitleFont(42);
   frame__1->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_1 = new TH1F("mc_stack_1","mc",30,-2.8,2.8);
   mc_stack_1->SetMinimum(-9.345868e-07);
   mc_stack_1->SetMaximum(9620.636);
   mc_stack_1->SetDirectory(0);
   mc_stack_1->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_1->SetLineColor(ci);
   mc_stack_1->GetXaxis()->SetLabelFont(42);
   mc_stack_1->GetXaxis()->SetLabelSize(0.035);
   mc_stack_1->GetXaxis()->SetTitleSize(0.035);
   mc_stack_1->GetXaxis()->SetTitleFont(42);
   mc_stack_1->GetYaxis()->SetLabelFont(42);
   mc_stack_1->GetYaxis()->SetLabelSize(0.035);
   mc_stack_1->GetYaxis()->SetTitleSize(0.035);
   mc_stack_1->GetYaxis()->SetTitleOffset(0);
   mc_stack_1->GetYaxis()->SetTitleFont(42);
   mc_stack_1->GetZaxis()->SetLabelFont(42);
   mc_stack_1->GetZaxis()->SetLabelSize(0.035);
   mc_stack_1->GetZaxis()->SetTitleSize(0.035);
   mc_stack_1->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_1);
   
   
   TH1F *e_eta_t#bar{t}_stack_1 = new TH1F("e_eta_t#bar{t}_stack_1","t#bar{t}",30,-2.8,2.8);
   e_eta_t#bar{t}_stack_1->SetBinContent(3,1089.64);
   e_eta_t#bar{t}_stack_1->SetBinContent(4,1928.841);
   e_eta_t#bar{t}_stack_1->SetBinContent(5,2654.634);
   e_eta_t#bar{t}_stack_1->SetBinContent(6,3377.968);
   e_eta_t#bar{t}_stack_1->SetBinContent(7,3204.717);
   e_eta_t#bar{t}_stack_1->SetBinContent(8,4190.002);
   e_eta_t#bar{t}_stack_1->SetBinContent(9,5573.866);
   e_eta_t#bar{t}_stack_1->SetBinContent(10,6412.78);
   e_eta_t#bar{t}_stack_1->SetBinContent(11,7027.799);
   e_eta_t#bar{t}_stack_1->SetBinContent(12,7685.691);
   e_eta_t#bar{t}_stack_1->SetBinContent(13,8026.095);
   e_eta_t#bar{t}_stack_1->SetBinContent(14,8305.739);
   e_eta_t#bar{t}_stack_1->SetBinContent(15,8404.492);
   e_eta_t#bar{t}_stack_1->SetBinContent(16,8707.991);
   e_eta_t#bar{t}_stack_1->SetBinContent(17,8665.237);
   e_eta_t#bar{t}_stack_1->SetBinContent(18,8382.262);
   e_eta_t#bar{t}_stack_1->SetBinContent(19,8035.816);
   e_eta_t#bar{t}_stack_1->SetBinContent(20,7289.984);
   e_eta_t#bar{t}_stack_1->SetBinContent(21,6561.426);
   e_eta_t#bar{t}_stack_1->SetBinContent(22,5749.075);
   e_eta_t#bar{t}_stack_1->SetBinContent(23,4361.633);
   e_eta_t#bar{t}_stack_1->SetBinContent(24,3173.465);
   e_eta_t#bar{t}_stack_1->SetBinContent(25,3250.571);
   e_eta_t#bar{t}_stack_1->SetBinContent(26,2768.773);
   e_eta_t#bar{t}_stack_1->SetBinContent(27,2059.139);
   e_eta_t#bar{t}_stack_1->SetBinContent(28,1213.592);
   e_eta_t#bar{t}_stack_1->SetBinError(3,21.00041);
   e_eta_t#bar{t}_stack_1->SetBinError(4,27.98568);
   e_eta_t#bar{t}_stack_1->SetBinError(5,33.05734);
   e_eta_t#bar{t}_stack_1->SetBinError(6,37.38201);
   e_eta_t#bar{t}_stack_1->SetBinError(7,36.3601);
   e_eta_t#bar{t}_stack_1->SetBinError(8,41.46057);
   e_eta_t#bar{t}_stack_1->SetBinError(9,47.79298);
   e_eta_t#bar{t}_stack_1->SetBinError(10,51.23511);
   e_eta_t#bar{t}_stack_1->SetBinError(11,53.58154);
   e_eta_t#bar{t}_stack_1->SetBinError(12,55.81996);
   e_eta_t#bar{t}_stack_1->SetBinError(13,57.00621);
   e_eta_t#bar{t}_stack_1->SetBinError(14,57.98651);
   e_eta_t#bar{t}_stack_1->SetBinError(15,58.32018);
   e_eta_t#bar{t}_stack_1->SetBinError(16,60.18545);
   e_eta_t#bar{t}_stack_1->SetBinError(17,60.01062);
   e_eta_t#bar{t}_stack_1->SetBinError(18,59.04297);
   e_eta_t#bar{t}_stack_1->SetBinError(19,57.84412);
   e_eta_t#bar{t}_stack_1->SetBinError(20,55.02714);
   e_eta_t#bar{t}_stack_1->SetBinError(21,52.21233);
   e_eta_t#bar{t}_stack_1->SetBinError(22,48.87909);
   e_eta_t#bar{t}_stack_1->SetBinError(23,42.53494);
   e_eta_t#bar{t}_stack_1->SetBinError(24,36.11416);
   e_eta_t#bar{t}_stack_1->SetBinError(25,36.47595);
   e_eta_t#bar{t}_stack_1->SetBinError(26,33.56604);
   e_eta_t#bar{t}_stack_1->SetBinError(27,28.61198);
   e_eta_t#bar{t}_stack_1->SetBinError(28,21.97287);
   e_eta_t#bar{t}_stack_1->SetEntries(360257);
   e_eta_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   e_eta_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   e_eta_t#bar{t}_stack_1->SetMarkerColor(ci);
   e_eta_t#bar{t}_stack_1->GetXaxis()->SetTitle("electron #eta");
   e_eta_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   e_eta_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   e_eta_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   e_eta_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   e_eta_t#bar{t}_stack_1->GetYaxis()->SetTitle("Events");
   e_eta_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   e_eta_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   e_eta_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   e_eta_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   e_eta_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   e_eta_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   e_eta_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   e_eta_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   e_eta_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(e_eta_t#bar{t}_stack_1,"hist");
   
   TH1F *e_eta_Diboson_stack_2 = new TH1F("e_eta_Diboson_stack_2","Diboson",30,-2.8,2.8);
   e_eta_Diboson_stack_2->SetBinContent(3,2.552827);
   e_eta_Diboson_stack_2->SetBinContent(4,2.862793);
   e_eta_Diboson_stack_2->SetBinContent(5,3.635443);
   e_eta_Diboson_stack_2->SetBinContent(6,5.531226);
   e_eta_Diboson_stack_2->SetBinContent(7,4.583902);
   e_eta_Diboson_stack_2->SetBinContent(8,5.191119);
   e_eta_Diboson_stack_2->SetBinContent(9,7.826035);
   e_eta_Diboson_stack_2->SetBinContent(10,9.268294);
   e_eta_Diboson_stack_2->SetBinContent(11,8.715905);
   e_eta_Diboson_stack_2->SetBinContent(12,4.940218);
   e_eta_Diboson_stack_2->SetBinContent(13,11.43014);
   e_eta_Diboson_stack_2->SetBinContent(14,11.01344);
   e_eta_Diboson_stack_2->SetBinContent(15,11.73759);
   e_eta_Diboson_stack_2->SetBinContent(16,11.29409);
   e_eta_Diboson_stack_2->SetBinContent(17,8.893658);
   e_eta_Diboson_stack_2->SetBinContent(18,8.024624);
   e_eta_Diboson_stack_2->SetBinContent(19,11.73144);
   e_eta_Diboson_stack_2->SetBinContent(20,11.93895);
   e_eta_Diboson_stack_2->SetBinContent(21,6.681294);
   e_eta_Diboson_stack_2->SetBinContent(22,8.739408);
   e_eta_Diboson_stack_2->SetBinContent(23,5.372893);
   e_eta_Diboson_stack_2->SetBinContent(24,5.28817);
   e_eta_Diboson_stack_2->SetBinContent(25,4.731689);
   e_eta_Diboson_stack_2->SetBinContent(26,4.395782);
   e_eta_Diboson_stack_2->SetBinContent(27,3.551925);
   e_eta_Diboson_stack_2->SetBinContent(28,2.218327);
   e_eta_Diboson_stack_2->SetBinError(3,1.013158);
   e_eta_Diboson_stack_2->SetBinError(4,1.084747);
   e_eta_Diboson_stack_2->SetBinError(5,1.183962);
   e_eta_Diboson_stack_2->SetBinError(6,1.455521);
   e_eta_Diboson_stack_2->SetBinError(7,1.302568);
   e_eta_Diboson_stack_2->SetBinError(8,1.432201);
   e_eta_Diboson_stack_2->SetBinError(9,1.768079);
   e_eta_Diboson_stack_2->SetBinError(10,1.909654);
   e_eta_Diboson_stack_2->SetBinError(11,1.865037);
   e_eta_Diboson_stack_2->SetBinError(12,1.348741);
   e_eta_Diboson_stack_2->SetBinError(13,2.10675);
   e_eta_Diboson_stack_2->SetBinError(14,2.031607);
   e_eta_Diboson_stack_2->SetBinError(15,2.16044);
   e_eta_Diboson_stack_2->SetBinError(16,2.109169);
   e_eta_Diboson_stack_2->SetBinError(17,1.871779);
   e_eta_Diboson_stack_2->SetBinError(18,1.768379);
   e_eta_Diboson_stack_2->SetBinError(19,2.138292);
   e_eta_Diboson_stack_2->SetBinError(20,2.224526);
   e_eta_Diboson_stack_2->SetBinError(21,1.628653);
   e_eta_Diboson_stack_2->SetBinError(22,1.849029);
   e_eta_Diboson_stack_2->SetBinError(23,1.400167);
   e_eta_Diboson_stack_2->SetBinError(24,1.432012);
   e_eta_Diboson_stack_2->SetBinError(25,1.338923);
   e_eta_Diboson_stack_2->SetBinError(26,1.278335);
   e_eta_Diboson_stack_2->SetBinError(27,1.144848);
   e_eta_Diboson_stack_2->SetBinError(28,0.9099765);
   e_eta_Diboson_stack_2->SetEntries(511);
   e_eta_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   e_eta_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   e_eta_Diboson_stack_2->SetMarkerColor(ci);
   e_eta_Diboson_stack_2->GetXaxis()->SetTitle("electron #eta");
   e_eta_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   e_eta_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   e_eta_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   e_eta_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   e_eta_Diboson_stack_2->GetYaxis()->SetTitle("Events");
   e_eta_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   e_eta_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   e_eta_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   e_eta_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   e_eta_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   e_eta_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   e_eta_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   e_eta_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   e_eta_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(e_eta_Diboson_stack_2,"hist");
   
   TH1F *e_eta_DY_stack_3 = new TH1F("e_eta_DY_stack_3","DY",30,-2.8,2.8);
   e_eta_DY_stack_3->SetBinContent(4,17.97306);
   e_eta_DY_stack_3->SetBinContent(5,16.81726);
   e_eta_DY_stack_3->SetBinContent(6,34.76737);
   e_eta_DY_stack_3->SetBinContent(7,16.17023);
   e_eta_DY_stack_3->SetBinContent(8,16.81714);
   e_eta_DY_stack_3->SetBinContent(9,16.53879);
   e_eta_DY_stack_3->SetBinContent(12,33.59137);
   e_eta_DY_stack_3->SetBinContent(15,9.033381);
   e_eta_DY_stack_3->SetBinContent(16,20.71554);
   e_eta_DY_stack_3->SetBinContent(17,20.7678);
   e_eta_DY_stack_3->SetBinContent(19,32.92484);
   e_eta_DY_stack_3->SetBinContent(20,16.58862);
   e_eta_DY_stack_3->SetBinContent(21,35.79295);
   e_eta_DY_stack_3->SetBinContent(22,33.82185);
   e_eta_DY_stack_3->SetBinContent(25,16.98714);
   e_eta_DY_stack_3->SetBinError(4,17.97306);
   e_eta_DY_stack_3->SetBinError(5,16.81726);
   e_eta_DY_stack_3->SetBinError(6,24.64073);
   e_eta_DY_stack_3->SetBinError(7,16.17023);
   e_eta_DY_stack_3->SetBinError(8,16.81714);
   e_eta_DY_stack_3->SetBinError(9,16.53879);
   e_eta_DY_stack_3->SetBinError(12,23.80433);
   e_eta_DY_stack_3->SetBinError(15,9.03338);
   e_eta_DY_stack_3->SetBinError(16,20.71554);
   e_eta_DY_stack_3->SetBinError(17,20.7678);
   e_eta_DY_stack_3->SetBinError(19,23.34075);
   e_eta_DY_stack_3->SetBinError(20,16.58863);
   e_eta_DY_stack_3->SetBinError(21,25.04562);
   e_eta_DY_stack_3->SetBinError(22,23.91593);
   e_eta_DY_stack_3->SetBinError(25,16.98714);
   e_eta_DY_stack_3->SetEntries(21);
   e_eta_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   e_eta_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   e_eta_DY_stack_3->SetMarkerColor(ci);
   e_eta_DY_stack_3->GetXaxis()->SetTitle("electron #eta");
   e_eta_DY_stack_3->GetXaxis()->SetLabelFont(42);
   e_eta_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   e_eta_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   e_eta_DY_stack_3->GetXaxis()->SetTitleFont(42);
   e_eta_DY_stack_3->GetYaxis()->SetTitle("Events");
   e_eta_DY_stack_3->GetYaxis()->SetLabelFont(42);
   e_eta_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   e_eta_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   e_eta_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   e_eta_DY_stack_3->GetYaxis()->SetTitleFont(42);
   e_eta_DY_stack_3->GetZaxis()->SetLabelFont(42);
   e_eta_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   e_eta_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   e_eta_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(e_eta_DY_stack_3,"hist");
   
   TH1F *e_eta_W_stack_4 = new TH1F("e_eta_W_stack_4","W",30,-2.8,2.8);
   e_eta_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   e_eta_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   e_eta_W_stack_4->SetMarkerColor(ci);
   e_eta_W_stack_4->GetXaxis()->SetTitle("electron #eta");
   e_eta_W_stack_4->GetXaxis()->SetLabelFont(42);
   e_eta_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   e_eta_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   e_eta_W_stack_4->GetXaxis()->SetTitleFont(42);
   e_eta_W_stack_4->GetYaxis()->SetTitle("Events");
   e_eta_W_stack_4->GetYaxis()->SetLabelFont(42);
   e_eta_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   e_eta_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   e_eta_W_stack_4->GetYaxis()->SetTitleOffset(0);
   e_eta_W_stack_4->GetYaxis()->SetTitleFont(42);
   e_eta_W_stack_4->GetZaxis()->SetLabelFont(42);
   e_eta_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   e_eta_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   e_eta_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(e_eta_W_stack_4,"hist");
   
   TH1F *e_eta_SinglesPtop_stack_5 = new TH1F("e_eta_SinglesPtop_stack_5","Single top",30,-2.8,2.8);
   e_eta_SinglesPtop_stack_5->SetBinContent(3,27.54174);
   e_eta_SinglesPtop_stack_5->SetBinContent(4,68.89464);
   e_eta_SinglesPtop_stack_5->SetBinContent(5,128.1119);
   e_eta_SinglesPtop_stack_5->SetBinContent(6,174.1851);
   e_eta_SinglesPtop_stack_5->SetBinContent(7,145.0934);
   e_eta_SinglesPtop_stack_5->SetBinContent(8,149.8161);
   e_eta_SinglesPtop_stack_5->SetBinContent(9,223.5121);
   e_eta_SinglesPtop_stack_5->SetBinContent(10,284.2634);
   e_eta_SinglesPtop_stack_5->SetBinContent(11,326.1368);
   e_eta_SinglesPtop_stack_5->SetBinContent(12,389.7096);
   e_eta_SinglesPtop_stack_5->SetBinContent(13,366.8685);
   e_eta_SinglesPtop_stack_5->SetBinContent(14,411.3649);
   e_eta_SinglesPtop_stack_5->SetBinContent(15,390.6516);
   e_eta_SinglesPtop_stack_5->SetBinContent(16,422.5101);
   e_eta_SinglesPtop_stack_5->SetBinContent(17,434.5602);
   e_eta_SinglesPtop_stack_5->SetBinContent(18,405.951);
   e_eta_SinglesPtop_stack_5->SetBinContent(19,362.1981);
   e_eta_SinglesPtop_stack_5->SetBinContent(20,324.1178);
   e_eta_SinglesPtop_stack_5->SetBinContent(21,305.1003);
   e_eta_SinglesPtop_stack_5->SetBinContent(22,274.9345);
   e_eta_SinglesPtop_stack_5->SetBinContent(23,213.1387);
   e_eta_SinglesPtop_stack_5->SetBinContent(24,156.6678);
   e_eta_SinglesPtop_stack_5->SetBinContent(25,160.8978);
   e_eta_SinglesPtop_stack_5->SetBinContent(26,145.4196);
   e_eta_SinglesPtop_stack_5->SetBinContent(27,93.32542);
   e_eta_SinglesPtop_stack_5->SetBinContent(28,53.3968);
   e_eta_SinglesPtop_stack_5->SetBinError(3,5.814612);
   e_eta_SinglesPtop_stack_5->SetBinError(4,9.503956);
   e_eta_SinglesPtop_stack_5->SetBinError(5,13.01612);
   e_eta_SinglesPtop_stack_5->SetBinError(6,15.25295);
   e_eta_SinglesPtop_stack_5->SetBinError(7,14.12243);
   e_eta_SinglesPtop_stack_5->SetBinError(8,14.18673);
   e_eta_SinglesPtop_stack_5->SetBinError(9,17.24873);
   e_eta_SinglesPtop_stack_5->SetBinError(10,19.39952);
   e_eta_SinglesPtop_stack_5->SetBinError(11,20.69043);
   e_eta_SinglesPtop_stack_5->SetBinError(12,22.62766);
   e_eta_SinglesPtop_stack_5->SetBinError(13,21.96326);
   e_eta_SinglesPtop_stack_5->SetBinError(14,23.31076);
   e_eta_SinglesPtop_stack_5->SetBinError(15,22.72252);
   e_eta_SinglesPtop_stack_5->SetBinError(16,23.97328);
   e_eta_SinglesPtop_stack_5->SetBinError(17,24.31529);
   e_eta_SinglesPtop_stack_5->SetBinError(18,23.51732);
   e_eta_SinglesPtop_stack_5->SetBinError(19,22.21035);
   e_eta_SinglesPtop_stack_5->SetBinError(20,20.92984);
   e_eta_SinglesPtop_stack_5->SetBinError(21,20.25491);
   e_eta_SinglesPtop_stack_5->SetBinError(22,19.29738);
   e_eta_SinglesPtop_stack_5->SetBinError(23,17.08157);
   e_eta_SinglesPtop_stack_5->SetBinError(24,14.35154);
   e_eta_SinglesPtop_stack_5->SetBinError(25,14.6153);
   e_eta_SinglesPtop_stack_5->SetBinError(26,13.96922);
   e_eta_SinglesPtop_stack_5->SetBinError(27,11.00115);
   e_eta_SinglesPtop_stack_5->SetBinError(28,8.372054);
   e_eta_SinglesPtop_stack_5->SetEntries(5156);
   e_eta_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   e_eta_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   e_eta_SinglesPtop_stack_5->SetMarkerColor(ci);
   e_eta_SinglesPtop_stack_5->GetXaxis()->SetTitle("electron #eta");
   e_eta_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   e_eta_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   e_eta_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   e_eta_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   e_eta_SinglesPtop_stack_5->GetYaxis()->SetTitle("Events");
   e_eta_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   e_eta_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   e_eta_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   e_eta_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   e_eta_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   e_eta_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   e_eta_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   e_eta_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   e_eta_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(e_eta_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_e_eta_fx3001[31] = {
   -2.706667,
   -2.52,
   -2.333333,
   -2.146667,
   -1.96,
   -1.773333,
   -1.586667,
   -1.4,
   -1.213333,
   -1.026667,
   -0.84,
   -0.6533333,
   -0.4666667,
   -0.28,
   -0.09333333,
   0.09333333,
   0.28,
   0.4666667,
   0.6533333,
   0.84,
   1.026667,
   1.213333,
   1.4,
   1.586667,
   1.773333,
   1.96,
   2.146667,
   2.333333,
   2.52,
   2.706667,
   0};
   Double_t Graph_from_e_eta_fy3001[31] = {
   0,
   0,
   1096,
   1813,
   2585,
   3119,
   3036,
   4176,
   5385,
   6171,
   6767,
   7486,
   7752,
   8141,
   7940,
   7947,
   8059,
   7939,
   7663,
   6931,
   6185,
   5340,
   4022,
   2963,
   3086,
   2610,
   1942,
   966,
   0,
   0,
   0};
   Double_t Graph_from_e_eta_felx3001[31] = {
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0};
   Double_t Graph_from_e_eta_fely3001[31] = {
   0,
   0,
   33.10589,
   42.57934,
   50.8429,
   55.84801,
   55.09991,
   64.62198,
   73.38256,
   78.55571,
   82.26178,
   86.52167,
   88.04544,
   90.22749,
   89.10668,
   89.14595,
   89.77193,
   89.10107,
   87.53856,
   83.25263,
   78.64477,
   73.0753,
   63.41924,
   54.43345,
   55.55178,
   51.08816,
   44.06813,
   31.08054,
   0,
   0,
   0};
   Double_t Graph_from_e_eta_fehx3001[31] = {
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0};
   Double_t Graph_from_e_eta_fehy3001[31] = {
   1.841055,
   1.841055,
   33.10589,
   42.57934,
   50.8429,
   55.84801,
   55.09991,
   64.62198,
   73.38256,
   78.55571,
   82.26178,
   86.52167,
   88.04544,
   90.22749,
   89.10668,
   89.14595,
   89.77193,
   89.10107,
   87.53856,
   83.25263,
   78.64477,
   73.0753,
   63.41924,
   54.43345,
   55.55178,
   51.08816,
   44.06813,
   31.08054,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_e_eta_fx3001,Graph_from_e_eta_fy3001,Graph_from_e_eta_felx3001,Graph_from_e_eta_fehx3001,Graph_from_e_eta_fely3001,Graph_from_e_eta_fehy3001);
   grae->SetName("Graph_from_e_eta");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_e_eta3001 = new TH1F("Graph_Graph_from_e_eta3001","Data",100,-3.36,3.36);
   Graph_Graph_from_e_eta3001->SetMinimum(0);
   Graph_Graph_from_e_eta3001->SetMaximum(9054.35);
   Graph_Graph_from_e_eta3001->SetDirectory(0);
   Graph_Graph_from_e_eta3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_e_eta3001->SetLineColor(ci);
   Graph_Graph_from_e_eta3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_e_eta3001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_e_eta3001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_e_eta3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_e_eta3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_e_eta3001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_e_eta3001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_e_eta3001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_e_eta3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_e_eta3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_e_eta3001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_e_eta3001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_e_eta3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_e_eta3001);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_e_eta","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("e_eta_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("e_eta_Diboson","Diboson","f");

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
   entry=leg->AddEntry("e_eta_DY","DY","f");

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
   entry=leg->AddEntry("e_eta_W","W","f");

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
   entry=leg->AddEntry("e_eta_Single top","Single top","f");

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
   p2->Range(-3.609639,0.4485106,3.137349,1.597447);
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
   
   TH1F *ratioframe__2 = new TH1F("ratioframe__2","t#bar{t}",30,-2.8,2.8);
   ratioframe__2->SetMinimum(0.46);
   ratioframe__2->SetMaximum(1.54);
   ratioframe__2->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__2->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__2->SetMarkerColor(ci);
   ratioframe__2->GetXaxis()->SetTitle("electron #eta");
   ratioframe__2->GetXaxis()->SetLabelFont(42);
   ratioframe__2->GetXaxis()->SetLabelSize(0);
   ratioframe__2->GetXaxis()->SetTitleSize(0);
   ratioframe__2->GetXaxis()->SetTitleOffset(0);
   ratioframe__2->GetXaxis()->SetTitleFont(42);
   ratioframe__2->GetYaxis()->SetTitle("Data/MC");
   ratioframe__2->GetYaxis()->SetNoExponent();
   ratioframe__2->GetYaxis()->SetNdivisions(5);
   ratioframe__2->GetYaxis()->SetLabelFont(42);
   ratioframe__2->GetYaxis()->SetLabelSize(0.18);
   ratioframe__2->GetYaxis()->SetTitleSize(0.2);
   ratioframe__2->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__2->GetYaxis()->SetTitleFont(42);
   ratioframe__2->GetZaxis()->SetLabelFont(42);
   ratioframe__2->GetZaxis()->SetLabelSize(0.035);
   ratioframe__2->GetZaxis()->SetTitleSize(0.035);
   ratioframe__2->GetZaxis()->SetTitleFont(42);
   ratioframe__2->Draw("");
   
   Double_t Graph_from_ratio_fx3002[30] = {
   -2.706667,
   -2.52,
   -2.333333,
   -2.146667,
   -1.96,
   -1.773333,
   -1.586667,
   -1.4,
   -1.213333,
   -1.026667,
   -0.84,
   -0.6533333,
   -0.4666667,
   -0.28,
   -0.09333333,
   0.09333333,
   0.28,
   0.4666667,
   0.6533333,
   0.84,
   1.026667,
   1.213333,
   1.4,
   1.586667,
   1.773333,
   1.96,
   2.146667,
   2.333333,
   2.52,
   2.706667};
   Double_t Graph_from_ratio_fy3002[30] = {
   0,
   0,
   0.9788032,
   0.89816,
   0.9221609,
   0.8682094,
   0.9007394,
   0.957397,
   0.9249807,
   0.9201779,
   0.9190983,
   0.9226106,
   0.9223747,
   0.9327326,
   0.900644,
   0.8673387,
   0.8827467,
   0.902545,
   0.9076512,
   0.9068868,
   0.8952091,
   0.8802337,
   0.8781382,
   0.8883436,
   0.8988731,
   0.894268,
   0.9007353,
   0.7611053,
   0,
   0};
   Double_t Graph_from_ratio_felx3002[30] = {
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333};
   Double_t Graph_from_ratio_fely3002[30] = {
   0,
   0,
   0.03518162,
   0.02611655,
   0.02227827,
   0.0192995,
   0.01986682,
   0.01804805,
   0.0152,
   0.01392069,
   0.01327768,
   0.01296004,
   0.01244006,
   0.01230925,
   0.01199786,
   0.01166857,
   0.01183024,
   0.01204834,
   0.01257897,
   0.01309236,
   0.01388537,
   0.01467473,
   0.01640215,
   0.01932894,
   0.01968678,
   0.02075222,
   0.02412498,
   0.02826292,
   0,
   0};
   Double_t Graph_from_ratio_fehx3002[30] = {
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333,
   0.09333333};
   Double_t Graph_from_ratio_fehy3002[30] = {
   0,
   0,
   0.03518162,
   0.02611655,
   0.02227827,
   0.0192995,
   0.01986682,
   0.01804805,
   0.0152,
   0.01392069,
   0.01327768,
   0.01296004,
   0.01244006,
   0.01230925,
   0.01199786,
   0.01166857,
   0.01183024,
   0.01204834,
   0.01257897,
   0.01309236,
   0.01388537,
   0.01467473,
   0.01640215,
   0.01932894,
   0.01968678,
   0.02075222,
   0.02412498,
   0.02826292,
   0,
   0};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3002,Graph_from_ratio_fy3002,Graph_from_ratio_felx3002,Graph_from_ratio_fehx3002,Graph_from_ratio_fely3002,Graph_from_ratio_fehy3002);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3002 = new TH1F("Graph_Graph_from_ratio3002","Data",100,-3.36,3.36);
   Graph_Graph_from_ratio3002->SetMinimum(0);
   Graph_Graph_from_ratio3002->SetMaximum(1.115383);
   Graph_Graph_from_ratio3002->SetDirectory(0);
   Graph_Graph_from_ratio3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3002->SetLineColor(ci);
   Graph_Graph_from_ratio3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3002);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
