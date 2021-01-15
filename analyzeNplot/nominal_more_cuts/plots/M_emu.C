void M_emu()
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
   p1->Range(-72.28916,-3111.846,530.1205,22821.04);
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
   
   TH1F *frame__11 = new TH1F("frame__11","t#bar{t}",30,0,500);
   frame__11->SetMinimum(0.1);
   frame__11->SetMaximum(22561.71);
   frame__11->SetEntries(365945);
   frame__11->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__11->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__11->SetMarkerColor(ci);
   frame__11->GetXaxis()->SetTitle("electron-muon mass");
   frame__11->GetXaxis()->SetLabelFont(42);
   frame__11->GetXaxis()->SetLabelSize(0.035);
   frame__11->GetXaxis()->SetTitleSize(0.035);
   frame__11->GetXaxis()->SetTitleFont(42);
   frame__11->GetYaxis()->SetTitle("Events");
   frame__11->GetYaxis()->SetNoExponent();
   frame__11->GetYaxis()->SetLabelFont(42);
   frame__11->GetYaxis()->SetTitleSize(0.045);
   frame__11->GetYaxis()->SetTitleOffset(1.3);
   frame__11->GetYaxis()->SetTitleFont(42);
   frame__11->GetZaxis()->SetLabelFont(42);
   frame__11->GetZaxis()->SetLabelSize(0.035);
   frame__11->GetZaxis()->SetTitleSize(0.035);
   frame__11->GetZaxis()->SetTitleFont(42);
   frame__11->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_6 = new TH1F("mc_stack_6","mc",30,0,500);
   mc_stack_6->SetMinimum(-1.910926e-07);
   mc_stack_6->SetMaximum(18222.92);
   mc_stack_6->SetDirectory(0);
   mc_stack_6->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_6->SetLineColor(ci);
   mc_stack_6->GetXaxis()->SetLabelFont(42);
   mc_stack_6->GetXaxis()->SetLabelSize(0.035);
   mc_stack_6->GetXaxis()->SetTitleSize(0.035);
   mc_stack_6->GetXaxis()->SetTitleFont(42);
   mc_stack_6->GetYaxis()->SetLabelFont(42);
   mc_stack_6->GetYaxis()->SetLabelSize(0.035);
   mc_stack_6->GetYaxis()->SetTitleSize(0.035);
   mc_stack_6->GetYaxis()->SetTitleOffset(0);
   mc_stack_6->GetYaxis()->SetTitleFont(42);
   mc_stack_6->GetZaxis()->SetLabelFont(42);
   mc_stack_6->GetZaxis()->SetLabelSize(0.035);
   mc_stack_6->GetZaxis()->SetTitleSize(0.035);
   mc_stack_6->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_6);
   
   
   TH1F *M_emu_t#bar{t}_stack_1 = new TH1F("M_emu_t#bar{t}_stack_1","t#bar{t}",30,0,500);
   M_emu_t#bar{t}_stack_1->SetBinContent(1,853.8445);
   M_emu_t#bar{t}_stack_1->SetBinContent(2,6336.667);
   M_emu_t#bar{t}_stack_1->SetBinContent(3,10264.41);
   M_emu_t#bar{t}_stack_1->SetBinContent(4,14499.68);
   M_emu_t#bar{t}_stack_1->SetBinContent(5,16712.81);
   M_emu_t#bar{t}_stack_1->SetBinContent(6,16429.55);
   M_emu_t#bar{t}_stack_1->SetBinContent(7,14442.81);
   M_emu_t#bar{t}_stack_1->SetBinContent(8,12095.37);
   M_emu_t#bar{t}_stack_1->SetBinContent(9,9821.266);
   M_emu_t#bar{t}_stack_1->SetBinContent(10,7684.393);
   M_emu_t#bar{t}_stack_1->SetBinContent(11,6117.984);
   M_emu_t#bar{t}_stack_1->SetBinContent(12,4776.622);
   M_emu_t#bar{t}_stack_1->SetBinContent(13,3747.856);
   M_emu_t#bar{t}_stack_1->SetBinContent(14,2906.494);
   M_emu_t#bar{t}_stack_1->SetBinContent(15,2257.454);
   M_emu_t#bar{t}_stack_1->SetBinContent(16,1819.959);
   M_emu_t#bar{t}_stack_1->SetBinContent(17,1417.181);
   M_emu_t#bar{t}_stack_1->SetBinContent(18,1103.869);
   M_emu_t#bar{t}_stack_1->SetBinContent(19,888.4868);
   M_emu_t#bar{t}_stack_1->SetBinContent(20,721.0247);
   M_emu_t#bar{t}_stack_1->SetBinContent(21,589.2928);
   M_emu_t#bar{t}_stack_1->SetBinContent(22,470.8398);
   M_emu_t#bar{t}_stack_1->SetBinContent(23,369.1292);
   M_emu_t#bar{t}_stack_1->SetBinContent(24,287.739);
   M_emu_t#bar{t}_stack_1->SetBinContent(25,243.5398);
   M_emu_t#bar{t}_stack_1->SetBinContent(26,202.3224);
   M_emu_t#bar{t}_stack_1->SetBinContent(27,175.1664);
   M_emu_t#bar{t}_stack_1->SetBinContent(28,141.6056);
   M_emu_t#bar{t}_stack_1->SetBinContent(29,111.756);
   M_emu_t#bar{t}_stack_1->SetBinContent(30,89.76932);
   M_emu_t#bar{t}_stack_1->SetBinContent(31,522.3356);
   M_emu_t#bar{t}_stack_1->SetBinError(1,18.61764);
   M_emu_t#bar{t}_stack_1->SetBinError(2,50.76678);
   M_emu_t#bar{t}_stack_1->SetBinError(3,64.66911);
   M_emu_t#bar{t}_stack_1->SetBinError(4,76.82017);
   M_emu_t#bar{t}_stack_1->SetBinError(5,82.57128);
   M_emu_t#bar{t}_stack_1->SetBinError(6,81.95758);
   M_emu_t#bar{t}_stack_1->SetBinError(7,76.9574);
   M_emu_t#bar{t}_stack_1->SetBinError(8,70.49771);
   M_emu_t#bar{t}_stack_1->SetBinError(9,63.59734);
   M_emu_t#bar{t}_stack_1->SetBinError(10,56.3587);
   M_emu_t#bar{t}_stack_1->SetBinError(11,50.31243);
   M_emu_t#bar{t}_stack_1->SetBinError(12,44.54993);
   M_emu_t#bar{t}_stack_1->SetBinError(13,39.50754);
   M_emu_t#bar{t}_stack_1->SetBinError(14,34.82392);
   M_emu_t#bar{t}_stack_1->SetBinError(15,30.69656);
   M_emu_t#bar{t}_stack_1->SetBinError(16,27.60063);
   M_emu_t#bar{t}_stack_1->SetBinError(17,24.38597);
   M_emu_t#bar{t}_stack_1->SetBinError(18,21.53181);
   M_emu_t#bar{t}_stack_1->SetBinError(19,19.32705);
   M_emu_t#bar{t}_stack_1->SetBinError(20,17.39213);
   M_emu_t#bar{t}_stack_1->SetBinError(21,15.73948);
   M_emu_t#bar{t}_stack_1->SetBinError(22,14.05666);
   M_emu_t#bar{t}_stack_1->SetBinError(23,12.46529);
   M_emu_t#bar{t}_stack_1->SetBinError(24,11.06447);
   M_emu_t#bar{t}_stack_1->SetBinError(25,10.15709);
   M_emu_t#bar{t}_stack_1->SetBinError(26,9.247073);
   M_emu_t#bar{t}_stack_1->SetBinError(27,8.620709);
   M_emu_t#bar{t}_stack_1->SetBinError(28,7.680147);
   M_emu_t#bar{t}_stack_1->SetBinError(29,6.854668);
   M_emu_t#bar{t}_stack_1->SetBinError(30,6.197707);
   M_emu_t#bar{t}_stack_1->SetBinError(31,14.88907);
   M_emu_t#bar{t}_stack_1->SetEntries(360257);
   M_emu_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   M_emu_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   M_emu_t#bar{t}_stack_1->SetMarkerColor(ci);
   M_emu_t#bar{t}_stack_1->GetXaxis()->SetTitle("electron-muon mass");
   M_emu_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   M_emu_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   M_emu_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   M_emu_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   M_emu_t#bar{t}_stack_1->GetYaxis()->SetTitle("Events");
   M_emu_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   M_emu_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   M_emu_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   M_emu_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   M_emu_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   M_emu_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   M_emu_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   M_emu_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   M_emu_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(M_emu_t#bar{t}_stack_1,"hist");
   
   TH1F *M_emu_Diboson_stack_2 = new TH1F("M_emu_Diboson_stack_2","Diboson",30,0,500);
   M_emu_Diboson_stack_2->SetBinContent(1,0.3844409);
   M_emu_Diboson_stack_2->SetBinContent(2,7.978641);
   M_emu_Diboson_stack_2->SetBinContent(3,13.37338);
   M_emu_Diboson_stack_2->SetBinContent(4,14.47124);
   M_emu_Diboson_stack_2->SetBinContent(5,22.87954);
   M_emu_Diboson_stack_2->SetBinContent(6,16.65546);
   M_emu_Diboson_stack_2->SetBinContent(7,15.15068);
   M_emu_Diboson_stack_2->SetBinContent(8,15.50368);
   M_emu_Diboson_stack_2->SetBinContent(9,10.41778);
   M_emu_Diboson_stack_2->SetBinContent(10,8.281981);
   M_emu_Diboson_stack_2->SetBinContent(11,8.883163);
   M_emu_Diboson_stack_2->SetBinContent(12,7.614182);
   M_emu_Diboson_stack_2->SetBinContent(13,6.280624);
   M_emu_Diboson_stack_2->SetBinContent(14,2.997824);
   M_emu_Diboson_stack_2->SetBinContent(15,4.421713);
   M_emu_Diboson_stack_2->SetBinContent(16,2.533633);
   M_emu_Diboson_stack_2->SetBinContent(17,2.412879);
   M_emu_Diboson_stack_2->SetBinContent(18,4.474779);
   M_emu_Diboson_stack_2->SetBinContent(19,2.984141);
   M_emu_Diboson_stack_2->SetBinContent(20,0.4112243);
   M_emu_Diboson_stack_2->SetBinContent(21,1.068566);
   M_emu_Diboson_stack_2->SetBinContent(22,0.8554354);
   M_emu_Diboson_stack_2->SetBinContent(23,2.408515);
   M_emu_Diboson_stack_2->SetBinContent(24,1.687019);
   M_emu_Diboson_stack_2->SetBinContent(25,1.891849);
   M_emu_Diboson_stack_2->SetBinContent(26,0.4967131);
   M_emu_Diboson_stack_2->SetBinContent(27,0.4629532);
   M_emu_Diboson_stack_2->SetBinContent(28,0.8296211);
   M_emu_Diboson_stack_2->SetBinContent(29,0.3245308);
   M_emu_Diboson_stack_2->SetBinContent(31,4.014993);
   M_emu_Diboson_stack_2->SetBinError(1,0.3844409);
   M_emu_Diboson_stack_2->SetBinError(2,1.789028);
   M_emu_Diboson_stack_2->SetBinError(3,2.301251);
   M_emu_Diboson_stack_2->SetBinError(4,2.310281);
   M_emu_Diboson_stack_2->SetBinError(5,2.961816);
   M_emu_Diboson_stack_2->SetBinError(6,2.536656);
   M_emu_Diboson_stack_2->SetBinError(7,2.384105);
   M_emu_Diboson_stack_2->SetBinError(8,2.439136);
   M_emu_Diboson_stack_2->SetBinError(9,2.019742);
   M_emu_Diboson_stack_2->SetBinError(10,1.817874);
   M_emu_Diboson_stack_2->SetBinError(11,1.870095);
   M_emu_Diboson_stack_2->SetBinError(12,1.723229);
   M_emu_Diboson_stack_2->SetBinError(13,1.595667);
   M_emu_Diboson_stack_2->SetBinError(14,1.062538);
   M_emu_Diboson_stack_2->SetBinError(15,1.343016);
   M_emu_Diboson_stack_2->SetBinError(16,0.9363505);
   M_emu_Diboson_stack_2->SetBinError(17,0.9955084);
   M_emu_Diboson_stack_2->SetBinError(18,1.363323);
   M_emu_Diboson_stack_2->SetBinError(19,1.093171);
   M_emu_Diboson_stack_2->SetBinError(20,0.4112243);
   M_emu_Diboson_stack_2->SetBinError(21,0.6211268);
   M_emu_Diboson_stack_2->SetBinError(22,0.6064009);
   M_emu_Diboson_stack_2->SetBinError(23,0.9909419);
   M_emu_Diboson_stack_2->SetBinError(24,0.8449982);
   M_emu_Diboson_stack_2->SetBinError(25,0.8499249);
   M_emu_Diboson_stack_2->SetBinError(26,0.4039997);
   M_emu_Diboson_stack_2->SetBinError(27,0.4629532);
   M_emu_Diboson_stack_2->SetBinError(28,0.5876215);
   M_emu_Diboson_stack_2->SetBinError(29,0.3245308);
   M_emu_Diboson_stack_2->SetBinError(31,1.334597);
   M_emu_Diboson_stack_2->SetEntries(511);
   M_emu_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   M_emu_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   M_emu_Diboson_stack_2->SetMarkerColor(ci);
   M_emu_Diboson_stack_2->GetXaxis()->SetTitle("electron-muon mass");
   M_emu_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   M_emu_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   M_emu_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   M_emu_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   M_emu_Diboson_stack_2->GetYaxis()->SetTitle("Events");
   M_emu_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   M_emu_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   M_emu_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   M_emu_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   M_emu_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   M_emu_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   M_emu_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   M_emu_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   M_emu_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(M_emu_Diboson_stack_2,"hist");
   
   TH1F *M_emu_DY_stack_3 = new TH1F("M_emu_DY_stack_3","DY",30,0,500);
   M_emu_DY_stack_3->SetBinContent(2,16.53879);
   M_emu_DY_stack_3->SetBinContent(3,125.1351);
   M_emu_DY_stack_3->SetBinContent(4,162.9585);
   M_emu_DY_stack_3->SetBinContent(5,34.2979);
   M_emu_DY_stack_3->SetBinContent(6,0.3771112);
   M_emu_DY_stack_3->SetBinError(2,16.53879);
   M_emu_DY_stack_3->SetBinError(3,47.42047);
   M_emu_DY_stack_3->SetBinError(4,52.30811);
   M_emu_DY_stack_3->SetBinError(5,24.26522);
   M_emu_DY_stack_3->SetBinError(6,0.3771112);
   M_emu_DY_stack_3->SetEntries(21);
   M_emu_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   M_emu_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   M_emu_DY_stack_3->SetMarkerColor(ci);
   M_emu_DY_stack_3->GetXaxis()->SetTitle("electron-muon mass");
   M_emu_DY_stack_3->GetXaxis()->SetLabelFont(42);
   M_emu_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   M_emu_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   M_emu_DY_stack_3->GetXaxis()->SetTitleFont(42);
   M_emu_DY_stack_3->GetYaxis()->SetTitle("Events");
   M_emu_DY_stack_3->GetYaxis()->SetLabelFont(42);
   M_emu_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   M_emu_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   M_emu_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   M_emu_DY_stack_3->GetYaxis()->SetTitleFont(42);
   M_emu_DY_stack_3->GetZaxis()->SetLabelFont(42);
   M_emu_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   M_emu_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   M_emu_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(M_emu_DY_stack_3,"hist");
   
   TH1F *M_emu_W_stack_4 = new TH1F("M_emu_W_stack_4","W",30,0,500);
   M_emu_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   M_emu_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   M_emu_W_stack_4->SetMarkerColor(ci);
   M_emu_W_stack_4->GetXaxis()->SetTitle("electron-muon mass");
   M_emu_W_stack_4->GetXaxis()->SetLabelFont(42);
   M_emu_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   M_emu_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   M_emu_W_stack_4->GetXaxis()->SetTitleFont(42);
   M_emu_W_stack_4->GetYaxis()->SetTitle("Events");
   M_emu_W_stack_4->GetYaxis()->SetLabelFont(42);
   M_emu_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   M_emu_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   M_emu_W_stack_4->GetYaxis()->SetTitleOffset(0);
   M_emu_W_stack_4->GetYaxis()->SetTitleFont(42);
   M_emu_W_stack_4->GetZaxis()->SetLabelFont(42);
   M_emu_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   M_emu_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   M_emu_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(M_emu_W_stack_4,"hist");
   
   TH1F *M_emu_SinglesPtop_stack_5 = new TH1F("M_emu_SinglesPtop_stack_5","Single top",30,0,500);
   M_emu_SinglesPtop_stack_5->SetBinContent(1,22.49448);
   M_emu_SinglesPtop_stack_5->SetBinContent(2,256.4094);
   M_emu_SinglesPtop_stack_5->SetBinContent(3,444.2684);
   M_emu_SinglesPtop_stack_5->SetBinContent(4,629.8744);
   M_emu_SinglesPtop_stack_5->SetBinContent(5,585.1713);
   M_emu_SinglesPtop_stack_5->SetBinContent(6,710.6324);
   M_emu_SinglesPtop_stack_5->SetBinContent(7,613.4557);
   M_emu_SinglesPtop_stack_5->SetBinContent(8,540.3979);
   M_emu_SinglesPtop_stack_5->SetBinContent(9,483.6778);
   M_emu_SinglesPtop_stack_5->SetBinContent(10,405.0907);
   M_emu_SinglesPtop_stack_5->SetBinContent(11,326.632);
   M_emu_SinglesPtop_stack_5->SetBinContent(12,253.6623);
   M_emu_SinglesPtop_stack_5->SetBinContent(13,206.5947);
   M_emu_SinglesPtop_stack_5->SetBinContent(14,192.7177);
   M_emu_SinglesPtop_stack_5->SetBinContent(15,142.1664);
   M_emu_SinglesPtop_stack_5->SetBinContent(16,103.2133);
   M_emu_SinglesPtop_stack_5->SetBinContent(17,98.35006);
   M_emu_SinglesPtop_stack_5->SetBinContent(18,65.81099);
   M_emu_SinglesPtop_stack_5->SetBinContent(19,39.66802);
   M_emu_SinglesPtop_stack_5->SetBinContent(20,62.78066);
   M_emu_SinglesPtop_stack_5->SetBinContent(21,36.76458);
   M_emu_SinglesPtop_stack_5->SetBinContent(22,43.07321);
   M_emu_SinglesPtop_stack_5->SetBinContent(23,26.21633);
   M_emu_SinglesPtop_stack_5->SetBinContent(24,25.87261);
   M_emu_SinglesPtop_stack_5->SetBinContent(25,18.16547);
   M_emu_SinglesPtop_stack_5->SetBinContent(26,15.36928);
   M_emu_SinglesPtop_stack_5->SetBinContent(27,14.5615);
   M_emu_SinglesPtop_stack_5->SetBinContent(28,7.508682);
   M_emu_SinglesPtop_stack_5->SetBinContent(29,9.614821);
   M_emu_SinglesPtop_stack_5->SetBinContent(30,4.09862);
   M_emu_SinglesPtop_stack_5->SetBinContent(31,54.05371);
   M_emu_SinglesPtop_stack_5->SetBinError(1,5.458296);
   M_emu_SinglesPtop_stack_5->SetBinError(2,18.45327);
   M_emu_SinglesPtop_stack_5->SetBinError(3,24.30327);
   M_emu_SinglesPtop_stack_5->SetBinError(4,28.78127);
   M_emu_SinglesPtop_stack_5->SetBinError(5,27.8692);
   M_emu_SinglesPtop_stack_5->SetBinError(6,30.70157);
   M_emu_SinglesPtop_stack_5->SetBinError(7,28.58876);
   M_emu_SinglesPtop_stack_5->SetBinError(8,26.87557);
   M_emu_SinglesPtop_stack_5->SetBinError(9,25.49891);
   M_emu_SinglesPtop_stack_5->SetBinError(10,23.295);
   M_emu_SinglesPtop_stack_5->SetBinError(11,21.07788);
   M_emu_SinglesPtop_stack_5->SetBinError(12,18.54661);
   M_emu_SinglesPtop_stack_5->SetBinError(13,16.7068);
   M_emu_SinglesPtop_stack_5->SetBinError(14,16.16121);
   M_emu_SinglesPtop_stack_5->SetBinError(15,13.948);
   M_emu_SinglesPtop_stack_5->SetBinError(16,11.84539);
   M_emu_SinglesPtop_stack_5->SetBinError(17,11.54642);
   M_emu_SinglesPtop_stack_5->SetBinError(18,9.529621);
   M_emu_SinglesPtop_stack_5->SetBinError(19,7.323812);
   M_emu_SinglesPtop_stack_5->SetBinError(20,9.404245);
   M_emu_SinglesPtop_stack_5->SetBinError(21,7.093713);
   M_emu_SinglesPtop_stack_5->SetBinError(22,7.533075);
   M_emu_SinglesPtop_stack_5->SetBinError(23,6.047948);
   M_emu_SinglesPtop_stack_5->SetBinError(24,5.895048);
   M_emu_SinglesPtop_stack_5->SetBinError(25,4.854728);
   M_emu_SinglesPtop_stack_5->SetBinError(26,4.527661);
   M_emu_SinglesPtop_stack_5->SetBinError(27,4.453584);
   M_emu_SinglesPtop_stack_5->SetBinError(28,3.10165);
   M_emu_SinglesPtop_stack_5->SetBinError(29,3.666903);
   M_emu_SinglesPtop_stack_5->SetBinError(30,2.367555);
   M_emu_SinglesPtop_stack_5->SetBinError(31,8.481218);
   M_emu_SinglesPtop_stack_5->SetEntries(5156);
   M_emu_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   M_emu_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   M_emu_SinglesPtop_stack_5->SetMarkerColor(ci);
   M_emu_SinglesPtop_stack_5->GetXaxis()->SetTitle("electron-muon mass");
   M_emu_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   M_emu_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   M_emu_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   M_emu_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   M_emu_SinglesPtop_stack_5->GetYaxis()->SetTitle("Events");
   M_emu_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   M_emu_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   M_emu_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   M_emu_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   M_emu_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   M_emu_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   M_emu_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   M_emu_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   M_emu_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(M_emu_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_M_emu_fx3011[31] = {
   8.333333,
   25,
   41.66667,
   58.33333,
   75,
   91.66667,
   108.3333,
   125,
   141.6667,
   158.3333,
   175,
   191.6667,
   208.3333,
   225,
   241.6667,
   258.3333,
   275,
   291.6667,
   308.3333,
   325,
   341.6667,
   358.3333,
   375,
   391.6667,
   408.3333,
   425,
   441.6667,
   458.3333,
   475,
   491.6667,
   0};
   Double_t Graph_from_M_emu_fy3011[31] = {
   837,
   6419,
   10218,
   14174,
   16279,
   15535,
   13579,
   11453,
   9076,
   7207,
   5675,
   4436,
   3342,
   2652,
   2092,
   1633,
   1247,
   973,
   808,
   618,
   492,
   438,
   343,
   283,
   217,
   172,
   158,
   115,
   108,
   97,
   0};
   Double_t Graph_from_M_emu_felx3011[31] = {
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   0};
   Double_t Graph_from_M_emu_fely3011[31] = {
   28.93095,
   80.11866,
   101.0841,
   119.0546,
   127.5892,
   124.6395,
   116.529,
   107.0187,
   95.26804,
   84.89405,
   75.3326,
   66.6033,
   57.81003,
   51.49757,
   45.73839,
   40.41039,
   35.31289,
   31.19295,
   28.42534,
   24.85961,
   22.18107,
   20.92845,
   18.52026,
   16.8226,
   14.73092,
   13.10239,
   12.55675,
   10.70841,
   10.37641,
   9.832053,
   0};
   Double_t Graph_from_M_emu_fehx3011[31] = {
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   0};
   Double_t Graph_from_M_emu_fehy3011[31] = {
   28.93095,
   80.11866,
   101.0841,
   119.0546,
   127.5892,
   124.6395,
   116.529,
   107.0187,
   95.26804,
   84.89405,
   75.3326,
   66.6033,
   57.81003,
   51.49757,
   45.73839,
   40.41039,
   35.31289,
   31.19295,
   28.42534,
   24.85961,
   22.18107,
   20.92845,
   18.52026,
   16.8226,
   14.73092,
   14.14062,
   13.59664,
   11.75516,
   11.42465,
   10.88296,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_M_emu_fx3011,Graph_from_M_emu_fy3011,Graph_from_M_emu_felx3011,Graph_from_M_emu_fehx3011,Graph_from_M_emu_fely3011,Graph_from_M_emu_fehy3011);
   grae->SetName("Graph_from_M_emu");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_M_emu3011 = new TH1F("Graph_Graph_from_M_emu3011","Data",100,0,550);
   Graph_Graph_from_M_emu3011->SetMinimum(0);
   Graph_Graph_from_M_emu3011->SetMaximum(18047.25);
   Graph_Graph_from_M_emu3011->SetDirectory(0);
   Graph_Graph_from_M_emu3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_M_emu3011->SetLineColor(ci);
   Graph_Graph_from_M_emu3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_M_emu3011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_M_emu3011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_M_emu3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_M_emu3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_M_emu3011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_M_emu3011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_M_emu3011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_M_emu3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_M_emu3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_M_emu3011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_M_emu3011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_M_emu3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_M_emu3011);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_M_emu","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("M_emu_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("M_emu_Diboson","Diboson","f");

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
   entry=leg->AddEntry("M_emu_DY","DY","f");

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
   entry=leg->AddEntry("M_emu_W","W","f");

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
   entry=leg->AddEntry("M_emu_Single top","Single top","f");

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
   p2->Range(-72.28916,0.4485106,530.1205,1.597447);
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
   
   TH1F *ratioframe__12 = new TH1F("ratioframe__12","t#bar{t}",30,0,500);
   ratioframe__12->SetMinimum(0.46);
   ratioframe__12->SetMaximum(1.54);
   ratioframe__12->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__12->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__12->SetMarkerColor(ci);
   ratioframe__12->GetXaxis()->SetTitle("electron-muon mass");
   ratioframe__12->GetXaxis()->SetLabelFont(42);
   ratioframe__12->GetXaxis()->SetLabelSize(0);
   ratioframe__12->GetXaxis()->SetTitleSize(0);
   ratioframe__12->GetXaxis()->SetTitleOffset(0);
   ratioframe__12->GetXaxis()->SetTitleFont(42);
   ratioframe__12->GetYaxis()->SetTitle("Data/MC");
   ratioframe__12->GetYaxis()->SetNoExponent();
   ratioframe__12->GetYaxis()->SetNdivisions(5);
   ratioframe__12->GetYaxis()->SetLabelFont(42);
   ratioframe__12->GetYaxis()->SetLabelSize(0.18);
   ratioframe__12->GetYaxis()->SetTitleSize(0.2);
   ratioframe__12->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__12->GetYaxis()->SetTitleFont(42);
   ratioframe__12->GetZaxis()->SetLabelFont(42);
   ratioframe__12->GetZaxis()->SetLabelSize(0.035);
   ratioframe__12->GetZaxis()->SetTitleSize(0.035);
   ratioframe__12->GetZaxis()->SetTitleFont(42);
   ratioframe__12->Draw("");
   
   Double_t Graph_from_ratio_fx3012[30] = {
   8.333333,
   25,
   41.66667,
   58.33333,
   75,
   91.66667,
   108.3333,
   125,
   141.6667,
   158.3333,
   175,
   191.6667,
   208.3333,
   225,
   241.6667,
   258.3333,
   275,
   291.6667,
   308.3333,
   325,
   341.6667,
   358.3333,
   375,
   391.6667,
   408.3333,
   425,
   441.6667,
   458.3333,
   475,
   491.6667};
   Double_t Graph_from_ratio_fy3012[30] = {
   0.9546909,
   0.96999,
   0.9419953,
   0.9259826,
   0.9379918,
   0.9054499,
   0.9009768,
   0.9052845,
   0.8798528,
   0.8899986,
   0.8793679,
   0.8805259,
   0.8437835,
   0.8548747,
   0.8702013,
   0.8480005,
   0.821506,
   0.8286812,
   0.8677545,
   0.7880477,
   0.7845314,
   0.850868,
   0.8623421,
   0.8975617,
   0.823226,
   0.7883097,
   0.8307444,
   0.7669536,
   0.8874619,
   1.033367};
   Double_t Graph_from_ratio_felx3012[30] = {
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333};
   Double_t Graph_from_ratio_fely3012[30] = {
   0.0391847,
   0.01467009,
   0.01182519,
   0.009754705,
   0.008830459,
   0.008609563,
   0.009158969,
   0.01003661,
   0.01093075,
   0.01244467,
   0.01384112,
   0.01568464,
   0.0172238,
   0.01968707,
   0.02260893,
   0.02480848,
   0.02747202,
   0.03135063,
   0.0361104,
   0.03741405,
   0.04144933,
   0.04846441,
   0.05545204,
   0.06423537,
   0.06607715,
   0.07070287,
   0.07853883,
   0.08317964,
   0.1025277,
   0.1278406};
   Double_t Graph_from_ratio_fehx3012[30] = {
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333,
   8.333333};
   Double_t Graph_from_ratio_fehy3012[30] = {
   0.0391847,
   0.01467009,
   0.01182519,
   0.009754705,
   0.008830459,
   0.008609563,
   0.009158969,
   0.01003661,
   0.01093075,
   0.01244467,
   0.01384112,
   0.01568464,
   0.0172238,
   0.01968707,
   0.02260893,
   0.02480848,
   0.02747202,
   0.03135063,
   0.0361104,
   0.03741405,
   0.04144933,
   0.04846441,
   0.05545204,
   0.06423537,
   0.06607715,
   0.07070287,
   0.07853883,
   0.08317964,
   0.1025277,
   0.1278406};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3012,Graph_from_ratio_fy3012,Graph_from_ratio_felx3012,Graph_from_ratio_fehx3012,Graph_from_ratio_fely3012,Graph_from_ratio_fehy3012);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3012 = new TH1F("Graph_Graph_from_ratio3012","Data",100,0,550);
   Graph_Graph_from_ratio3012->SetMinimum(0.6360307);
   Graph_Graph_from_ratio3012->SetMaximum(1.208951);
   Graph_Graph_from_ratio3012->SetDirectory(0);
   Graph_Graph_from_ratio3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3012->SetLineColor(ci);
   Graph_Graph_from_ratio3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3012);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
