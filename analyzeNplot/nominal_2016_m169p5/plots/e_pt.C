void e_pt()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 14 18:00:09 2021) by ROOT version 6.14/09
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
   p1->Range(-28.91566,-2819.607,212.0482,20677.95);
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
   frame__13->SetMaximum(20442.98);
   frame__13->SetEntries(32767);
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
   mc_stack_7->SetMaximum(16511.64);
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
   e_pt_t#bar{t}_stack_1->SetBinContent(4,13908.44);
   e_pt_t#bar{t}_stack_1->SetBinContent(5,15063.61);
   e_pt_t#bar{t}_stack_1->SetBinContent(6,14990.56);
   e_pt_t#bar{t}_stack_1->SetBinContent(7,14238.42);
   e_pt_t#bar{t}_stack_1->SetBinContent(8,12567.32);
   e_pt_t#bar{t}_stack_1->SetBinContent(9,11076.02);
   e_pt_t#bar{t}_stack_1->SetBinContent(10,9000.786);
   e_pt_t#bar{t}_stack_1->SetBinContent(11,7641.224);
   e_pt_t#bar{t}_stack_1->SetBinContent(12,6083.536);
   e_pt_t#bar{t}_stack_1->SetBinContent(13,5136.213);
   e_pt_t#bar{t}_stack_1->SetBinContent(14,4375.599);
   e_pt_t#bar{t}_stack_1->SetBinContent(15,3639.736);
   e_pt_t#bar{t}_stack_1->SetBinContent(16,2966.741);
   e_pt_t#bar{t}_stack_1->SetBinContent(17,2681.063);
   e_pt_t#bar{t}_stack_1->SetBinContent(18,2040.099);
   e_pt_t#bar{t}_stack_1->SetBinContent(19,1500.224);
   e_pt_t#bar{t}_stack_1->SetBinContent(20,1477.55);
   e_pt_t#bar{t}_stack_1->SetBinContent(21,1111.622);
   e_pt_t#bar{t}_stack_1->SetBinContent(22,893.4606);
   e_pt_t#bar{t}_stack_1->SetBinContent(23,849.4308);
   e_pt_t#bar{t}_stack_1->SetBinContent(24,552.9283);
   e_pt_t#bar{t}_stack_1->SetBinContent(25,515.6804);
   e_pt_t#bar{t}_stack_1->SetBinContent(26,434.8113);
   e_pt_t#bar{t}_stack_1->SetBinContent(27,328.2355);
   e_pt_t#bar{t}_stack_1->SetBinContent(28,356.6325);
   e_pt_t#bar{t}_stack_1->SetBinContent(29,316.6435);
   e_pt_t#bar{t}_stack_1->SetBinContent(30,197.4727);
   e_pt_t#bar{t}_stack_1->SetBinContent(31,1377.475);
   e_pt_t#bar{t}_stack_1->SetBinError(4,270.0894);
   e_pt_t#bar{t}_stack_1->SetBinError(5,280.7931);
   e_pt_t#bar{t}_stack_1->SetBinError(6,281.9064);
   e_pt_t#bar{t}_stack_1->SetBinError(7,275.0408);
   e_pt_t#bar{t}_stack_1->SetBinError(8,258.9468);
   e_pt_t#bar{t}_stack_1->SetBinError(9,242.9036);
   e_pt_t#bar{t}_stack_1->SetBinError(10,219.6137);
   e_pt_t#bar{t}_stack_1->SetBinError(11,201.5947);
   e_pt_t#bar{t}_stack_1->SetBinError(12,180.7251);
   e_pt_t#bar{t}_stack_1->SetBinError(13,165.2269);
   e_pt_t#bar{t}_stack_1->SetBinError(14,153.8449);
   e_pt_t#bar{t}_stack_1->SetBinError(15,142.1685);
   e_pt_t#bar{t}_stack_1->SetBinError(16,127.621);
   e_pt_t#bar{t}_stack_1->SetBinError(17,121.7169);
   e_pt_t#bar{t}_stack_1->SetBinError(18,105.7909);
   e_pt_t#bar{t}_stack_1->SetBinError(19,90.23541);
   e_pt_t#bar{t}_stack_1->SetBinError(20,90.25801);
   e_pt_t#bar{t}_stack_1->SetBinError(21,78.10827);
   e_pt_t#bar{t}_stack_1->SetBinError(22,70.85786);
   e_pt_t#bar{t}_stack_1->SetBinError(23,68.41396);
   e_pt_t#bar{t}_stack_1->SetBinError(24,55.32151);
   e_pt_t#bar{t}_stack_1->SetBinError(25,52.64786);
   e_pt_t#bar{t}_stack_1->SetBinError(26,49.52304);
   e_pt_t#bar{t}_stack_1->SetBinError(27,42.64951);
   e_pt_t#bar{t}_stack_1->SetBinError(28,44.49588);
   e_pt_t#bar{t}_stack_1->SetBinError(29,41.84237);
   e_pt_t#bar{t}_stack_1->SetBinError(30,33.12231);
   e_pt_t#bar{t}_stack_1->SetBinError(31,86.94649);
   e_pt_t#bar{t}_stack_1->SetEntries(27079);
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
   ratioframe__14->SetEntries(32767);

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
   0.8978642,
   0.964111,
   0.9773973,
   0.9295329,
   0.9431921,
   0.9185966,
   0.9289252,
   0.9371437,
   0.9490904,
   0.9148065,
   0.9077075,
   0.8822279,
   0.8764707,
   0.821274,
   0.7973051,
   0.9495662,
   0.7584233,
   0.841076,
   0.8776469,
   0.772843,
   0.9706088,
   0.8203222,
   0.862767,
   1.012357,
   0.6509299,
   0.6610695,
   1.039883};
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
   0.01869198,
   0.01907411,
   0.01939985,
   0.01903549,
   0.02056119,
   0.02136766,
   0.02396808,
   0.02617027,
   0.029606,
   0.0310765,
   0.03354702,
   0.0366268,
   0.03946171,
   0.03950728,
   0.04353055,
   0.05871741,
   0.04879347,
   0.06105934,
   0.0708885,
   0.06545567,
   0.09701862,
   0.08658934,
   0.09960732,
   0.1331088,
   0.08787191,
   0.09149267,
   0.1791275};
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
   0.01869198,
   0.01907411,
   0.01939985,
   0.01903549,
   0.02056119,
   0.02136766,
   0.02396808,
   0.02617027,
   0.029606,
   0.0310765,
   0.03354702,
   0.0366268,
   0.03946171,
   0.03950728,
   0.04353055,
   0.05871741,
   0.04879347,
   0.06105934,
   0.0708885,
   0.06545567,
   0.09701862,
   0.08658934,
   0.09960732,
   0.1331088,
   0.08787191,
   0.09149267,
   0.1791275};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3014,Graph_from_ratio_fy3014,Graph_from_ratio_felx3014,Graph_from_ratio_fehx3014,Graph_from_ratio_fely3014,Graph_from_ratio_fehy3014);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3014 = new TH1F("Graph_Graph_from_ratio3014","Data",100,0,220);
   Graph_Graph_from_ratio3014->SetMinimum(0);
   Graph_Graph_from_ratio3014->SetMaximum(1.340912);
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
