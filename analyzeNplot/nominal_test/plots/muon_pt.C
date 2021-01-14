void muon_pt()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 14 09:33:57 2021) by ROOT version 6.14/09
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
   p1->Range(-28.91566,-3254.038,212.0482,23863.78);
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
   
   TH1F *frame__17 = new TH1F("frame__17","t#bar{t}",30,0,200);
   frame__17->SetMinimum(0.1);
   frame__17->SetMaximum(23592.6);
   frame__17->SetEntries(365945);
   frame__17->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__17->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__17->SetMarkerColor(ci);
   frame__17->GetXaxis()->SetTitle("muon p_{T}");
   frame__17->GetXaxis()->SetLabelFont(42);
   frame__17->GetXaxis()->SetLabelSize(0.035);
   frame__17->GetXaxis()->SetTitleSize(0.035);
   frame__17->GetXaxis()->SetTitleFont(42);
   frame__17->GetYaxis()->SetTitle("Events");
   frame__17->GetYaxis()->SetNoExponent();
   frame__17->GetYaxis()->SetLabelFont(42);
   frame__17->GetYaxis()->SetTitleSize(0.045);
   frame__17->GetYaxis()->SetTitleOffset(1.3);
   frame__17->GetYaxis()->SetTitleFont(42);
   frame__17->GetZaxis()->SetLabelFont(42);
   frame__17->GetZaxis()->SetLabelSize(0.035);
   frame__17->GetZaxis()->SetTitleSize(0.035);
   frame__17->GetZaxis()->SetTitleFont(42);
   frame__17->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_9 = new TH1F("mc_stack_9","mc",30,0,200);
   mc_stack_9->SetMinimum(-2.396071e-07);
   mc_stack_9->SetMaximum(19055.56);
   mc_stack_9->SetDirectory(0);
   mc_stack_9->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_9->SetLineColor(ci);
   mc_stack_9->GetXaxis()->SetLabelFont(42);
   mc_stack_9->GetXaxis()->SetLabelSize(0.035);
   mc_stack_9->GetXaxis()->SetTitleSize(0.035);
   mc_stack_9->GetXaxis()->SetTitleFont(42);
   mc_stack_9->GetYaxis()->SetLabelFont(42);
   mc_stack_9->GetYaxis()->SetLabelSize(0.035);
   mc_stack_9->GetYaxis()->SetTitleSize(0.035);
   mc_stack_9->GetYaxis()->SetTitleOffset(0);
   mc_stack_9->GetYaxis()->SetTitleFont(42);
   mc_stack_9->GetZaxis()->SetLabelFont(42);
   mc_stack_9->GetZaxis()->SetLabelSize(0.035);
   mc_stack_9->GetZaxis()->SetTitleSize(0.035);
   mc_stack_9->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_9);
   
   
   TH1F *muon_pt_t#bar{t}_stack_1 = new TH1F("muon_pt_t#bar{t}_stack_1","t#bar{t}",30,0,200);
   muon_pt_t#bar{t}_stack_1->SetBinContent(4,9226.082);
   muon_pt_t#bar{t}_stack_1->SetBinContent(5,17369.22);
   muon_pt_t#bar{t}_stack_1->SetBinContent(6,16757.09);
   muon_pt_t#bar{t}_stack_1->SetBinContent(7,15229);
   muon_pt_t#bar{t}_stack_1->SetBinContent(8,13331.72);
   muon_pt_t#bar{t}_stack_1->SetBinContent(9,11388.48);
   muon_pt_t#bar{t}_stack_1->SetBinContent(10,9470.751);
   muon_pt_t#bar{t}_stack_1->SetBinContent(11,7955.177);
   muon_pt_t#bar{t}_stack_1->SetBinContent(12,6511.391);
   muon_pt_t#bar{t}_stack_1->SetBinContent(13,5428.891);
   muon_pt_t#bar{t}_stack_1->SetBinContent(14,4478.361);
   muon_pt_t#bar{t}_stack_1->SetBinContent(15,3618.148);
   muon_pt_t#bar{t}_stack_1->SetBinContent(16,2939.246);
   muon_pt_t#bar{t}_stack_1->SetBinContent(17,2411.792);
   muon_pt_t#bar{t}_stack_1->SetBinContent(18,2059.156);
   muon_pt_t#bar{t}_stack_1->SetBinContent(19,1641.445);
   muon_pt_t#bar{t}_stack_1->SetBinContent(20,1352.489);
   muon_pt_t#bar{t}_stack_1->SetBinContent(21,1073.931);
   muon_pt_t#bar{t}_stack_1->SetBinContent(22,905.9576);
   muon_pt_t#bar{t}_stack_1->SetBinContent(23,761.8709);
   muon_pt_t#bar{t}_stack_1->SetBinContent(24,662.3969);
   muon_pt_t#bar{t}_stack_1->SetBinContent(25,522.8928);
   muon_pt_t#bar{t}_stack_1->SetBinContent(26,441.5141);
   muon_pt_t#bar{t}_stack_1->SetBinContent(27,367.762);
   muon_pt_t#bar{t}_stack_1->SetBinContent(28,318.8497);
   muon_pt_t#bar{t}_stack_1->SetBinContent(29,263.2088);
   muon_pt_t#bar{t}_stack_1->SetBinContent(30,223.473);
   muon_pt_t#bar{t}_stack_1->SetBinContent(31,1391.031);
   muon_pt_t#bar{t}_stack_1->SetBinError(4,61.40499);
   muon_pt_t#bar{t}_stack_1->SetBinError(5,84.25379);
   muon_pt_t#bar{t}_stack_1->SetBinError(6,82.87667);
   muon_pt_t#bar{t}_stack_1->SetBinError(7,79.06203);
   muon_pt_t#bar{t}_stack_1->SetBinError(8,73.91498);
   muon_pt_t#bar{t}_stack_1->SetBinError(9,68.25856);
   muon_pt_t#bar{t}_stack_1->SetBinError(10,62.41219);
   muon_pt_t#bar{t}_stack_1->SetBinError(11,57.21415);
   muon_pt_t#bar{t}_stack_1->SetBinError(12,51.79041);
   muon_pt_t#bar{t}_stack_1->SetBinError(13,47.33663);
   muon_pt_t#bar{t}_stack_1->SetBinError(14,43.00919);
   muon_pt_t#bar{t}_stack_1->SetBinError(15,38.65108);
   muon_pt_t#bar{t}_stack_1->SetBinError(16,34.857);
   muon_pt_t#bar{t}_stack_1->SetBinError(17,31.60235);
   muon_pt_t#bar{t}_stack_1->SetBinError(18,29.21444);
   muon_pt_t#bar{t}_stack_1->SetBinError(19,26.03449);
   muon_pt_t#bar{t}_stack_1->SetBinError(20,23.6891);
   muon_pt_t#bar{t}_stack_1->SetBinError(21,21.09819);
   muon_pt_t#bar{t}_stack_1->SetBinError(22,19.39402);
   muon_pt_t#bar{t}_stack_1->SetBinError(23,17.75897);
   muon_pt_t#bar{t}_stack_1->SetBinError(24,16.55281);
   muon_pt_t#bar{t}_stack_1->SetBinError(25,14.77997);
   muon_pt_t#bar{t}_stack_1->SetBinError(26,13.54076);
   muon_pt_t#bar{t}_stack_1->SetBinError(27,12.39567);
   muon_pt_t#bar{t}_stack_1->SetBinError(28,11.53716);
   muon_pt_t#bar{t}_stack_1->SetBinError(29,10.50925);
   muon_pt_t#bar{t}_stack_1->SetBinError(30,9.654502);
   muon_pt_t#bar{t}_stack_1->SetBinError(31,24.08519);
   muon_pt_t#bar{t}_stack_1->SetEntries(360257);
   muon_pt_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   muon_pt_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   muon_pt_t#bar{t}_stack_1->SetMarkerColor(ci);
   muon_pt_t#bar{t}_stack_1->GetXaxis()->SetTitle("muon p_{T}");
   muon_pt_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   muon_pt_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   muon_pt_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   muon_pt_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   muon_pt_t#bar{t}_stack_1->GetYaxis()->SetTitle("Events");
   muon_pt_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   muon_pt_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   muon_pt_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   muon_pt_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   muon_pt_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   muon_pt_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   muon_pt_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   muon_pt_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   muon_pt_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(muon_pt_t#bar{t}_stack_1,"hist");
   
   TH1F *muon_pt_Diboson_stack_2 = new TH1F("muon_pt_Diboson_stack_2","Diboson",30,0,200);
   muon_pt_Diboson_stack_2->SetBinContent(4,8.967199);
   muon_pt_Diboson_stack_2->SetBinContent(5,19.84849);
   muon_pt_Diboson_stack_2->SetBinContent(6,14.57849);
   muon_pt_Diboson_stack_2->SetBinContent(7,19.4178);
   muon_pt_Diboson_stack_2->SetBinContent(8,12.81106);
   muon_pt_Diboson_stack_2->SetBinContent(9,10.50627);
   muon_pt_Diboson_stack_2->SetBinContent(10,11.49173);
   muon_pt_Diboson_stack_2->SetBinContent(11,8.342131);
   muon_pt_Diboson_stack_2->SetBinContent(12,8.140397);
   muon_pt_Diboson_stack_2->SetBinContent(13,8.388691);
   muon_pt_Diboson_stack_2->SetBinContent(14,6.39713);
   muon_pt_Diboson_stack_2->SetBinContent(15,3.827204);
   muon_pt_Diboson_stack_2->SetBinContent(16,5.447561);
   muon_pt_Diboson_stack_2->SetBinContent(17,4.343264);
   muon_pt_Diboson_stack_2->SetBinContent(18,4.884108);
   muon_pt_Diboson_stack_2->SetBinContent(19,3.585244);
   muon_pt_Diboson_stack_2->SetBinContent(20,2.177009);
   muon_pt_Diboson_stack_2->SetBinContent(21,3.452244);
   muon_pt_Diboson_stack_2->SetBinContent(22,0.7739329);
   muon_pt_Diboson_stack_2->SetBinContent(23,1.62754);
   muon_pt_Diboson_stack_2->SetBinContent(24,1.784534);
   muon_pt_Diboson_stack_2->SetBinContent(25,1.863563);
   muon_pt_Diboson_stack_2->SetBinContent(26,1.105759);
   muon_pt_Diboson_stack_2->SetBinContent(27,1.682092);
   muon_pt_Diboson_stack_2->SetBinContent(28,1.358245);
   muon_pt_Diboson_stack_2->SetBinContent(29,0.6992406);
   muon_pt_Diboson_stack_2->SetBinContent(30,0.4240725);
   muon_pt_Diboson_stack_2->SetBinContent(31,14.22618);
   muon_pt_Diboson_stack_2->SetBinError(4,1.858406);
   muon_pt_Diboson_stack_2->SetBinError(5,2.775612);
   muon_pt_Diboson_stack_2->SetBinError(6,2.389783);
   muon_pt_Diboson_stack_2->SetBinError(7,2.744071);
   muon_pt_Diboson_stack_2->SetBinError(8,2.193604);
   muon_pt_Diboson_stack_2->SetBinError(9,1.98681);
   muon_pt_Diboson_stack_2->SetBinError(10,2.149689);
   muon_pt_Diboson_stack_2->SetBinError(11,1.811788);
   muon_pt_Diboson_stack_2->SetBinError(12,1.771523);
   muon_pt_Diboson_stack_2->SetBinError(13,1.759241);
   muon_pt_Diboson_stack_2->SetBinError(14,1.587112);
   muon_pt_Diboson_stack_2->SetBinError(15,1.205466);
   muon_pt_Diboson_stack_2->SetBinError(16,1.509404);
   muon_pt_Diboson_stack_2->SetBinError(17,1.300328);
   muon_pt_Diboson_stack_2->SetBinError(18,1.38456);
   muon_pt_Diboson_stack_2->SetBinError(19,1.199912);
   muon_pt_Diboson_stack_2->SetBinError(20,0.9183595);
   muon_pt_Diboson_stack_2->SetBinError(21,1.161921);
   muon_pt_Diboson_stack_2->SetBinError(22,0.5472759);
   muon_pt_Diboson_stack_2->SetBinError(23,0.8185091);
   muon_pt_Diboson_stack_2->SetBinError(24,0.8208304);
   muon_pt_Diboson_stack_2->SetBinError(25,0.8414409);
   muon_pt_Diboson_stack_2->SetBinError(26,0.6643488);
   muon_pt_Diboson_stack_2->SetBinError(27,0.8411731);
   muon_pt_Diboson_stack_2->SetBinError(28,0.7236379);
   muon_pt_Diboson_stack_2->SetBinError(29,0.5197667);
   muon_pt_Diboson_stack_2->SetBinError(30,0.4240725);
   muon_pt_Diboson_stack_2->SetBinError(31,2.400629);
   muon_pt_Diboson_stack_2->SetEntries(511);
   muon_pt_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   muon_pt_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   muon_pt_Diboson_stack_2->SetMarkerColor(ci);
   muon_pt_Diboson_stack_2->GetXaxis()->SetTitle("muon p_{T}");
   muon_pt_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   muon_pt_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   muon_pt_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   muon_pt_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   muon_pt_Diboson_stack_2->GetYaxis()->SetTitle("Events");
   muon_pt_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   muon_pt_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   muon_pt_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   muon_pt_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   muon_pt_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   muon_pt_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   muon_pt_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   muon_pt_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   muon_pt_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(muon_pt_Diboson_stack_2,"hist");
   
   TH1F *muon_pt_DY_stack_3 = new TH1F("muon_pt_DY_stack_3","DY",30,0,200);
   muon_pt_DY_stack_3->SetBinContent(4,67.0166);
   muon_pt_DY_stack_3->SetBinContent(5,99.82734);
   muon_pt_DY_stack_3->SetBinContent(6,68.13885);
   muon_pt_DY_stack_3->SetBinContent(7,33.97976);
   muon_pt_DY_stack_3->SetBinContent(8,16.20458);
   muon_pt_DY_stack_3->SetBinContent(9,15.66312);
   muon_pt_DY_stack_3->SetBinContent(10,20.7678);
   muon_pt_DY_stack_3->SetBinContent(15,17.70928);
   muon_pt_DY_stack_3->SetBinError(4,33.54818);
   muon_pt_DY_stack_3->SetBinError(5,41.73056);
   muon_pt_DY_stack_3->SetBinError(6,34.08474);
   muon_pt_DY_stack_3->SetBinError(7,24.02732);
   muon_pt_DY_stack_3->SetBinError(8,16.20458);
   muon_pt_DY_stack_3->SetBinError(9,15.29066);
   muon_pt_DY_stack_3->SetBinError(10,20.7678);
   muon_pt_DY_stack_3->SetBinError(15,17.70928);
   muon_pt_DY_stack_3->SetEntries(21);
   muon_pt_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   muon_pt_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   muon_pt_DY_stack_3->SetMarkerColor(ci);
   muon_pt_DY_stack_3->GetXaxis()->SetTitle("muon p_{T}");
   muon_pt_DY_stack_3->GetXaxis()->SetLabelFont(42);
   muon_pt_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   muon_pt_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   muon_pt_DY_stack_3->GetXaxis()->SetTitleFont(42);
   muon_pt_DY_stack_3->GetYaxis()->SetTitle("Events");
   muon_pt_DY_stack_3->GetYaxis()->SetLabelFont(42);
   muon_pt_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   muon_pt_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   muon_pt_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   muon_pt_DY_stack_3->GetYaxis()->SetTitleFont(42);
   muon_pt_DY_stack_3->GetZaxis()->SetLabelFont(42);
   muon_pt_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   muon_pt_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   muon_pt_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(muon_pt_DY_stack_3,"hist");
   
   TH1F *muon_pt_W_stack_4 = new TH1F("muon_pt_W_stack_4","W",30,0,200);
   muon_pt_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   muon_pt_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   muon_pt_W_stack_4->SetMarkerColor(ci);
   muon_pt_W_stack_4->GetXaxis()->SetTitle("muon p_{T}");
   muon_pt_W_stack_4->GetXaxis()->SetLabelFont(42);
   muon_pt_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   muon_pt_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   muon_pt_W_stack_4->GetXaxis()->SetTitleFont(42);
   muon_pt_W_stack_4->GetYaxis()->SetTitle("Events");
   muon_pt_W_stack_4->GetYaxis()->SetLabelFont(42);
   muon_pt_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   muon_pt_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   muon_pt_W_stack_4->GetYaxis()->SetTitleOffset(0);
   muon_pt_W_stack_4->GetYaxis()->SetTitleFont(42);
   muon_pt_W_stack_4->GetZaxis()->SetLabelFont(42);
   muon_pt_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   muon_pt_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   muon_pt_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(muon_pt_W_stack_4,"hist");
   
   TH1F *muon_pt_SinglesPtop_stack_5 = new TH1F("muon_pt_SinglesPtop_stack_5","Single top",30,0,200);
   muon_pt_SinglesPtop_stack_5->SetBinContent(4,412.5022);
   muon_pt_SinglesPtop_stack_5->SetBinContent(5,659.2645);
   muon_pt_SinglesPtop_stack_5->SetBinContent(6,688.0618);
   muon_pt_SinglesPtop_stack_5->SetBinContent(7,645.6946);
   muon_pt_SinglesPtop_stack_5->SetBinContent(8,586.7256);
   muon_pt_SinglesPtop_stack_5->SetBinContent(9,457.2742);
   muon_pt_SinglesPtop_stack_5->SetBinContent(10,425.6737);
   muon_pt_SinglesPtop_stack_5->SetBinContent(11,354.522);
   muon_pt_SinglesPtop_stack_5->SetBinContent(12,288.4692);
   muon_pt_SinglesPtop_stack_5->SetBinContent(13,255.437);
   muon_pt_SinglesPtop_stack_5->SetBinContent(14,220.3598);
   muon_pt_SinglesPtop_stack_5->SetBinContent(15,181.836);
   muon_pt_SinglesPtop_stack_5->SetBinContent(16,148.1857);
   muon_pt_SinglesPtop_stack_5->SetBinContent(17,136.4197);
   muon_pt_SinglesPtop_stack_5->SetBinContent(18,103.1343);
   muon_pt_SinglesPtop_stack_5->SetBinContent(19,107.0191);
   muon_pt_SinglesPtop_stack_5->SetBinContent(20,82.34252);
   muon_pt_SinglesPtop_stack_5->SetBinContent(21,84.54562);
   muon_pt_SinglesPtop_stack_5->SetBinContent(22,66.54501);
   muon_pt_SinglesPtop_stack_5->SetBinContent(23,60.35217);
   muon_pt_SinglesPtop_stack_5->SetBinContent(24,43.76772);
   muon_pt_SinglesPtop_stack_5->SetBinContent(25,50.77708);
   muon_pt_SinglesPtop_stack_5->SetBinContent(26,36.68679);
   muon_pt_SinglesPtop_stack_5->SetBinContent(27,45.50597);
   muon_pt_SinglesPtop_stack_5->SetBinContent(28,24.98674);
   muon_pt_SinglesPtop_stack_5->SetBinContent(29,23.75921);
   muon_pt_SinglesPtop_stack_5->SetBinContent(30,25.95889);
   muon_pt_SinglesPtop_stack_5->SetBinContent(31,222.561);
   muon_pt_SinglesPtop_stack_5->SetBinError(4,23.37153);
   muon_pt_SinglesPtop_stack_5->SetBinError(5,29.66804);
   muon_pt_SinglesPtop_stack_5->SetBinError(6,30.25174);
   muon_pt_SinglesPtop_stack_5->SetBinError(7,29.42803);
   muon_pt_SinglesPtop_stack_5->SetBinError(8,27.97475);
   muon_pt_SinglesPtop_stack_5->SetBinError(9,24.71206);
   muon_pt_SinglesPtop_stack_5->SetBinError(10,23.89416);
   muon_pt_SinglesPtop_stack_5->SetBinError(11,21.8606);
   muon_pt_SinglesPtop_stack_5->SetBinError(12,19.5289);
   muon_pt_SinglesPtop_stack_5->SetBinError(13,18.49506);
   muon_pt_SinglesPtop_stack_5->SetBinError(14,17.15632);
   muon_pt_SinglesPtop_stack_5->SetBinError(15,15.72401);
   muon_pt_SinglesPtop_stack_5->SetBinError(16,14.09736);
   muon_pt_SinglesPtop_stack_5->SetBinError(17,13.60723);
   muon_pt_SinglesPtop_stack_5->SetBinError(18,11.74995);
   muon_pt_SinglesPtop_stack_5->SetBinError(19,12.13345);
   muon_pt_SinglesPtop_stack_5->SetBinError(20,10.46964);
   muon_pt_SinglesPtop_stack_5->SetBinError(21,10.84442);
   muon_pt_SinglesPtop_stack_5->SetBinError(22,9.314307);
   muon_pt_SinglesPtop_stack_5->SetBinError(23,8.940876);
   muon_pt_SinglesPtop_stack_5->SetBinError(24,7.618132);
   muon_pt_SinglesPtop_stack_5->SetBinError(25,8.195885);
   muon_pt_SinglesPtop_stack_5->SetBinError(26,7.022576);
   muon_pt_SinglesPtop_stack_5->SetBinError(27,7.742758);
   muon_pt_SinglesPtop_stack_5->SetBinError(28,5.768704);
   muon_pt_SinglesPtop_stack_5->SetBinError(29,5.599575);
   muon_pt_SinglesPtop_stack_5->SetBinError(30,6.009085);
   muon_pt_SinglesPtop_stack_5->SetBinError(31,17.33728);
   muon_pt_SinglesPtop_stack_5->SetEntries(5156);
   muon_pt_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   muon_pt_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   muon_pt_SinglesPtop_stack_5->SetMarkerColor(ci);
   muon_pt_SinglesPtop_stack_5->GetXaxis()->SetTitle("muon p_{T}");
   muon_pt_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   muon_pt_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   muon_pt_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   muon_pt_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   muon_pt_SinglesPtop_stack_5->GetYaxis()->SetTitle("Events");
   muon_pt_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   muon_pt_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   muon_pt_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   muon_pt_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   muon_pt_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   muon_pt_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   muon_pt_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   muon_pt_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   muon_pt_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(muon_pt_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_muon_pt_fx3017[31] = {
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
   Double_t Graph_from_muon_pt_fy3017[31] = {
   0,
   0,
   0,
   8959,
   16668,
   16136,
   14707,
   12924,
   10782,
   9114,
   7556,
   6028,
   4925,
   4134,
   3392,
   2741,
   2259,
   1845,
   1491,
   1209,
   975,
   787,
   691,
   604,
   497,
   426,
   361,
   272,
   226,
   174,
   0};
   Double_t Graph_from_muon_pt_felx3017[31] = {
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
   Double_t Graph_from_muon_pt_fely3017[31] = {
   0,
   0,
   0,
   94.65199,
   129.1046,
   127.0276,
   121.2724,
   113.6838,
   103.8364,
   95.46727,
   86.92526,
   77.6402,
   70.17834,
   64.29619,
   58.24088,
   52.35456,
   47.52894,
   42.95346,
   38.61347,
   34.77068,
   31.22499,
   28.05352,
   26.28688,
   24.57641,
   22.2935,
   20.63977,
   19,
   16.49242,
   15.0333,
   13.1785,
   0};
   Double_t Graph_from_muon_pt_fehx3017[31] = {
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
   Double_t Graph_from_muon_pt_fehy3017[31] = {
   1.841055,
   1.841055,
   1.841055,
   94.65199,
   129.1046,
   127.0276,
   121.2724,
   113.6838,
   103.8364,
   95.46727,
   86.92526,
   77.6402,
   70.17834,
   64.29619,
   58.24088,
   52.35456,
   47.52894,
   42.95346,
   38.61347,
   34.77068,
   31.22499,
   28.05352,
   26.28688,
   24.57641,
   22.2935,
   20.63977,
   19,
   16.49242,
   15.0333,
   14.2165,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_muon_pt_fx3017,Graph_from_muon_pt_fy3017,Graph_from_muon_pt_felx3017,Graph_from_muon_pt_fehx3017,Graph_from_muon_pt_fely3017,Graph_from_muon_pt_fehy3017);
   grae->SetName("Graph_from_muon_pt");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_muon_pt3017 = new TH1F("Graph_Graph_from_muon_pt3017","Data",100,0,220);
   Graph_Graph_from_muon_pt3017->SetMinimum(0);
   Graph_Graph_from_muon_pt3017->SetMaximum(18476.82);
   Graph_Graph_from_muon_pt3017->SetDirectory(0);
   Graph_Graph_from_muon_pt3017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_muon_pt3017->SetLineColor(ci);
   Graph_Graph_from_muon_pt3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_muon_pt3017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_muon_pt3017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_muon_pt3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_muon_pt3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_muon_pt3017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_muon_pt3017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_muon_pt3017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_muon_pt3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_muon_pt3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_muon_pt3017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_muon_pt3017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_muon_pt3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_muon_pt3017);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_muon_pt","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("muon_pt_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("muon_pt_Diboson","Diboson","f");

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
   entry=leg->AddEntry("muon_pt_DY","DY","f");

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
   entry=leg->AddEntry("muon_pt_W","W","f");

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
   entry=leg->AddEntry("muon_pt_Single top","Single top","f");

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
   
   TH1F *ratioframe__18 = new TH1F("ratioframe__18","t#bar{t}",30,0,200);
   ratioframe__18->SetMinimum(0.46);
   ratioframe__18->SetMaximum(1.54);
   ratioframe__18->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__18->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__18->SetMarkerColor(ci);
   ratioframe__18->GetXaxis()->SetTitle("muon p_{T}");
   ratioframe__18->GetXaxis()->SetLabelFont(42);
   ratioframe__18->GetXaxis()->SetLabelSize(0);
   ratioframe__18->GetXaxis()->SetTitleSize(0);
   ratioframe__18->GetXaxis()->SetTitleOffset(0);
   ratioframe__18->GetXaxis()->SetTitleFont(42);
   ratioframe__18->GetYaxis()->SetTitle("Data/MC");
   ratioframe__18->GetYaxis()->SetNoExponent();
   ratioframe__18->GetYaxis()->SetNdivisions(5);
   ratioframe__18->GetYaxis()->SetLabelFont(42);
   ratioframe__18->GetYaxis()->SetLabelSize(0.18);
   ratioframe__18->GetYaxis()->SetTitleSize(0.2);
   ratioframe__18->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__18->GetYaxis()->SetTitleFont(42);
   ratioframe__18->GetZaxis()->SetLabelFont(42);
   ratioframe__18->GetZaxis()->SetLabelSize(0.035);
   ratioframe__18->GetZaxis()->SetTitleSize(0.035);
   ratioframe__18->GetZaxis()->SetTitleFont(42);
   ratioframe__18->Draw("");
   
   Double_t Graph_from_ratio_fx3018[30] = {
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
   Double_t Graph_from_ratio_fy3018[30] = {
   0,
   0,
   0,
   0.9222233,
   0.9184404,
   0.9205913,
   0.9233372,
   0.9266199,
   0.9081935,
   0.9179464,
   0.9083868,
   0.8854288,
   0.8651406,
   0.8786178,
   0.8876048,
   0.8862293,
   0.8849955,
   0.8513391,
   0.8510033,
   0.8413312,
   0.8391219,
   0.8086088,
   0.8387443,
   0.8531687,
   0.8635467,
   0.8887839,
   0.8699842,
   0.7879611,
   0.78563,
   0.6964012};
   Double_t Graph_from_ratio_felx3018[30] = {
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
   Double_t Graph_from_ratio_fely3018[30] = {
   0,
   0,
   0,
   0.01200039,
   0.008690397,
   0.008787127,
   0.009156958,
   0.009756297,
   0.01042741,
   0.01159121,
   0.01240907,
   0.01348818,
   0.01454982,
   0.01617379,
   0.01852543,
   0.02006989,
   0.02211837,
   0.02336971,
   0.02609019,
   0.02856039,
   0.03188064,
   0.03391935,
   0.0377957,
   0.04108924,
   0.04631452,
   0.05153498,
   0.05512396,
   0.05614565,
   0.06156845,
   0.06158915};
   Double_t Graph_from_ratio_fehx3018[30] = {
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
   Double_t Graph_from_ratio_fehy3018[30] = {
   0,
   0,
   0,
   0.01200039,
   0.008690397,
   0.008787127,
   0.009156958,
   0.009756297,
   0.01042741,
   0.01159121,
   0.01240907,
   0.01348818,
   0.01454982,
   0.01617379,
   0.01852543,
   0.02006989,
   0.02211837,
   0.02336971,
   0.02609019,
   0.02856039,
   0.03188064,
   0.03391935,
   0.0377957,
   0.04108924,
   0.04631452,
   0.05153498,
   0.05512396,
   0.05614565,
   0.06156845,
   0.06158915};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3018,Graph_from_ratio_fy3018,Graph_from_ratio_felx3018,Graph_from_ratio_fehx3018,Graph_from_ratio_fely3018,Graph_from_ratio_fehy3018);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3018 = new TH1F("Graph_Graph_from_ratio3018","Data",100,0,220);
   Graph_Graph_from_ratio3018->SetMinimum(0);
   Graph_Graph_from_ratio3018->SetMaximum(1.034351);
   Graph_Graph_from_ratio3018->SetDirectory(0);
   Graph_Graph_from_ratio3018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3018->SetLineColor(ci);
   Graph_Graph_from_ratio3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3018);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
