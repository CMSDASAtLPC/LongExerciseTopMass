void bjeten()
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
   p1->Range(-72.28916,-4651.086,530.1205,34108.8);
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
   
   TH1F *frame__15 = new TH1F("frame__15","t#bar{t}",30,0,500);
   frame__15->SetMinimum(0.1);
   frame__15->SetMaximum(33721.2);
   frame__15->SetEntries(504712);
   frame__15->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__15->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__15->SetMarkerColor(ci);
   frame__15->GetXaxis()->SetTitle("Energy [GeV]");
   frame__15->GetXaxis()->SetLabelFont(42);
   frame__15->GetXaxis()->SetLabelSize(0.035);
   frame__15->GetXaxis()->SetTitleSize(0.035);
   frame__15->GetXaxis()->SetTitleFont(42);
   frame__15->GetYaxis()->SetTitle(" Jets");
   frame__15->GetYaxis()->SetNoExponent();
   frame__15->GetYaxis()->SetLabelFont(42);
   frame__15->GetYaxis()->SetTitleSize(0.045);
   frame__15->GetYaxis()->SetTitleOffset(1.3);
   frame__15->GetYaxis()->SetTitleFont(42);
   frame__15->GetZaxis()->SetLabelFont(42);
   frame__15->GetZaxis()->SetLabelSize(0.035);
   frame__15->GetZaxis()->SetTitleSize(0.035);
   frame__15->GetZaxis()->SetTitleFont(42);
   frame__15->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_8 = new TH1F("mc_stack_8","mc",30,0,500);
   mc_stack_8->SetMinimum(-9.345868e-07);
   mc_stack_8->SetMaximum(27236.35);
   mc_stack_8->SetDirectory(0);
   mc_stack_8->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_8->SetLineColor(ci);
   mc_stack_8->GetXaxis()->SetLabelFont(42);
   mc_stack_8->GetXaxis()->SetLabelSize(0.035);
   mc_stack_8->GetXaxis()->SetTitleSize(0.035);
   mc_stack_8->GetXaxis()->SetTitleFont(42);
   mc_stack_8->GetYaxis()->SetLabelFont(42);
   mc_stack_8->GetYaxis()->SetLabelSize(0.035);
   mc_stack_8->GetYaxis()->SetTitleSize(0.035);
   mc_stack_8->GetYaxis()->SetTitleOffset(0);
   mc_stack_8->GetYaxis()->SetTitleFont(42);
   mc_stack_8->GetZaxis()->SetLabelFont(42);
   mc_stack_8->GetZaxis()->SetLabelSize(0.035);
   mc_stack_8->GetZaxis()->SetTitleSize(0.035);
   mc_stack_8->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_8);
   
   
   TH1F *bjeten_t#bar{t}_stack_1 = new TH1F("bjeten_t#bar{t}_stack_1","t#bar{t}",30,0,500);
   bjeten_t#bar{t}_stack_1->SetBinContent(2,1032.435);
   bjeten_t#bar{t}_stack_1->SetBinContent(3,18433.18);
   bjeten_t#bar{t}_stack_1->SetBinContent(4,24837.06);
   bjeten_t#bar{t}_stack_1->SetBinContent(5,24559.82);
   bjeten_t#bar{t}_stack_1->SetBinContent(6,21659.87);
   bjeten_t#bar{t}_stack_1->SetBinContent(7,18182.72);
   bjeten_t#bar{t}_stack_1->SetBinContent(8,14819.37);
   bjeten_t#bar{t}_stack_1->SetBinContent(9,12092.1);
   bjeten_t#bar{t}_stack_1->SetBinContent(10,9766.527);
   bjeten_t#bar{t}_stack_1->SetBinContent(11,7869.832);
   bjeten_t#bar{t}_stack_1->SetBinContent(12,6360.376);
   bjeten_t#bar{t}_stack_1->SetBinContent(13,5099.021);
   bjeten_t#bar{t}_stack_1->SetBinContent(14,4183.602);
   bjeten_t#bar{t}_stack_1->SetBinContent(15,3454.924);
   bjeten_t#bar{t}_stack_1->SetBinContent(16,2792.175);
   bjeten_t#bar{t}_stack_1->SetBinContent(17,2342.031);
   bjeten_t#bar{t}_stack_1->SetBinContent(18,1918.807);
   bjeten_t#bar{t}_stack_1->SetBinContent(19,1631.03);
   bjeten_t#bar{t}_stack_1->SetBinContent(20,1426.533);
   bjeten_t#bar{t}_stack_1->SetBinContent(21,1190.582);
   bjeten_t#bar{t}_stack_1->SetBinContent(22,979.8053);
   bjeten_t#bar{t}_stack_1->SetBinContent(23,849.269);
   bjeten_t#bar{t}_stack_1->SetBinContent(24,737.2372);
   bjeten_t#bar{t}_stack_1->SetBinContent(25,608.2203);
   bjeten_t#bar{t}_stack_1->SetBinContent(26,523.3589);
   bjeten_t#bar{t}_stack_1->SetBinContent(27,453.6369);
   bjeten_t#bar{t}_stack_1->SetBinContent(28,384.0801);
   bjeten_t#bar{t}_stack_1->SetBinContent(29,334.009);
   bjeten_t#bar{t}_stack_1->SetBinContent(30,279.3174);
   bjeten_t#bar{t}_stack_1->SetBinContent(31,2100.959);
   bjeten_t#bar{t}_stack_1->SetBinError(2,20.62021);
   bjeten_t#bar{t}_stack_1->SetBinError(3,87.02981);
   bjeten_t#bar{t}_stack_1->SetBinError(4,100.9917);
   bjeten_t#bar{t}_stack_1->SetBinError(5,100.3671);
   bjeten_t#bar{t}_stack_1->SetBinError(6,94.29925);
   bjeten_t#bar{t}_stack_1->SetBinError(7,86.4006);
   bjeten_t#bar{t}_stack_1->SetBinError(8,78.01022);
   bjeten_t#bar{t}_stack_1->SetBinError(9,70.52324);
   bjeten_t#bar{t}_stack_1->SetBinError(10,63.33681);
   bjeten_t#bar{t}_stack_1->SetBinError(11,56.8663);
   bjeten_t#bar{t}_stack_1->SetBinError(12,51.14248);
   bjeten_t#bar{t}_stack_1->SetBinError(13,45.79924);
   bjeten_t#bar{t}_stack_1->SetBinError(14,41.43662);
   bjeten_t#bar{t}_stack_1->SetBinError(15,37.66365);
   bjeten_t#bar{t}_stack_1->SetBinError(16,33.86586);
   bjeten_t#bar{t}_stack_1->SetBinError(17,31.02592);
   bjeten_t#bar{t}_stack_1->SetBinError(18,28.09811);
   bjeten_t#bar{t}_stack_1->SetBinError(19,25.85459);
   bjeten_t#bar{t}_stack_1->SetBinError(20,24.22761);
   bjeten_t#bar{t}_stack_1->SetBinError(21,22.13603);
   bjeten_t#bar{t}_stack_1->SetBinError(22,20.07735);
   bjeten_t#bar{t}_stack_1->SetBinError(23,18.64852);
   bjeten_t#bar{t}_stack_1->SetBinError(24,17.39786);
   bjeten_t#bar{t}_stack_1->SetBinError(25,15.80023);
   bjeten_t#bar{t}_stack_1->SetBinError(26,14.68083);
   bjeten_t#bar{t}_stack_1->SetBinError(27,13.63076);
   bjeten_t#bar{t}_stack_1->SetBinError(28,12.60399);
   bjeten_t#bar{t}_stack_1->SetBinError(29,11.74353);
   bjeten_t#bar{t}_stack_1->SetBinError(30,10.68742);
   bjeten_t#bar{t}_stack_1->SetBinError(31,29.42509);
   bjeten_t#bar{t}_stack_1->SetEntries(497795);
   bjeten_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjeten_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjeten_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjeten_t#bar{t}_stack_1->GetXaxis()->SetTitle("Energy [GeV]");
   bjeten_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjeten_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjeten_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjeten_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Jets");
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjeten_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjeten_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjeten_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjeten_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjeten_t#bar{t}_stack_1,"hist");
   
   TH1F *bjeten_Diboson_stack_2 = new TH1F("bjeten_Diboson_stack_2","Diboson",30,0,500);
   bjeten_Diboson_stack_2->SetBinContent(2,2.633056);
   bjeten_Diboson_stack_2->SetBinContent(3,19.55619);
   bjeten_Diboson_stack_2->SetBinContent(4,21.39611);
   bjeten_Diboson_stack_2->SetBinContent(5,19.30038);
   bjeten_Diboson_stack_2->SetBinContent(6,16.25701);
   bjeten_Diboson_stack_2->SetBinContent(7,12.10583);
   bjeten_Diboson_stack_2->SetBinContent(8,9.098787);
   bjeten_Diboson_stack_2->SetBinContent(9,10.39805);
   bjeten_Diboson_stack_2->SetBinContent(10,9.593412);
   bjeten_Diboson_stack_2->SetBinContent(11,8.185367);
   bjeten_Diboson_stack_2->SetBinContent(12,7.448448);
   bjeten_Diboson_stack_2->SetBinContent(13,6.767564);
   bjeten_Diboson_stack_2->SetBinContent(14,5.466439);
   bjeten_Diboson_stack_2->SetBinContent(15,5.17375);
   bjeten_Diboson_stack_2->SetBinContent(16,1.450455);
   bjeten_Diboson_stack_2->SetBinContent(17,2.64542);
   bjeten_Diboson_stack_2->SetBinContent(19,1.995164);
   bjeten_Diboson_stack_2->SetBinContent(20,2.706353);
   bjeten_Diboson_stack_2->SetBinContent(21,2.167306);
   bjeten_Diboson_stack_2->SetBinContent(22,1.277491);
   bjeten_Diboson_stack_2->SetBinContent(23,2.534679);
   bjeten_Diboson_stack_2->SetBinContent(24,2.439865);
   bjeten_Diboson_stack_2->SetBinContent(25,1.413709);
   bjeten_Diboson_stack_2->SetBinContent(26,0.9476655);
   bjeten_Diboson_stack_2->SetBinContent(27,1.17082);
   bjeten_Diboson_stack_2->SetBinContent(28,0.8101491);
   bjeten_Diboson_stack_2->SetBinContent(29,0.9266267);
   bjeten_Diboson_stack_2->SetBinContent(30,1.949723);
   bjeten_Diboson_stack_2->SetBinContent(31,14.84522);
   bjeten_Diboson_stack_2->SetBinError(2,0.9821961);
   bjeten_Diboson_stack_2->SetBinError(3,2.756925);
   bjeten_Diboson_stack_2->SetBinError(4,2.880021);
   bjeten_Diboson_stack_2->SetBinError(5,2.739273);
   bjeten_Diboson_stack_2->SetBinError(6,2.516869);
   bjeten_Diboson_stack_2->SetBinError(7,2.152937);
   bjeten_Diboson_stack_2->SetBinError(8,1.856441);
   bjeten_Diboson_stack_2->SetBinError(9,1.974559);
   bjeten_Diboson_stack_2->SetBinError(10,1.934578);
   bjeten_Diboson_stack_2->SetBinError(11,1.744636);
   bjeten_Diboson_stack_2->SetBinError(12,1.715595);
   bjeten_Diboson_stack_2->SetBinError(13,1.673244);
   bjeten_Diboson_stack_2->SetBinError(14,1.481118);
   bjeten_Diboson_stack_2->SetBinError(15,1.379165);
   bjeten_Diboson_stack_2->SetBinError(16,0.7547874);
   bjeten_Diboson_stack_2->SetBinError(17,1.033298);
   bjeten_Diboson_stack_2->SetBinError(19,0.8966092);
   bjeten_Diboson_stack_2->SetBinError(20,1.024338);
   bjeten_Diboson_stack_2->SetBinError(21,0.8922327);
   bjeten_Diboson_stack_2->SetBinError(22,0.7401805);
   bjeten_Diboson_stack_2->SetBinError(23,1.038004);
   bjeten_Diboson_stack_2->SetBinError(24,0.9977145);
   bjeten_Diboson_stack_2->SetBinError(25,0.714908);
   bjeten_Diboson_stack_2->SetBinError(26,0.5791953);
   bjeten_Diboson_stack_2->SetBinError(27,0.6779752);
   bjeten_Diboson_stack_2->SetBinError(28,0.5733094);
   bjeten_Diboson_stack_2->SetBinError(29,0.6556626);
   bjeten_Diboson_stack_2->SetBinError(30,0.8766886);
   bjeten_Diboson_stack_2->SetBinError(31,2.438566);
   bjeten_Diboson_stack_2->SetEntries(540);
   bjeten_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjeten_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjeten_Diboson_stack_2->SetMarkerColor(ci);
   bjeten_Diboson_stack_2->GetXaxis()->SetTitle("Energy [GeV]");
   bjeten_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjeten_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjeten_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjeten_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjeten_Diboson_stack_2->GetYaxis()->SetTitle(" Jets");
   bjeten_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjeten_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjeten_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjeten_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjeten_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjeten_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjeten_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjeten_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjeten_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjeten_Diboson_stack_2,"hist");
   
   TH1F *bjeten_DY_stack_3 = new TH1F("bjeten_DY_stack_3","DY",30,0,500);
   bjeten_DY_stack_3->SetBinContent(2,20.71554);
   bjeten_DY_stack_3->SetBinContent(3,15.28601);
   bjeten_DY_stack_3->SetBinContent(4,87.23393);
   bjeten_DY_stack_3->SetBinContent(5,85.04649);
   bjeten_DY_stack_3->SetBinContent(6,16.82922);
   bjeten_DY_stack_3->SetBinContent(8,16.20458);
   bjeten_DY_stack_3->SetBinContent(10,9.033381);
   bjeten_DY_stack_3->SetBinContent(11,16.81726);
   bjeten_DY_stack_3->SetBinContent(12,33.35593);
   bjeten_DY_stack_3->SetBinContent(16,16.82922);
   bjeten_DY_stack_3->SetBinContent(17,20.7678);
   bjeten_DY_stack_3->SetBinContent(24,17.90387);
   bjeten_DY_stack_3->SetBinContent(25,17.70928);
   bjeten_DY_stack_3->SetBinContent(31,21.14491);
   bjeten_DY_stack_3->SetBinError(2,20.71554);
   bjeten_DY_stack_3->SetBinError(3,15.28601);
   bjeten_DY_stack_3->SetBinError(4,39.03224);
   bjeten_DY_stack_3->SetBinError(5,38.10305);
   bjeten_DY_stack_3->SetBinError(6,16.82922);
   bjeten_DY_stack_3->SetBinError(8,16.20458);
   bjeten_DY_stack_3->SetBinError(10,9.03338);
   bjeten_DY_stack_3->SetBinError(11,16.81726);
   bjeten_DY_stack_3->SetBinError(12,23.58703);
   bjeten_DY_stack_3->SetBinError(16,16.82922);
   bjeten_DY_stack_3->SetBinError(17,20.7678);
   bjeten_DY_stack_3->SetBinError(24,17.90386);
   bjeten_DY_stack_3->SetBinError(25,17.70928);
   bjeten_DY_stack_3->SetBinError(31,20.77122);
   bjeten_DY_stack_3->SetEntries(24);
   bjeten_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjeten_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjeten_DY_stack_3->SetMarkerColor(ci);
   bjeten_DY_stack_3->GetXaxis()->SetTitle("Energy [GeV]");
   bjeten_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjeten_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjeten_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjeten_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjeten_DY_stack_3->GetYaxis()->SetTitle(" Jets");
   bjeten_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjeten_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjeten_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjeten_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjeten_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjeten_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjeten_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjeten_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjeten_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjeten_DY_stack_3,"hist");
   
   TH1F *bjeten_W_stack_4 = new TH1F("bjeten_W_stack_4","W",30,0,500);
   bjeten_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjeten_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjeten_W_stack_4->SetMarkerColor(ci);
   bjeten_W_stack_4->GetXaxis()->SetTitle("Energy [GeV]");
   bjeten_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjeten_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjeten_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjeten_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjeten_W_stack_4->GetYaxis()->SetTitle(" Jets");
   bjeten_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjeten_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjeten_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjeten_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjeten_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjeten_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjeten_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjeten_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjeten_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjeten_W_stack_4,"hist");
   
   TH1F *bjeten_SinglesPtop_stack_5 = new TH1F("bjeten_SinglesPtop_stack_5","Single top",30,0,500);
   bjeten_SinglesPtop_stack_5->SetBinContent(2,52.79871);
   bjeten_SinglesPtop_stack_5->SetBinContent(3,792.6926);
   bjeten_SinglesPtop_stack_5->SetBinContent(4,993.6898);
   bjeten_SinglesPtop_stack_5->SetBinContent(5,996.3544);
   bjeten_SinglesPtop_stack_5->SetBinContent(6,899.9956);
   bjeten_SinglesPtop_stack_5->SetBinContent(7,641.766);
   bjeten_SinglesPtop_stack_5->SetBinContent(8,582.4137);
   bjeten_SinglesPtop_stack_5->SetBinContent(9,486.3225);
   bjeten_SinglesPtop_stack_5->SetBinContent(10,380.4522);
   bjeten_SinglesPtop_stack_5->SetBinContent(11,342.5032);
   bjeten_SinglesPtop_stack_5->SetBinContent(12,268.6215);
   bjeten_SinglesPtop_stack_5->SetBinContent(13,210.5067);
   bjeten_SinglesPtop_stack_5->SetBinContent(14,179.6401);
   bjeten_SinglesPtop_stack_5->SetBinContent(15,154.2241);
   bjeten_SinglesPtop_stack_5->SetBinContent(16,112.6161);
   bjeten_SinglesPtop_stack_5->SetBinContent(17,91.98542);
   bjeten_SinglesPtop_stack_5->SetBinContent(18,85.28461);
   bjeten_SinglesPtop_stack_5->SetBinContent(19,82.55893);
   bjeten_SinglesPtop_stack_5->SetBinContent(20,65.01485);
   bjeten_SinglesPtop_stack_5->SetBinContent(21,62.96826);
   bjeten_SinglesPtop_stack_5->SetBinContent(22,50.86288);
   bjeten_SinglesPtop_stack_5->SetBinContent(23,56.57808);
   bjeten_SinglesPtop_stack_5->SetBinContent(24,26.25502);
   bjeten_SinglesPtop_stack_5->SetBinContent(25,34.40092);
   bjeten_SinglesPtop_stack_5->SetBinContent(26,24.7375);
   bjeten_SinglesPtop_stack_5->SetBinContent(27,25.61897);
   bjeten_SinglesPtop_stack_5->SetBinContent(28,21.08363);
   bjeten_SinglesPtop_stack_5->SetBinContent(29,24.71546);
   bjeten_SinglesPtop_stack_5->SetBinContent(30,13.50411);
   bjeten_SinglesPtop_stack_5->SetBinContent(31,171.5067);
   bjeten_SinglesPtop_stack_5->SetBinError(2,8.393743);
   bjeten_SinglesPtop_stack_5->SetBinError(3,32.38255);
   bjeten_SinglesPtop_stack_5->SetBinError(4,36.49265);
   bjeten_SinglesPtop_stack_5->SetBinError(5,36.47938);
   bjeten_SinglesPtop_stack_5->SetBinError(6,34.7705);
   bjeten_SinglesPtop_stack_5->SetBinError(7,29.25538);
   bjeten_SinglesPtop_stack_5->SetBinError(8,27.95978);
   bjeten_SinglesPtop_stack_5->SetBinError(9,25.56827);
   bjeten_SinglesPtop_stack_5->SetBinError(10,22.60275);
   bjeten_SinglesPtop_stack_5->SetBinError(11,21.47696);
   bjeten_SinglesPtop_stack_5->SetBinError(12,18.88707);
   bjeten_SinglesPtop_stack_5->SetBinError(13,16.89037);
   bjeten_SinglesPtop_stack_5->SetBinError(14,15.57983);
   bjeten_SinglesPtop_stack_5->SetBinError(15,14.46644);
   bjeten_SinglesPtop_stack_5->SetBinError(16,12.25768);
   bjeten_SinglesPtop_stack_5->SetBinError(17,10.97325);
   bjeten_SinglesPtop_stack_5->SetBinError(18,10.76958);
   bjeten_SinglesPtop_stack_5->SetBinError(19,10.37809);
   bjeten_SinglesPtop_stack_5->SetBinError(20,9.225056);
   bjeten_SinglesPtop_stack_5->SetBinError(21,9.190638);
   bjeten_SinglesPtop_stack_5->SetBinError(22,8.267127);
   bjeten_SinglesPtop_stack_5->SetBinError(23,8.716889);
   bjeten_SinglesPtop_stack_5->SetBinError(24,5.88225);
   bjeten_SinglesPtop_stack_5->SetBinError(25,6.84653);
   bjeten_SinglesPtop_stack_5->SetBinError(26,5.607752);
   bjeten_SinglesPtop_stack_5->SetBinError(27,5.91382);
   bjeten_SinglesPtop_stack_5->SetBinError(28,5.395236);
   bjeten_SinglesPtop_stack_5->SetBinError(29,5.64484);
   bjeten_SinglesPtop_stack_5->SetBinError(30,4.188417);
   bjeten_SinglesPtop_stack_5->SetBinError(31,15.17226);
   bjeten_SinglesPtop_stack_5->SetEntries(6353);
   bjeten_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjeten_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjeten_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjeten_SinglesPtop_stack_5->GetXaxis()->SetTitle("Energy [GeV]");
   bjeten_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjeten_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjeten_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjeten_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Jets");
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjeten_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjeten_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjeten_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjeten_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjeten_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjeten_fx3015[31] = {
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
   Double_t Graph_from_bjeten_fy3015[31] = {
   0,
   994,
   16828,
   23245,
   23418,
   20627,
   17312,
   14136,
   11138,
   9130,
   7264,
   5553,
   4775,
   3874,
   3140,
   2573,
   2179,
   1785,
   1604,
   1271,
   1083,
   854,
   804,
   678,
   534,
   483,
   415,
   339,
   293,
   245,
   0};
   Double_t Graph_from_bjeten_felx3015[31] = {
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
   Double_t Graph_from_bjeten_fely3015[31] = {
   0,
   31.52777,
   129.7228,
   152.4631,
   153.0294,
   143.621,
   131.5751,
   118.8949,
   105.5367,
   95.55103,
   85.2291,
   74.51845,
   69.10137,
   62.24147,
   56.0357,
   50.72475,
   46.67976,
   42.24926,
   40.04997,
   35.65109,
   32.90897,
   29.22328,
   28.35489,
   26.03843,
   23.10844,
   21.97726,
   20.37155,
   18.41195,
   17.11724,
   15.65248,
   0};
   Double_t Graph_from_bjeten_fehx3015[31] = {
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
   Double_t Graph_from_bjeten_fehy3015[31] = {
   1.841055,
   31.52777,
   129.7228,
   152.4631,
   153.0294,
   143.621,
   131.5751,
   118.8949,
   105.5367,
   95.55103,
   85.2291,
   74.51845,
   69.10137,
   62.24147,
   56.0357,
   50.72475,
   46.67976,
   42.24926,
   40.04997,
   35.65109,
   32.90897,
   29.22328,
   28.35489,
   26.03843,
   23.10844,
   21.97726,
   20.37155,
   18.41195,
   17.11724,
   15.65248,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_bjeten_fx3015,Graph_from_bjeten_fy3015,Graph_from_bjeten_felx3015,Graph_from_bjeten_fehx3015,Graph_from_bjeten_fely3015,Graph_from_bjeten_fehy3015);
   grae->SetName("Graph_from_bjeten");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjeten3015 = new TH1F("Graph_Graph_from_bjeten3015","Data",100,0,550);
   Graph_Graph_from_bjeten3015->SetMinimum(0);
   Graph_Graph_from_bjeten3015->SetMaximum(25928.13);
   Graph_Graph_from_bjeten3015->SetDirectory(0);
   Graph_Graph_from_bjeten3015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjeten3015->SetLineColor(ci);
   Graph_Graph_from_bjeten3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjeten3015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjeten3015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjeten3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjeten3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjeten3015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjeten3015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjeten3015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjeten3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjeten3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjeten3015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjeten3015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjeten3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjeten3015);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjeten","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjeten_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjeten_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjeten_DY","DY","f");

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
   entry=leg->AddEntry("bjeten_W","W","f");

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
   entry=leg->AddEntry("bjeten_Single top","Single top","f");

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
   
   TH1F *ratioframe__16 = new TH1F("ratioframe__16","t#bar{t}",30,0,500);
   ratioframe__16->SetMinimum(0.46);
   ratioframe__16->SetMaximum(1.54);
   ratioframe__16->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__16->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__16->SetMarkerColor(ci);
   ratioframe__16->GetXaxis()->SetTitle("Energy [GeV]");
   ratioframe__16->GetXaxis()->SetLabelFont(42);
   ratioframe__16->GetXaxis()->SetLabelSize(0);
   ratioframe__16->GetXaxis()->SetTitleSize(0);
   ratioframe__16->GetXaxis()->SetTitleOffset(0);
   ratioframe__16->GetXaxis()->SetTitleFont(42);
   ratioframe__16->GetYaxis()->SetTitle("Data/MC");
   ratioframe__16->GetYaxis()->SetNoExponent();
   ratioframe__16->GetYaxis()->SetNdivisions(5);
   ratioframe__16->GetYaxis()->SetLabelFont(42);
   ratioframe__16->GetYaxis()->SetLabelSize(0.18);
   ratioframe__16->GetYaxis()->SetTitleSize(0.2);
   ratioframe__16->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__16->GetYaxis()->SetTitleFont(42);
   ratioframe__16->GetZaxis()->SetLabelFont(42);
   ratioframe__16->GetZaxis()->SetLabelSize(0.035);
   ratioframe__16->GetZaxis()->SetTitleSize(0.035);
   ratioframe__16->GetZaxis()->SetTitleFont(42);
   ratioframe__16->Draw("");
   
   Double_t Graph_from_ratio_fx3016[30] = {
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
   Double_t Graph_from_ratio_fy3016[30] = {
   0,
   0.8966407,
   0.8736957,
   0.8961276,
   0.9126083,
   0.9129839,
   0.9190624,
   0.9163101,
   0.884753,
   0.8981264,
   0.8818383,
   0.8325585,
   0.8981819,
   0.886761,
   0.8687659,
   0.8802388,
   0.8866987,
   0.8906779,
   0.9349586,
   0.8505915,
   0.8624554,
   0.8275629,
   0.8850904,
   0.8649769,
   0.8069583,
   0.8797108,
   0.8638154,
   0.8350291,
   0.8146785,
   0.8311528};
   Double_t Graph_from_ratio_felx3016[30] = {
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
   Double_t Graph_from_ratio_fely3016[30] = {
   0,
   0.03760887,
   0.007975017,
   0.007080778,
   0.007199668,
   0.007574841,
   0.008283186,
   0.009195763,
   0.009904311,
   0.01114972,
   0.01235625,
   0.01341087,
   0.01539624,
   0.01684675,
   0.0182901,
   0.02108312,
   0.02362451,
   0.02496557,
   0.02785214,
   0.02805992,
   0.03095467,
   0.03324891,
   0.03711714,
   0.04365558,
   0.04612487,
   0.04729862,
   0.05013208,
   0.05341794,
   0.05602256,
   0.0622362};
   Double_t Graph_from_ratio_fehx3016[30] = {
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
   Double_t Graph_from_ratio_fehy3016[30] = {
   0,
   0.03760887,
   0.007975017,
   0.007080778,
   0.007199668,
   0.007574841,
   0.008283186,
   0.009195763,
   0.009904311,
   0.01114972,
   0.01235625,
   0.01341087,
   0.01539624,
   0.01684675,
   0.0182901,
   0.02108312,
   0.02362451,
   0.02496557,
   0.02785214,
   0.02805992,
   0.03095467,
   0.03324891,
   0.03711714,
   0.04365558,
   0.04612487,
   0.04729862,
   0.05013208,
   0.05341794,
   0.05602256,
   0.0622362};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3016,Graph_from_ratio_fy3016,Graph_from_ratio_felx3016,Graph_from_ratio_fehx3016,Graph_from_ratio_fely3016,Graph_from_ratio_fehy3016);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3016 = new TH1F("Graph_Graph_from_ratio3016","Data",100,0,550);
   Graph_Graph_from_ratio3016->SetMinimum(0);
   Graph_Graph_from_ratio3016->SetMaximum(1.059092);
   Graph_Graph_from_ratio3016->SetDirectory(0);
   Graph_Graph_from_ratio3016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3016->SetLineColor(ci);
   Graph_Graph_from_ratio3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3016);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
