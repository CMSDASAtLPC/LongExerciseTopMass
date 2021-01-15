void muon_eta()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 14 17:58:54 2021) by ROOT version 6.14/09
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
   p1->Range(-3.609639,-1633.965,3.137349,11983.24);
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
   
   TH1F *frame__5 = new TH1F("frame__5","t#bar{t}",30,-2.8,2.8);
   frame__5->SetMinimum(0.1);
   frame__5->SetMaximum(11847.07);
   frame__5->SetEntries(365945);
   frame__5->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__5->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__5->SetMarkerColor(ci);
   frame__5->GetXaxis()->SetTitle("muon #eta");
   frame__5->GetXaxis()->SetLabelFont(42);
   frame__5->GetXaxis()->SetLabelSize(0.035);
   frame__5->GetXaxis()->SetTitleSize(0.035);
   frame__5->GetXaxis()->SetTitleFont(42);
   frame__5->GetYaxis()->SetTitle("Events");
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
   
   TH1F *mc_stack_3 = new TH1F("mc_stack_3","mc",30,-2.8,2.8);
   mc_stack_3->SetMinimum(-5.049903e-07);
   mc_stack_3->SetMaximum(9568.788);
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
   
   
   TH1F *muon_eta_t#bar{t}_stack_1 = new TH1F("muon_eta_t#bar{t}_stack_1","t#bar{t}",30,-2.8,2.8);
   muon_eta_t#bar{t}_stack_1->SetBinContent(3,1231.147);
   muon_eta_t#bar{t}_stack_1->SetBinContent(4,1920.914);
   muon_eta_t#bar{t}_stack_1->SetBinContent(5,2746.371);
   muon_eta_t#bar{t}_stack_1->SetBinContent(6,2987.475);
   muon_eta_t#bar{t}_stack_1->SetBinContent(7,4022.317);
   muon_eta_t#bar{t}_stack_1->SetBinContent(8,4793.56);
   muon_eta_t#bar{t}_stack_1->SetBinContent(9,5562.641);
   muon_eta_t#bar{t}_stack_1->SetBinContent(10,6424.968);
   muon_eta_t#bar{t}_stack_1->SetBinContent(11,6790.034);
   muon_eta_t#bar{t}_stack_1->SetBinContent(12,7771.817);
   muon_eta_t#bar{t}_stack_1->SetBinContent(13,8362.623);
   muon_eta_t#bar{t}_stack_1->SetBinContent(14,7630.101);
   muon_eta_t#bar{t}_stack_1->SetBinContent(15,8683.079);
   muon_eta_t#bar{t}_stack_1->SetBinContent(16,8642.932);
   muon_eta_t#bar{t}_stack_1->SetBinContent(17,7566.647);
   muon_eta_t#bar{t}_stack_1->SetBinContent(18,8315.909);
   muon_eta_t#bar{t}_stack_1->SetBinContent(19,7678.443);
   muon_eta_t#bar{t}_stack_1->SetBinContent(20,6786.385);
   muon_eta_t#bar{t}_stack_1->SetBinContent(21,6487.193);
   muon_eta_t#bar{t}_stack_1->SetBinContent(22,5633.922);
   muon_eta_t#bar{t}_stack_1->SetBinContent(23,4797.938);
   muon_eta_t#bar{t}_stack_1->SetBinContent(24,4128.001);
   muon_eta_t#bar{t}_stack_1->SetBinContent(25,3218.228);
   muon_eta_t#bar{t}_stack_1->SetBinContent(26,2720.384);
   muon_eta_t#bar{t}_stack_1->SetBinContent(27,1890.77);
   muon_eta_t#bar{t}_stack_1->SetBinContent(28,1307.473);
   muon_eta_t#bar{t}_stack_1->SetBinError(3,22.18768);
   muon_eta_t#bar{t}_stack_1->SetBinError(4,27.85227);
   muon_eta_t#bar{t}_stack_1->SetBinError(5,33.55125);
   muon_eta_t#bar{t}_stack_1->SetBinError(6,35.04494);
   muon_eta_t#bar{t}_stack_1->SetBinError(7,40.65369);
   muon_eta_t#bar{t}_stack_1->SetBinError(8,44.40972);
   muon_eta_t#bar{t}_stack_1->SetBinError(9,47.66978);
   muon_eta_t#bar{t}_stack_1->SetBinError(10,51.14979);
   muon_eta_t#bar{t}_stack_1->SetBinError(11,52.83844);
   muon_eta_t#bar{t}_stack_1->SetBinError(12,56.62624);
   muon_eta_t#bar{t}_stack_1->SetBinError(13,58.69598);
   muon_eta_t#bar{t}_stack_1->SetBinError(14,56.06626);
   muon_eta_t#bar{t}_stack_1->SetBinError(15,59.78568);
   muon_eta_t#bar{t}_stack_1->SetBinError(16,59.67277);
   muon_eta_t#bar{t}_stack_1->SetBinError(17,55.91644);
   muon_eta_t#bar{t}_stack_1->SetBinError(18,58.63785);
   muon_eta_t#bar{t}_stack_1->SetBinError(19,56.26586);
   muon_eta_t#bar{t}_stack_1->SetBinError(20,52.81648);
   muon_eta_t#bar{t}_stack_1->SetBinError(21,51.36704);
   muon_eta_t#bar{t}_stack_1->SetBinError(22,48.04301);
   muon_eta_t#bar{t}_stack_1->SetBinError(23,44.43539);
   muon_eta_t#bar{t}_stack_1->SetBinError(24,41.22867);
   muon_eta_t#bar{t}_stack_1->SetBinError(25,36.41353);
   muon_eta_t#bar{t}_stack_1->SetBinError(26,33.47233);
   muon_eta_t#bar{t}_stack_1->SetBinError(27,27.64848);
   muon_eta_t#bar{t}_stack_1->SetBinError(28,22.93019);
   muon_eta_t#bar{t}_stack_1->SetEntries(360257);
   muon_eta_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   muon_eta_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   muon_eta_t#bar{t}_stack_1->SetMarkerColor(ci);
   muon_eta_t#bar{t}_stack_1->GetXaxis()->SetTitle("muon #eta");
   muon_eta_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   muon_eta_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   muon_eta_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   muon_eta_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   muon_eta_t#bar{t}_stack_1->GetYaxis()->SetTitle("Events");
   muon_eta_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   muon_eta_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   muon_eta_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   muon_eta_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   muon_eta_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   muon_eta_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   muon_eta_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   muon_eta_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   muon_eta_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(muon_eta_t#bar{t}_stack_1,"hist");
   
   TH1F *muon_eta_Diboson_stack_2 = new TH1F("muon_eta_Diboson_stack_2","Diboson",30,-2.8,2.8);
   muon_eta_Diboson_stack_2->SetBinContent(3,4.460455);
   muon_eta_Diboson_stack_2->SetBinContent(4,3.531279);
   muon_eta_Diboson_stack_2->SetBinContent(5,4.310154);
   muon_eta_Diboson_stack_2->SetBinContent(6,6.07216);
   muon_eta_Diboson_stack_2->SetBinContent(7,8.239533);
   muon_eta_Diboson_stack_2->SetBinContent(8,5.116368);
   muon_eta_Diboson_stack_2->SetBinContent(9,8.403629);
   muon_eta_Diboson_stack_2->SetBinContent(10,8.171999);
   muon_eta_Diboson_stack_2->SetBinContent(11,6.819178);
   muon_eta_Diboson_stack_2->SetBinContent(12,9.281416);
   muon_eta_Diboson_stack_2->SetBinContent(13,12.10818);
   muon_eta_Diboson_stack_2->SetBinContent(14,7.865661);
   muon_eta_Diboson_stack_2->SetBinContent(15,10.80166);
   muon_eta_Diboson_stack_2->SetBinContent(16,11.97385);
   muon_eta_Diboson_stack_2->SetBinContent(17,8.577034);
   muon_eta_Diboson_stack_2->SetBinContent(18,7.409997);
   muon_eta_Diboson_stack_2->SetBinContent(19,8.68451);
   muon_eta_Diboson_stack_2->SetBinContent(20,8.290226);
   muon_eta_Diboson_stack_2->SetBinContent(21,7.499457);
   muon_eta_Diboson_stack_2->SetBinContent(22,5.551547);
   muon_eta_Diboson_stack_2->SetBinContent(23,6.936023);
   muon_eta_Diboson_stack_2->SetBinContent(24,5.348914);
   muon_eta_Diboson_stack_2->SetBinContent(25,3.648425);
   muon_eta_Diboson_stack_2->SetBinContent(26,5.146691);
   muon_eta_Diboson_stack_2->SetBinContent(27,4.085219);
   muon_eta_Diboson_stack_2->SetBinContent(28,3.817611);
   muon_eta_Diboson_stack_2->SetBinError(3,1.32351);
   muon_eta_Diboson_stack_2->SetBinError(4,1.179864);
   muon_eta_Diboson_stack_2->SetBinError(5,1.357401);
   muon_eta_Diboson_stack_2->SetBinError(6,1.537944);
   muon_eta_Diboson_stack_2->SetBinError(7,1.784298);
   muon_eta_Diboson_stack_2->SetBinError(8,1.424758);
   muon_eta_Diboson_stack_2->SetBinError(9,1.789514);
   muon_eta_Diboson_stack_2->SetBinError(10,1.747628);
   muon_eta_Diboson_stack_2->SetBinError(11,1.636384);
   muon_eta_Diboson_stack_2->SetBinError(12,1.883017);
   muon_eta_Diboson_stack_2->SetBinError(13,2.153356);
   muon_eta_Diboson_stack_2->SetBinError(14,1.766616);
   muon_eta_Diboson_stack_2->SetBinError(15,2.065206);
   muon_eta_Diboson_stack_2->SetBinError(16,2.166948);
   muon_eta_Diboson_stack_2->SetBinError(17,1.844387);
   muon_eta_Diboson_stack_2->SetBinError(18,1.679669);
   muon_eta_Diboson_stack_2->SetBinError(19,1.853618);
   muon_eta_Diboson_stack_2->SetBinError(20,1.821526);
   muon_eta_Diboson_stack_2->SetBinError(21,1.706651);
   muon_eta_Diboson_stack_2->SetBinError(22,1.484794);
   muon_eta_Diboson_stack_2->SetBinError(23,1.616705);
   muon_eta_Diboson_stack_2->SetBinError(24,1.453288);
   muon_eta_Diboson_stack_2->SetBinError(25,1.193953);
   muon_eta_Diboson_stack_2->SetBinError(26,1.371013);
   muon_eta_Diboson_stack_2->SetBinError(27,1.296651);
   muon_eta_Diboson_stack_2->SetBinError(28,1.205367);
   muon_eta_Diboson_stack_2->SetEntries(511);
   muon_eta_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   muon_eta_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   muon_eta_Diboson_stack_2->SetMarkerColor(ci);
   muon_eta_Diboson_stack_2->GetXaxis()->SetTitle("muon #eta");
   muon_eta_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   muon_eta_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   muon_eta_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   muon_eta_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   muon_eta_Diboson_stack_2->GetYaxis()->SetTitle("Events");
   muon_eta_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   muon_eta_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   muon_eta_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   muon_eta_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   muon_eta_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   muon_eta_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   muon_eta_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   muon_eta_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   muon_eta_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(muon_eta_Diboson_stack_2,"hist");
   
   TH1F *muon_eta_DY_stack_3 = new TH1F("muon_eta_DY_stack_3","DY",30,-2.8,2.8);
   muon_eta_DY_stack_3->SetBinContent(4,35.10159);
   muon_eta_DY_stack_3->SetBinContent(5,48.67487);
   muon_eta_DY_stack_3->SetBinContent(7,17.97306);
   muon_eta_DY_stack_3->SetBinContent(10,17.90387);
   muon_eta_DY_stack_3->SetBinContent(12,16.81726);
   muon_eta_DY_stack_3->SetBinContent(13,16.20458);
   muon_eta_DY_stack_3->SetBinContent(14,15.28601);
   muon_eta_DY_stack_3->SetBinContent(16,17.70928);
   muon_eta_DY_stack_3->SetBinContent(17,37.59702);
   muon_eta_DY_stack_3->SetBinContent(18,16.99263);
   muon_eta_DY_stack_3->SetBinContent(19,38.4221);
   muon_eta_DY_stack_3->SetBinContent(21,17.63883);
   muon_eta_DY_stack_3->SetBinContent(22,9.410492);
   muon_eta_DY_stack_3->SetBinContent(25,16.98714);
   muon_eta_DY_stack_3->SetBinContent(26,16.58862);
   muon_eta_DY_stack_3->SetBinError(4,24.86179);
   muon_eta_DY_stack_3->SetBinError(5,28.11388);
   muon_eta_DY_stack_3->SetBinError(7,17.97306);
   muon_eta_DY_stack_3->SetBinError(10,17.90386);
   muon_eta_DY_stack_3->SetBinError(12,16.81726);
   muon_eta_DY_stack_3->SetBinError(13,16.20458);
   muon_eta_DY_stack_3->SetBinError(14,15.28601);
   muon_eta_DY_stack_3->SetBinError(16,17.70928);
   muon_eta_DY_stack_3->SetBinError(17,26.73058);
   muon_eta_DY_stack_3->SetBinError(18,16.99263);
   muon_eta_DY_stack_3->SetBinError(19,27.25172);
   muon_eta_DY_stack_3->SetBinError(21,17.63883);
   muon_eta_DY_stack_3->SetBinError(22,9.041248);
   muon_eta_DY_stack_3->SetBinError(25,16.98714);
   muon_eta_DY_stack_3->SetBinError(26,16.58863);
   muon_eta_DY_stack_3->SetEntries(21);
   muon_eta_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   muon_eta_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   muon_eta_DY_stack_3->SetMarkerColor(ci);
   muon_eta_DY_stack_3->GetXaxis()->SetTitle("muon #eta");
   muon_eta_DY_stack_3->GetXaxis()->SetLabelFont(42);
   muon_eta_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   muon_eta_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   muon_eta_DY_stack_3->GetXaxis()->SetTitleFont(42);
   muon_eta_DY_stack_3->GetYaxis()->SetTitle("Events");
   muon_eta_DY_stack_3->GetYaxis()->SetLabelFont(42);
   muon_eta_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   muon_eta_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   muon_eta_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   muon_eta_DY_stack_3->GetYaxis()->SetTitleFont(42);
   muon_eta_DY_stack_3->GetZaxis()->SetLabelFont(42);
   muon_eta_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   muon_eta_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   muon_eta_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(muon_eta_DY_stack_3,"hist");
   
   TH1F *muon_eta_W_stack_4 = new TH1F("muon_eta_W_stack_4","W",30,-2.8,2.8);
   muon_eta_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   muon_eta_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   muon_eta_W_stack_4->SetMarkerColor(ci);
   muon_eta_W_stack_4->GetXaxis()->SetTitle("muon #eta");
   muon_eta_W_stack_4->GetXaxis()->SetLabelFont(42);
   muon_eta_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   muon_eta_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   muon_eta_W_stack_4->GetXaxis()->SetTitleFont(42);
   muon_eta_W_stack_4->GetYaxis()->SetTitle("Events");
   muon_eta_W_stack_4->GetYaxis()->SetLabelFont(42);
   muon_eta_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   muon_eta_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   muon_eta_W_stack_4->GetYaxis()->SetTitleOffset(0);
   muon_eta_W_stack_4->GetYaxis()->SetTitleFont(42);
   muon_eta_W_stack_4->GetZaxis()->SetLabelFont(42);
   muon_eta_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   muon_eta_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   muon_eta_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(muon_eta_W_stack_4,"hist");
   
   TH1F *muon_eta_SinglesPtop_stack_5 = new TH1F("muon_eta_SinglesPtop_stack_5","Single top",30,-2.8,2.8);
   muon_eta_SinglesPtop_stack_5->SetBinContent(3,70.44778);
   muon_eta_SinglesPtop_stack_5->SetBinContent(4,76.72359);
   muon_eta_SinglesPtop_stack_5->SetBinContent(5,122.0856);
   muon_eta_SinglesPtop_stack_5->SetBinContent(6,133.5413);
   muon_eta_SinglesPtop_stack_5->SetBinContent(7,162.3196);
   muon_eta_SinglesPtop_stack_5->SetBinContent(8,213.0419);
   muon_eta_SinglesPtop_stack_5->SetBinContent(9,223.3526);
   muon_eta_SinglesPtop_stack_5->SetBinContent(10,260.9158);
   muon_eta_SinglesPtop_stack_5->SetBinContent(11,307.6645);
   muon_eta_SinglesPtop_stack_5->SetBinContent(12,382.0811);
   muon_eta_SinglesPtop_stack_5->SetBinContent(13,398.2943);
   muon_eta_SinglesPtop_stack_5->SetBinContent(14,399.4043);
   muon_eta_SinglesPtop_stack_5->SetBinContent(15,419.2505);
   muon_eta_SinglesPtop_stack_5->SetBinContent(16,404.7035);
   muon_eta_SinglesPtop_stack_5->SetBinContent(17,307.6005);
   muon_eta_SinglesPtop_stack_5->SetBinContent(18,453.4377);
   muon_eta_SinglesPtop_stack_5->SetBinContent(19,367.2653);
   muon_eta_SinglesPtop_stack_5->SetBinContent(20,313.0155);
   muon_eta_SinglesPtop_stack_5->SetBinContent(21,316.1413);
   muon_eta_SinglesPtop_stack_5->SetBinContent(22,284.0751);
   muon_eta_SinglesPtop_stack_5->SetBinContent(23,265.1623);
   muon_eta_SinglesPtop_stack_5->SetBinContent(24,169.7076);
   muon_eta_SinglesPtop_stack_5->SetBinContent(25,126.6091);
   muon_eta_SinglesPtop_stack_5->SetBinContent(26,128.7493);
   muon_eta_SinglesPtop_stack_5->SetBinContent(27,88.21514);
   muon_eta_SinglesPtop_stack_5->SetBinContent(28,44.56284);
   muon_eta_SinglesPtop_stack_5->SetBinError(3,9.512515);
   muon_eta_SinglesPtop_stack_5->SetBinError(4,10.02167);
   muon_eta_SinglesPtop_stack_5->SetBinError(5,12.89795);
   muon_eta_SinglesPtop_stack_5->SetBinError(6,13.24171);
   muon_eta_SinglesPtop_stack_5->SetBinError(7,14.7251);
   muon_eta_SinglesPtop_stack_5->SetBinError(8,16.83426);
   muon_eta_SinglesPtop_stack_5->SetBinError(9,17.20707);
   muon_eta_SinglesPtop_stack_5->SetBinError(10,18.5925);
   muon_eta_SinglesPtop_stack_5->SetBinError(11,20.19384);
   muon_eta_SinglesPtop_stack_5->SetBinError(12,22.56045);
   muon_eta_SinglesPtop_stack_5->SetBinError(13,23.21172);
   muon_eta_SinglesPtop_stack_5->SetBinError(14,23.22282);
   muon_eta_SinglesPtop_stack_5->SetBinError(15,23.64637);
   muon_eta_SinglesPtop_stack_5->SetBinError(16,23.22539);
   muon_eta_SinglesPtop_stack_5->SetBinError(17,20.3039);
   muon_eta_SinglesPtop_stack_5->SetBinError(18,24.69821);
   muon_eta_SinglesPtop_stack_5->SetBinError(19,22.21932);
   muon_eta_SinglesPtop_stack_5->SetBinError(20,20.49519);
   muon_eta_SinglesPtop_stack_5->SetBinError(21,20.53465);
   muon_eta_SinglesPtop_stack_5->SetBinError(22,19.58967);
   muon_eta_SinglesPtop_stack_5->SetBinError(23,18.88149);
   muon_eta_SinglesPtop_stack_5->SetBinError(24,15.10507);
   muon_eta_SinglesPtop_stack_5->SetBinError(25,12.99682);
   muon_eta_SinglesPtop_stack_5->SetBinError(26,13.2854);
   muon_eta_SinglesPtop_stack_5->SetBinError(27,10.75495);
   muon_eta_SinglesPtop_stack_5->SetBinError(28,7.640989);
   muon_eta_SinglesPtop_stack_5->SetEntries(5156);
   muon_eta_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   muon_eta_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   muon_eta_SinglesPtop_stack_5->SetMarkerColor(ci);
   muon_eta_SinglesPtop_stack_5->GetXaxis()->SetTitle("muon #eta");
   muon_eta_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   muon_eta_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   muon_eta_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   muon_eta_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   muon_eta_SinglesPtop_stack_5->GetYaxis()->SetTitle("Events");
   muon_eta_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   muon_eta_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   muon_eta_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   muon_eta_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   muon_eta_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   muon_eta_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   muon_eta_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   muon_eta_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   muon_eta_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(muon_eta_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_muon_eta_fx3005[31] = {
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
   Double_t Graph_from_muon_eta_fy3005[31] = {
   0,
   0,
   1166,
   1811,
   2552,
   2844,
   3909,
   4732,
   5279,
   6083,
   6467,
   7453,
   7992,
   6798,
   8199,
   8285,
   6972,
   7979,
   7430,
   6621,
   6190,
   5226,
   4831,
   3998,
   2893,
   2548,
   1819,
   1043,
   0,
   0,
   0};
   Double_t Graph_from_muon_eta_felx3005[31] = {
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
   Double_t Graph_from_muon_eta_fely3005[31] = {
   0,
   0,
   34.14674,
   42.55585,
   50.51732,
   53.32917,
   62.522,
   68.78953,
   72.65673,
   77.99359,
   80.41766,
   86.33076,
   89.39799,
   82.44998,
   90.54833,
   91.02198,
   83.4985,
   89.32525,
   86.19745,
   81.36953,
   78.67655,
   72.29108,
   69.5054,
   63.22974,
   53.78662,
   50.47772,
   42.64974,
   32.29551,
   0,
   0,
   0};
   Double_t Graph_from_muon_eta_fehx3005[31] = {
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
   Double_t Graph_from_muon_eta_fehy3005[31] = {
   1.841055,
   1.841055,
   34.14674,
   42.55585,
   50.51732,
   53.32917,
   62.522,
   68.78953,
   72.65673,
   77.99359,
   80.41766,
   86.33076,
   89.39799,
   82.44998,
   90.54833,
   91.02198,
   83.4985,
   89.32525,
   86.19745,
   81.36953,
   78.67655,
   72.29108,
   69.5054,
   63.22974,
   53.78662,
   50.47772,
   42.64974,
   32.29551,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_muon_eta_fx3005,Graph_from_muon_eta_fy3005,Graph_from_muon_eta_felx3005,Graph_from_muon_eta_fehx3005,Graph_from_muon_eta_fely3005,Graph_from_muon_eta_fehy3005);
   grae->SetName("Graph_from_muon_eta");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_muon_eta3005 = new TH1F("Graph_Graph_from_muon_eta3005","Data",100,-3.36,3.36);
   Graph_Graph_from_muon_eta3005->SetMinimum(0);
   Graph_Graph_from_muon_eta3005->SetMaximum(9213.624);
   Graph_Graph_from_muon_eta3005->SetDirectory(0);
   Graph_Graph_from_muon_eta3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_muon_eta3005->SetLineColor(ci);
   Graph_Graph_from_muon_eta3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_muon_eta3005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_muon_eta3005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_muon_eta3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_muon_eta3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_muon_eta3005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_muon_eta3005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_muon_eta3005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_muon_eta3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_muon_eta3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_muon_eta3005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_muon_eta3005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_muon_eta3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_muon_eta3005);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_muon_eta","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("muon_eta_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("muon_eta_Diboson","Diboson","f");

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
   entry=leg->AddEntry("muon_eta_DY","DY","f");

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
   entry=leg->AddEntry("muon_eta_W","W","f");

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
   entry=leg->AddEntry("muon_eta_Single top","Single top","f");

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
   
   TH1F *ratioframe__6 = new TH1F("ratioframe__6","t#bar{t}",30,-2.8,2.8);
   ratioframe__6->SetMinimum(0.46);
   ratioframe__6->SetMaximum(1.54);
   ratioframe__6->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__6->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__6->SetMarkerColor(ci);
   ratioframe__6->GetXaxis()->SetTitle("muon #eta");
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
   Double_t Graph_from_ratio_fy3006[30] = {
   0,
   0,
   0.892765,
   0.8893712,
   0.8735415,
   0.9094722,
   0.9283162,
   0.9441872,
   0.9110525,
   0.9062927,
   0.9102658,
   0.9111251,
   0.9092947,
   0.8441935,
   0.8996907,
   0.9127146,
   0.8802561,
   0.9073491,
   0.9180983,
   0.9315262,
   0.9064986,
   0.880842,
   0.9528531,
   0.9291068,
   0.8596118,
   0.8875362,
   0.9172645,
   0.7692569,
   0,
   0};
   Double_t Graph_from_ratio_felx3006[30] = {
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
   Double_t Graph_from_ratio_fely3006[30] = {
   0,
   0,
   0.03093029,
   0.02687167,
   0.02203088,
   0.02024234,
   0.01808802,
   0.01638678,
   0.01485952,
   0.01396173,
   0.01344228,
   0.01268991,
   0.01220478,
   0.01216184,
   0.01179209,
   0.01205077,
   0.01279515,
   0.01222236,
   0.01304403,
   0.0136472,
   0.0138643,
   0.01447933,
   0.01644274,
   0.01748997,
   0.01928378,
   0.02143792,
   0.02551875,
   0.02749314,
   0,
   0};
   Double_t Graph_from_ratio_fehx3006[30] = {
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
   Double_t Graph_from_ratio_fehy3006[30] = {
   0,
   0,
   0.03093029,
   0.02687167,
   0.02203088,
   0.02024234,
   0.01808802,
   0.01638678,
   0.01485952,
   0.01396173,
   0.01344228,
   0.01268991,
   0.01220478,
   0.01216184,
   0.01179209,
   0.01205077,
   0.01279515,
   0.01222236,
   0.01304403,
   0.0136472,
   0.0138643,
   0.01447933,
   0.01644274,
   0.01748997,
   0.01928378,
   0.02143792,
   0.02551875,
   0.02749314,
   0,
   0};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3006,Graph_from_ratio_fy3006,Graph_from_ratio_felx3006,Graph_from_ratio_fehx3006,Graph_from_ratio_fely3006,Graph_from_ratio_fehy3006);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3006 = new TH1F("Graph_Graph_from_ratio3006","Data",100,-3.36,3.36);
   Graph_Graph_from_ratio3006->SetMinimum(0);
   Graph_Graph_from_ratio3006->SetMaximum(1.066225);
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
