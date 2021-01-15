void bjetenls()
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
   p1->Range(2.421687,-56.60912,7.240964,415.9669);
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
   
   TH1F *frame__7 = new TH1F("frame__7","t#bar{t}",20,3,7);
   frame__7->SetMinimum(0.1);
   frame__7->SetMaximum(411.2411);
   frame__7->SetEntries(44137);
   frame__7->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__7->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__7->SetMarkerColor(ci);
   frame__7->GetXaxis()->SetTitle("log(E)");
   frame__7->GetXaxis()->SetLabelFont(42);
   frame__7->GetXaxis()->SetLabelSize(0.035);
   frame__7->GetXaxis()->SetTitleSize(0.035);
   frame__7->GetXaxis()->SetTitleFont(42);
   frame__7->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
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
   
   TH1F *mc_stack_4 = new TH1F("mc_stack_4","mc",20,3,7);
   mc_stack_4->SetMinimum(-6.350547e-09);
   mc_stack_4->SetMaximum(332.1563);
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
   
   
   TH1F *bjetenls_t#bar{t}_stack_1 = new TH1F("bjetenls_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_t#bar{t}_stack_1->SetBinContent(3,100.1717);
   bjetenls_t#bar{t}_stack_1->SetBinContent(4,227.8556);
   bjetenls_t#bar{t}_stack_1->SetBinContent(5,275.9957);
   bjetenls_t#bar{t}_stack_1->SetBinContent(6,303.2135);
   bjetenls_t#bar{t}_stack_1->SetBinContent(7,295.1391);
   bjetenls_t#bar{t}_stack_1->SetBinContent(8,262.5216);
   bjetenls_t#bar{t}_stack_1->SetBinContent(9,212.2775);
   bjetenls_t#bar{t}_stack_1->SetBinContent(10,152.7946);
   bjetenls_t#bar{t}_stack_1->SetBinContent(11,104.2055);
   bjetenls_t#bar{t}_stack_1->SetBinContent(12,62.85843);
   bjetenls_t#bar{t}_stack_1->SetBinContent(13,35.8554);
   bjetenls_t#bar{t}_stack_1->SetBinContent(14,20.18683);
   bjetenls_t#bar{t}_stack_1->SetBinContent(15,10.9379);
   bjetenls_t#bar{t}_stack_1->SetBinContent(16,4.742387);
   bjetenls_t#bar{t}_stack_1->SetBinContent(17,2.077337);
   bjetenls_t#bar{t}_stack_1->SetBinContent(18,0.8875188);
   bjetenls_t#bar{t}_stack_1->SetBinContent(19,0.2487675);
   bjetenls_t#bar{t}_stack_1->SetBinContent(20,0.09032529);
   bjetenls_t#bar{t}_stack_1->SetBinContent(21,0.01874348);
   bjetenls_t#bar{t}_stack_1->SetBinError(3,3.950617);
   bjetenls_t#bar{t}_stack_1->SetBinError(4,5.467949);
   bjetenls_t#bar{t}_stack_1->SetBinError(5,5.462229);
   bjetenls_t#bar{t}_stack_1->SetBinError(6,5.182378);
   bjetenls_t#bar{t}_stack_1->SetBinError(7,4.636679);
   bjetenls_t#bar{t}_stack_1->SetBinError(8,3.950383);
   bjetenls_t#bar{t}_stack_1->SetBinError(9,3.223929);
   bjetenls_t#bar{t}_stack_1->SetBinError(10,2.472124);
   bjetenls_t#bar{t}_stack_1->SetBinError(11,1.848715);
   bjetenls_t#bar{t}_stack_1->SetBinError(12,1.301476);
   bjetenls_t#bar{t}_stack_1->SetBinError(13,0.8875554);
   bjetenls_t#bar{t}_stack_1->SetBinError(14,0.6038463);
   bjetenls_t#bar{t}_stack_1->SetBinError(15,0.4025237);
   bjetenls_t#bar{t}_stack_1->SetBinError(16,0.2396858);
   bjetenls_t#bar{t}_stack_1->SetBinError(17,0.1444119);
   bjetenls_t#bar{t}_stack_1->SetBinError(18,0.08591709);
   bjetenls_t#bar{t}_stack_1->SetBinError(19,0.04041743);
   bjetenls_t#bar{t}_stack_1->SetBinError(20,0.0221236);
   bjetenls_t#bar{t}_stack_1->SetBinError(21,0.008503167);
   bjetenls_t#bar{t}_stack_1->SetEntries(37220);
   bjetenls_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_t#bar{t}_stack_1->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_Diboson_stack_2 = new TH1F("bjetenls_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_Diboson_stack_2->SetBinContent(7,0.2198612);
   bjetenls_Diboson_stack_2->SetBinContent(8,0.2162986);
   bjetenls_Diboson_stack_2->SetBinContent(9,0.1362677);
   bjetenls_Diboson_stack_2->SetBinContent(10,0.1178704);
   bjetenls_Diboson_stack_2->SetBinContent(11,0.1087008);
   bjetenls_Diboson_stack_2->SetBinContent(12,0.08175425);
   bjetenls_Diboson_stack_2->SetBinContent(13,0.04705652);
   bjetenls_Diboson_stack_2->SetBinContent(14,0.02061631);
   bjetenls_Diboson_stack_2->SetBinContent(15,0.02593931);
   bjetenls_Diboson_stack_2->SetBinContent(16,0.01259065);
   bjetenls_Diboson_stack_2->SetBinContent(17,0.01085466);
   bjetenls_Diboson_stack_2->SetBinContent(18,0.006534787);
   bjetenls_Diboson_stack_2->SetBinContent(19,0.001953153);
   bjetenls_Diboson_stack_2->SetBinContent(20,0.003084835);
   bjetenls_Diboson_stack_2->SetBinContent(21,0.001012414);
   bjetenls_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_Diboson_stack_2->SetBinError(7,0.03371898);
   bjetenls_Diboson_stack_2->SetBinError(8,0.03104429);
   bjetenls_Diboson_stack_2->SetBinError(9,0.02184494);
   bjetenls_Diboson_stack_2->SetBinError(10,0.01812099);
   bjetenls_Diboson_stack_2->SetBinError(11,0.01596992);
   bjetenls_Diboson_stack_2->SetBinError(12,0.0128227);
   bjetenls_Diboson_stack_2->SetBinError(13,0.008805096);
   bjetenls_Diboson_stack_2->SetBinError(14,0.005235157);
   bjetenls_Diboson_stack_2->SetBinError(15,0.005324845);
   bjetenls_Diboson_stack_2->SetBinError(16,0.003310366);
   bjetenls_Diboson_stack_2->SetBinError(17,0.002921473);
   bjetenls_Diboson_stack_2->SetBinError(18,0.001943766);
   bjetenls_Diboson_stack_2->SetBinError(19,0.0009798904);
   bjetenls_Diboson_stack_2->SetBinError(20,0.001100304);
   bjetenls_Diboson_stack_2->SetBinError(21,0.0005755965);
   bjetenls_Diboson_stack_2->SetEntries(540);
   bjetenls_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_Diboson_stack_2->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_DY_stack_3 = new TH1F("bjetenls_DY_stack_3","DY",20,3,7);
   bjetenls_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_DY_stack_3->SetEntries(24);
   bjetenls_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_DY_stack_3->SetMarkerColor(ci);
   bjetenls_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_DY_stack_3->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_DY_stack_3,"hist");
   
   TH1F *bjetenls_W_stack_4 = new TH1F("bjetenls_W_stack_4","W",20,3,7);
   bjetenls_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_W_stack_4->SetMarkerColor(ci);
   bjetenls_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_W_stack_4->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_W_stack_4,"hist");
   
   TH1F *bjetenls_SinglesPtop_stack_5 = new TH1F("bjetenls_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_SinglesPtop_stack_5->SetBinContent(5,12.13217);
   bjetenls_SinglesPtop_stack_5->SetBinContent(6,11.98973);
   bjetenls_SinglesPtop_stack_5->SetBinContent(7,12.02839);
   bjetenls_SinglesPtop_stack_5->SetBinContent(8,10.90096);
   bjetenls_SinglesPtop_stack_5->SetBinContent(9,7.778194);
   bjetenls_SinglesPtop_stack_5->SetBinContent(10,6.298899);
   bjetenls_SinglesPtop_stack_5->SetBinContent(11,4.371594);
   bjetenls_SinglesPtop_stack_5->SetBinContent(12,2.924732);
   bjetenls_SinglesPtop_stack_5->SetBinContent(13,1.708796);
   bjetenls_SinglesPtop_stack_5->SetBinContent(14,0.9852901);
   bjetenls_SinglesPtop_stack_5->SetBinContent(15,0.5935756);
   bjetenls_SinglesPtop_stack_5->SetBinContent(16,0.3001427);
   bjetenls_SinglesPtop_stack_5->SetBinContent(17,0.1482982);
   bjetenls_SinglesPtop_stack_5->SetBinContent(18,0.06343637);
   bjetenls_SinglesPtop_stack_5->SetBinContent(19,0.03435365);
   bjetenls_SinglesPtop_stack_5->SetBinContent(20,0.01041042);
   bjetenls_SinglesPtop_stack_5->SetBinContent(21,0.01080044);
   bjetenls_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_SinglesPtop_stack_5->SetBinError(5,0.5744133);
   bjetenls_SinglesPtop_stack_5->SetBinError(6,0.5150717);
   bjetenls_SinglesPtop_stack_5->SetBinError(7,0.4677782);
   bjetenls_SinglesPtop_stack_5->SetBinError(8,0.4039621);
   bjetenls_SinglesPtop_stack_5->SetBinError(9,0.3076721);
   bjetenls_SinglesPtop_stack_5->SetBinError(10,0.2517367);
   bjetenls_SinglesPtop_stack_5->SetBinError(11,0.1896687);
   bjetenls_SinglesPtop_stack_5->SetBinError(12,0.1411629);
   bjetenls_SinglesPtop_stack_5->SetBinError(13,0.09746688);
   bjetenls_SinglesPtop_stack_5->SetBinError(14,0.0660626);
   bjetenls_SinglesPtop_stack_5->SetBinError(15,0.04703315);
   bjetenls_SinglesPtop_stack_5->SetBinError(16,0.03003655);
   bjetenls_SinglesPtop_stack_5->SetBinError(17,0.01928935);
   bjetenls_SinglesPtop_stack_5->SetBinError(18,0.01114063);
   bjetenls_SinglesPtop_stack_5->SetBinError(19,0.007625936);
   bjetenls_SinglesPtop_stack_5->SetBinError(20,0.003630513);
   bjetenls_SinglesPtop_stack_5->SetBinError(21,0.003447098);
   bjetenls_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_SinglesPtop_stack_5->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_fx3007[21] = {
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   0};
   Double_t Graph_from_bjetenls_fy3007[21] = {
   0,
   0,
   92.7945,
   197.9431,
   255.2428,
   284.5028,
   281.9935,
   252.0936,
   202.7139,
   149.4754,
   101.0653,
   62.26832,
   36.53798,
   20.55606,
   10.39831,
   4.765559,
   2.074745,
   0.8329404,
   0.2820291,
   0.08633442,
   0};
   Double_t Graph_from_bjetenls_felx3007[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bjetenls_fely3007[21] = {
   0,
   0,
   9.615798,
   14.05763,
   15.97632,
   16.86721,
   16.79266,
   15.87745,
   14.23776,
   12.21258,
   10.03667,
   7.869935,
   6.016987,
   4.496794,
   3.172168,
   2.104764,
   1.320296,
   0.7249367,
   0.2810206,
   0.08633442,
   0};
   Double_t Graph_from_bjetenls_fehx3007[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bjetenls_fehy3007[21] = {
   1.841055,
   1.841055,
   10.66785,
   15.09326,
   15.97632,
   16.86721,
   16.79266,
   15.87745,
   14.23776,
   13.25358,
   11.08654,
   8.933481,
   7.099949,
   5.607373,
   4.327417,
   3.332876,
   2.66048,
   2.234301,
   1.990576,
   1.889246,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_fx3007,Graph_from_bjetenls_fy3007,Graph_from_bjetenls_felx3007,Graph_from_bjetenls_fehx3007,Graph_from_bjetenls_fely3007,Graph_from_bjetenls_fehy3007);
   grae->SetName("Graph_from_bjetenls");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls3007 = new TH1F("Graph_Graph_from_bjetenls3007","Data",100,0,7.7);
   Graph_Graph_from_bjetenls3007->SetMinimum(0);
   Graph_Graph_from_bjetenls3007->SetMaximum(331.507);
   Graph_Graph_from_bjetenls3007->SetDirectory(0);
   Graph_Graph_from_bjetenls3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls3007->SetLineColor(ci);
   Graph_Graph_from_bjetenls3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls3007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls3007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls3007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls3007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls3007->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls3007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls3007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls3007);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_W","W","f");

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
   entry=leg->AddEntry("bjetenls_Single top","Single top","f");

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
   p2->Range(2.421687,0.4485106,7.240964,1.597447);
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
   
   TH1F *ratioframe__8 = new TH1F("ratioframe__8","t#bar{t}",20,3,7);
   ratioframe__8->SetMinimum(0.46);
   ratioframe__8->SetMaximum(1.54);
   ratioframe__8->SetEntries(44137);

   ci = TColor::GetColor("#cc0000");
   ratioframe__8->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__8->SetMarkerColor(ci);
   ratioframe__8->GetXaxis()->SetTitle("log(E)");
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
   
   Double_t Graph_from_ratio_fx3008[20] = {
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9};
   Double_t Graph_from_ratio_fy3008[20] = {
   0,
   0,
   0.8797287,
   0.8337989,
   0.8830331,
   0.8993595,
   0.9147993,
   0.9199186,
   0.920624,
   0.9380811,
   0.928598,
   0.9429113,
   0.9698329,
   0.9664726,
   0.8960938,
   0.9347046,
   0.9273944,
   0.8431156,
   0.989318,
   0.8315737};
   Double_t Graph_from_ratio_felx3008[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fely3008[20] = {
   0,
   0,
   0.03704199,
   0.02146087,
   0.01858793,
   0.01638534,
   0.01527496,
   0.01469962,
   0.01488651,
   0.01608751,
   0.01745853,
   0.02060045,
   0.02524643,
   0.03046039,
   0.03474237,
   0.04942122,
   0.06651086,
   0.08632744,
   0.1573186,
   0.2014422};
   Double_t Graph_from_ratio_fehx3008[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fehy3008[20] = {
   0,
   0,
   0.03704199,
   0.02146087,
   0.01858793,
   0.01638534,
   0.01527496,
   0.01469962,
   0.01488651,
   0.01608751,
   0.01745853,
   0.02060045,
   0.02524643,
   0.03046039,
   0.03474237,
   0.04942122,
   0.06651086,
   0.08632744,
   0.1573186,
   0.2014422};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3008,Graph_from_ratio_fy3008,Graph_from_ratio_felx3008,Graph_from_ratio_fehx3008,Graph_from_ratio_fely3008,Graph_from_ratio_fehy3008);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3008 = new TH1F("Graph_Graph_from_ratio3008","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3008->SetMinimum(0);
   Graph_Graph_from_ratio3008->SetMaximum(1.2613);
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
