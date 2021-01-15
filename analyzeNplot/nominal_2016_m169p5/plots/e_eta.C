void e_eta()
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
   p1->Range(-3.609639,-1583.608,3.137349,11613.96);
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
   frame__1->SetMaximum(11481.98);
   frame__1->SetEntries(32767);
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
   mc_stack_1->SetMaximum(9273.908);
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
   e_eta_t#bar{t}_stack_1->SetBinContent(3,984.4002);
   e_eta_t#bar{t}_stack_1->SetBinContent(4,1825.737);
   e_eta_t#bar{t}_stack_1->SetBinContent(5,2812.533);
   e_eta_t#bar{t}_stack_1->SetBinContent(6,3358.469);
   e_eta_t#bar{t}_stack_1->SetBinContent(7,3292.245);
   e_eta_t#bar{t}_stack_1->SetBinContent(8,4009.826);
   e_eta_t#bar{t}_stack_1->SetBinContent(9,5197.501);
   e_eta_t#bar{t}_stack_1->SetBinContent(10,6356.036);
   e_eta_t#bar{t}_stack_1->SetBinContent(11,7122.93);
   e_eta_t#bar{t}_stack_1->SetBinContent(12,7836.171);
   e_eta_t#bar{t}_stack_1->SetBinContent(13,8078.967);
   e_eta_t#bar{t}_stack_1->SetBinContent(14,7694.263);
   e_eta_t#bar{t}_stack_1->SetBinContent(15,8282.688);
   e_eta_t#bar{t}_stack_1->SetBinContent(16,8377.773);
   e_eta_t#bar{t}_stack_1->SetBinContent(17,8252.986);
   e_eta_t#bar{t}_stack_1->SetBinContent(18,8312.927);
   e_eta_t#bar{t}_stack_1->SetBinContent(19,7665.794);
   e_eta_t#bar{t}_stack_1->SetBinContent(20,7370.061);
   e_eta_t#bar{t}_stack_1->SetBinContent(21,6494.132);
   e_eta_t#bar{t}_stack_1->SetBinContent(22,5676.054);
   e_eta_t#bar{t}_stack_1->SetBinContent(23,4407.735);
   e_eta_t#bar{t}_stack_1->SetBinContent(24,3028.267);
   e_eta_t#bar{t}_stack_1->SetBinContent(25,3116.412);
   e_eta_t#bar{t}_stack_1->SetBinContent(26,2654.482);
   e_eta_t#bar{t}_stack_1->SetBinContent(27,1960.715);
   e_eta_t#bar{t}_stack_1->SetBinContent(28,1152.456);
   e_eta_t#bar{t}_stack_1->SetBinError(3,72.01775);
   e_eta_t#bar{t}_stack_1->SetBinError(4,98.98306);
   e_eta_t#bar{t}_stack_1->SetBinError(5,122.6778);
   e_eta_t#bar{t}_stack_1->SetBinError(6,134.5255);
   e_eta_t#bar{t}_stack_1->SetBinError(7,133.201);
   e_eta_t#bar{t}_stack_1->SetBinError(8,146.425);
   e_eta_t#bar{t}_stack_1->SetBinError(9,166.4401);
   e_eta_t#bar{t}_stack_1->SetBinError(10,183.9099);
   e_eta_t#bar{t}_stack_1->SetBinError(11,194.595);
   e_eta_t#bar{t}_stack_1->SetBinError(12,202.9897);
   e_eta_t#bar{t}_stack_1->SetBinError(13,205.8442);
   e_eta_t#bar{t}_stack_1->SetBinError(14,201.0338);
   e_eta_t#bar{t}_stack_1->SetBinError(15,208.6737);
   e_eta_t#bar{t}_stack_1->SetBinError(16,212.9377);
   e_eta_t#bar{t}_stack_1->SetBinError(17,211.2347);
   e_eta_t#bar{t}_stack_1->SetBinError(18,212.2547);
   e_eta_t#bar{t}_stack_1->SetBinError(19,203.764);
   e_eta_t#bar{t}_stack_1->SetBinError(20,199.115);
   e_eta_t#bar{t}_stack_1->SetBinError(21,187.1658);
   e_eta_t#bar{t}_stack_1->SetBinError(22,174.7771);
   e_eta_t#bar{t}_stack_1->SetBinError(23,154.0513);
   e_eta_t#bar{t}_stack_1->SetBinError(24,126.6984);
   e_eta_t#bar{t}_stack_1->SetBinError(25,128.8207);
   e_eta_t#bar{t}_stack_1->SetBinError(26,118.3838);
   e_eta_t#bar{t}_stack_1->SetBinError(27,101.0495);
   e_eta_t#bar{t}_stack_1->SetBinError(28,77.13249);
   e_eta_t#bar{t}_stack_1->SetEntries(27079);
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
   ratioframe__2->SetEntries(32767);

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
   1.080341,
   0.9465054,
   0.8729872,
   0.8729475,
   0.8779407,
   0.9986488,
   0.988912,
   0.9280303,
   0.9073743,
   0.9058115,
   0.9166083,
   1.003001,
   0.913262,
   0.8997663,
   0.9244933,
   0.9097157,
   0.9492547,
   0.8974833,
   0.9040143,
   0.8909578,
   0.8693873,
   0.9287753,
   0.9354268,
   0.9307144,
   0.9438214,
   0.7996218,
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
   0.08358279,
   0.0546596,
   0.04052594,
   0.0370789,
   0.03777953,
   0.03859218,
   0.03337937,
   0.02838583,
   0.02624138,
   0.0248511,
   0.02473498,
   0.02736934,
   0.02433462,
   0.02414331,
   0.02488885,
   0.02449176,
   0.02657268,
   0.02571705,
   0.02760261,
   0.02906225,
   0.03219326,
   0.04085751,
   0.04072169,
   0.04355786,
   0.0513119,
   0.05744109,
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
   0.08358279,
   0.0546596,
   0.04052594,
   0.0370789,
   0.03777953,
   0.03859218,
   0.03337937,
   0.02838583,
   0.02624138,
   0.0248511,
   0.02473498,
   0.02736934,
   0.02433462,
   0.02414331,
   0.02488885,
   0.02449176,
   0.02657268,
   0.02571705,
   0.02760261,
   0.02906225,
   0.03219326,
   0.04085751,
   0.04072169,
   0.04355786,
   0.0513119,
   0.05744109,
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
   Graph_Graph_from_ratio3002->SetMaximum(1.280316);
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
