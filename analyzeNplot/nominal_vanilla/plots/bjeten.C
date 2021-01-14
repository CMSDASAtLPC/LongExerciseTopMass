void bjeten()
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
   p1->Range(-43.37349,-2842.245,318.0723,20843.96);
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
   
   TH1F *frame__1 = new TH1F("frame__1","t#bar{t}",30,0,300);
   frame__1->SetMinimum(0.1);
   frame__1->SetMaximum(20607.1);
   frame__1->SetEntries(504712);
   frame__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__1->SetMarkerColor(ci);
   frame__1->GetXaxis()->SetTitle("Energy [GeV]");
   frame__1->GetXaxis()->SetLabelFont(42);
   frame__1->GetXaxis()->SetLabelSize(0.035);
   frame__1->GetXaxis()->SetTitleSize(0.035);
   frame__1->GetXaxis()->SetTitleFont(42);
   frame__1->GetYaxis()->SetTitle(" Jets");
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
   
   TH1F *mc_stack_1 = new TH1F("mc_stack_1","mc",30,0,300);
   mc_stack_1->SetMinimum(-9.345868e-07);
   mc_stack_1->SetMaximum(16644.2);
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
   
   
   TH1F *bjeten_t#bar{t}_stack_1 = new TH1F("bjeten_t#bar{t}_stack_1","t#bar{t}",30,0,300);
   bjeten_t#bar{t}_stack_1->SetBinContent(4,6876.608);
   bjeten_t#bar{t}_stack_1->SetBinContent(5,12588.97);
   bjeten_t#bar{t}_stack_1->SetBinContent(6,14730.38);
   bjeten_t#bar{t}_stack_1->SetBinContent(7,15187.29);
   bjeten_t#bar{t}_stack_1->SetBinContent(8,14746.41);
   bjeten_t#bar{t}_stack_1->SetBinContent(9,13699.27);
   bjeten_t#bar{t}_stack_1->SetBinContent(10,12693.26);
   bjeten_t#bar{t}_stack_1->SetBinContent(11,11298.02);
   bjeten_t#bar{t}_stack_1->SetBinContent(12,10087.18);
   bjeten_t#bar{t}_stack_1->SetBinContent(13,8875.584);
   bjeten_t#bar{t}_stack_1->SetBinContent(14,7882.912);
   bjeten_t#bar{t}_stack_1->SetBinContent(15,6950.472);
   bjeten_t#bar{t}_stack_1->SetBinContent(16,6167.29);
   bjeten_t#bar{t}_stack_1->SetBinContent(17,5329.348);
   bjeten_t#bar{t}_stack_1->SetBinContent(18,4701.819);
   bjeten_t#bar{t}_stack_1->SetBinContent(19,4158.339);
   bjeten_t#bar{t}_stack_1->SetBinContent(20,3639.94);
   bjeten_t#bar{t}_stack_1->SetBinContent(21,3171.336);
   bjeten_t#bar{t}_stack_1->SetBinContent(22,2811.43);
   bjeten_t#bar{t}_stack_1->SetBinContent(23,2508.271);
   bjeten_t#bar{t}_stack_1->SetBinContent(24,2239.756);
   bjeten_t#bar{t}_stack_1->SetBinContent(25,2006.734);
   bjeten_t#bar{t}_stack_1->SetBinContent(26,1735.623);
   bjeten_t#bar{t}_stack_1->SetBinContent(27,1533.19);
   bjeten_t#bar{t}_stack_1->SetBinContent(28,1421.449);
   bjeten_t#bar{t}_stack_1->SetBinContent(29,1239.109);
   bjeten_t#bar{t}_stack_1->SetBinContent(30,1123.644);
   bjeten_t#bar{t}_stack_1->SetBinContent(31,11498);
   bjeten_t#bar{t}_stack_1->SetBinError(4,53.15312);
   bjeten_t#bar{t}_stack_1->SetBinError(5,71.9314);
   bjeten_t#bar{t}_stack_1->SetBinError(6,77.75022);
   bjeten_t#bar{t}_stack_1->SetBinError(7,78.99325);
   bjeten_t#bar{t}_stack_1->SetBinError(8,77.76624);
   bjeten_t#bar{t}_stack_1->SetBinError(9,74.97932);
   bjeten_t#bar{t}_stack_1->SetBinError(10,72.18521);
   bjeten_t#bar{t}_stack_1->SetBinError(11,68.10912);
   bjeten_t#bar{t}_stack_1->SetBinError(12,64.33994);
   bjeten_t#bar{t}_stack_1->SetBinError(13,60.36649);
   bjeten_t#bar{t}_stack_1->SetBinError(14,56.96346);
   bjeten_t#bar{t}_stack_1->SetBinError(15,53.44863);
   bjeten_t#bar{t}_stack_1->SetBinError(16,50.3482);
   bjeten_t#bar{t}_stack_1->SetBinError(17,46.75663);
   bjeten_t#bar{t}_stack_1->SetBinError(18,43.9576);
   bjeten_t#bar{t}_stack_1->SetBinError(19,41.35927);
   bjeten_t#bar{t}_stack_1->SetBinError(20,38.68974);
   bjeten_t#bar{t}_stack_1->SetBinError(21,36.1232);
   bjeten_t#bar{t}_stack_1->SetBinError(22,33.99847);
   bjeten_t#bar{t}_stack_1->SetBinError(23,32.08979);
   bjeten_t#bar{t}_stack_1->SetBinError(24,30.29947);
   bjeten_t#bar{t}_stack_1->SetBinError(25,28.71445);
   bjeten_t#bar{t}_stack_1->SetBinError(26,26.7127);
   bjeten_t#bar{t}_stack_1->SetBinError(27,25.07604);
   bjeten_t#bar{t}_stack_1->SetBinError(28,24.19544);
   bjeten_t#bar{t}_stack_1->SetBinError(29,22.57392);
   bjeten_t#bar{t}_stack_1->SetBinError(30,21.48559);
   bjeten_t#bar{t}_stack_1->SetBinError(31,68.75168);
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
   
   TH1F *bjeten_Diboson_stack_2 = new TH1F("bjeten_Diboson_stack_2","Diboson",30,0,300);
   bjeten_Diboson_stack_2->SetBinContent(4,10.64963);
   bjeten_Diboson_stack_2->SetBinContent(5,11.53961);
   bjeten_Diboson_stack_2->SetBinContent(6,14.32385);
   bjeten_Diboson_stack_2->SetBinContent(7,8.773731);
   bjeten_Diboson_stack_2->SetBinContent(8,13.04677);
   bjeten_Diboson_stack_2->SetBinContent(9,13.89734);
   bjeten_Diboson_stack_2->SetBinContent(10,6.911806);
   bjeten_Diboson_stack_2->SetBinContent(11,7.697405);
   bjeten_Diboson_stack_2->SetBinContent(12,6.790689);
   bjeten_Diboson_stack_2->SetBinContent(13,4.253528);
   bjeten_Diboson_stack_2->SetBinContent(14,6.451064);
   bjeten_Diboson_stack_2->SetBinContent(15,6.40998);
   bjeten_Diboson_stack_2->SetBinContent(16,6.932809);
   bjeten_Diboson_stack_2->SetBinContent(17,5.147826);
   bjeten_Diboson_stack_2->SetBinContent(18,4.621919);
   bjeten_Diboson_stack_2->SetBinContent(19,4.060132);
   bjeten_Diboson_stack_2->SetBinContent(20,4.46454);
   bjeten_Diboson_stack_2->SetBinContent(21,3.819372);
   bjeten_Diboson_stack_2->SetBinContent(22,3.322219);
   bjeten_Diboson_stack_2->SetBinContent(23,4.343868);
   bjeten_Diboson_stack_2->SetBinContent(24,3.447251);
   bjeten_Diboson_stack_2->SetBinContent(25,2.475044);
   bjeten_Diboson_stack_2->SetBinContent(26,0.8957487);
   bjeten_Diboson_stack_2->SetBinContent(27,1.026894);
   bjeten_Diboson_stack_2->SetBinContent(28,2.173232);
   bjeten_Diboson_stack_2->SetBinContent(31,35.18478);
   bjeten_Diboson_stack_2->SetBinError(4,1.995347);
   bjeten_Diboson_stack_2->SetBinError(5,2.141013);
   bjeten_Diboson_stack_2->SetBinError(6,2.335985);
   bjeten_Diboson_stack_2->SetBinError(7,1.885339);
   bjeten_Diboson_stack_2->SetBinError(8,2.212845);
   bjeten_Diboson_stack_2->SetBinError(9,2.344208);
   bjeten_Diboson_stack_2->SetBinError(10,1.652102);
   bjeten_Diboson_stack_2->SetBinError(11,1.696004);
   bjeten_Diboson_stack_2->SetBinError(12,1.641194);
   bjeten_Diboson_stack_2->SetBinError(13,1.222726);
   bjeten_Diboson_stack_2->SetBinError(14,1.581728);
   bjeten_Diboson_stack_2->SetBinError(15,1.553553);
   bjeten_Diboson_stack_2->SetBinError(16,1.636433);
   bjeten_Diboson_stack_2->SetBinError(17,1.402283);
   bjeten_Diboson_stack_2->SetBinError(18,1.32382);
   bjeten_Diboson_stack_2->SetBinError(19,1.267992);
   bjeten_Diboson_stack_2->SetBinError(20,1.313393);
   bjeten_Diboson_stack_2->SetBinError(21,1.246143);
   bjeten_Diboson_stack_2->SetBinError(22,1.177612);
   bjeten_Diboson_stack_2->SetBinError(23,1.339323);
   bjeten_Diboson_stack_2->SetBinError(24,1.140679);
   bjeten_Diboson_stack_2->SetBinError(25,0.9278885);
   bjeten_Diboson_stack_2->SetBinError(26,0.6000132);
   bjeten_Diboson_stack_2->SetBinError(27,0.6577612);
   bjeten_Diboson_stack_2->SetBinError(28,0.9190996);
   bjeten_Diboson_stack_2->SetBinError(31,3.748331);
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
   
   TH1F *bjeten_DY_stack_3 = new TH1F("bjeten_DY_stack_3","DY",30,0,300);
   bjeten_DY_stack_3->SetBinContent(4,20.71554);
   bjeten_DY_stack_3->SetBinContent(5,15.28601);
   bjeten_DY_stack_3->SetBinContent(6,52.67225);
   bjeten_DY_stack_3->SetBinContent(7,34.56168);
   bjeten_DY_stack_3->SetBinContent(8,48.84486);
   bjeten_DY_stack_3->SetBinContent(9,36.20163);
   bjeten_DY_stack_3->SetBinContent(10,16.82922);
   bjeten_DY_stack_3->SetBinContent(13,16.20458);
   bjeten_DY_stack_3->SetBinContent(17,9.033381);
   bjeten_DY_stack_3->SetBinContent(18,16.81726);
   bjeten_DY_stack_3->SetBinContent(19,16.53879);
   bjeten_DY_stack_3->SetBinContent(20,16.81714);
   bjeten_DY_stack_3->SetBinContent(27,16.82922);
   bjeten_DY_stack_3->SetBinContent(28,20.7678);
   bjeten_DY_stack_3->SetBinContent(31,56.75805);
   bjeten_DY_stack_3->SetBinError(4,20.71554);
   bjeten_DY_stack_3->SetBinError(5,15.28601);
   bjeten_DY_stack_3->SetBinError(6,30.41879);
   bjeten_DY_stack_3->SetBinError(7,24.4584);
   bjeten_DY_stack_3->SetBinError(8,28.21589);
   bjeten_DY_stack_3->SetBinError(9,25.60675);
   bjeten_DY_stack_3->SetBinError(10,16.82922);
   bjeten_DY_stack_3->SetBinError(13,16.20458);
   bjeten_DY_stack_3->SetBinError(17,9.03338);
   bjeten_DY_stack_3->SetBinError(18,16.81726);
   bjeten_DY_stack_3->SetBinError(19,16.53879);
   bjeten_DY_stack_3->SetBinError(20,16.81714);
   bjeten_DY_stack_3->SetBinError(27,16.82922);
   bjeten_DY_stack_3->SetBinError(28,20.7678);
   bjeten_DY_stack_3->SetBinError(31,32.64369);
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
   
   TH1F *bjeten_W_stack_4 = new TH1F("bjeten_W_stack_4","W",30,0,300);
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
   
   TH1F *bjeten_SinglesPtop_stack_5 = new TH1F("bjeten_SinglesPtop_stack_5","Single top",30,0,300);
   bjeten_SinglesPtop_stack_5->SetBinContent(4,293.9142);
   bjeten_SinglesPtop_stack_5->SetBinContent(5,551.5771);
   bjeten_SinglesPtop_stack_5->SetBinContent(6,586.0452);
   bjeten_SinglesPtop_stack_5->SetBinContent(7,620.9927);
   bjeten_SinglesPtop_stack_5->SetBinContent(8,594.4564);
   bjeten_SinglesPtop_stack_5->SetBinContent(9,563.4095);
   bjeten_SinglesPtop_stack_5->SetBinContent(10,525.1364);
   bjeten_SinglesPtop_stack_5->SetBinContent(11,397.3724);
   bjeten_SinglesPtop_stack_5->SetBinContent(12,371.654);
   bjeten_SinglesPtop_stack_5->SetBinContent(13,339.0769);
   bjeten_SinglesPtop_stack_5->SetBinContent(14,319.5254);
   bjeten_SinglesPtop_stack_5->SetBinContent(15,282.8734);
   bjeten_SinglesPtop_stack_5->SetBinContent(16,235.8994);
   bjeten_SinglesPtop_stack_5->SetBinContent(17,208.6566);
   bjeten_SinglesPtop_stack_5->SetBinContent(18,215.4553);
   bjeten_SinglesPtop_stack_5->SetBinContent(19,167.9308);
   bjeten_SinglesPtop_stack_5->SetBinContent(20,163.6348);
   bjeten_SinglesPtop_stack_5->SetBinContent(21,135.7202);
   bjeten_SinglesPtop_stack_5->SetBinContent(22,112.3094);
   bjeten_SinglesPtop_stack_5->SetBinContent(23,98.20546);
   bjeten_SinglesPtop_stack_5->SetBinContent(24,133.1333);
   bjeten_SinglesPtop_stack_5->SetBinContent(25,65.00244);
   bjeten_SinglesPtop_stack_5->SetBinContent(26,61.60627);
   bjeten_SinglesPtop_stack_5->SetBinContent(27,68.95908);
   bjeten_SinglesPtop_stack_5->SetBinContent(28,60.54333);
   bjeten_SinglesPtop_stack_5->SetBinContent(29,45.29868);
   bjeten_SinglesPtop_stack_5->SetBinContent(30,53.47882);
   bjeten_SinglesPtop_stack_5->SetBinContent(31,659.8052);
   bjeten_SinglesPtop_stack_5->SetBinError(4,19.66756);
   bjeten_SinglesPtop_stack_5->SetBinError(5,27.06051);
   bjeten_SinglesPtop_stack_5->SetBinError(6,28.04825);
   bjeten_SinglesPtop_stack_5->SetBinError(7,28.89225);
   bjeten_SinglesPtop_stack_5->SetBinError(8,28.08962);
   bjeten_SinglesPtop_stack_5->SetBinError(9,27.49978);
   bjeten_SinglesPtop_stack_5->SetBinError(10,26.54648);
   bjeten_SinglesPtop_stack_5->SetBinError(11,22.9539);
   bjeten_SinglesPtop_stack_5->SetBinError(12,22.3147);
   bjeten_SinglesPtop_stack_5->SetBinError(13,21.34852);
   bjeten_SinglesPtop_stack_5->SetBinError(14,20.68182);
   bjeten_SinglesPtop_stack_5->SetBinError(15,19.57136);
   bjeten_SinglesPtop_stack_5->SetBinError(16,17.74595);
   bjeten_SinglesPtop_stack_5->SetBinError(17,16.72028);
   bjeten_SinglesPtop_stack_5->SetBinError(18,17.07593);
   bjeten_SinglesPtop_stack_5->SetBinError(19,15.01919);
   bjeten_SinglesPtop_stack_5->SetBinError(20,14.73825);
   bjeten_SinglesPtop_stack_5->SetBinError(21,13.59009);
   bjeten_SinglesPtop_stack_5->SetBinError(22,12.38228);
   bjeten_SinglesPtop_stack_5->SetBinError(23,11.49956);
   bjeten_SinglesPtop_stack_5->SetBinError(24,13.42411);
   bjeten_SinglesPtop_stack_5->SetBinError(25,9.31856);
   bjeten_SinglesPtop_stack_5->SetBinError(26,9.048445);
   bjeten_SinglesPtop_stack_5->SetBinError(27,9.662908);
   bjeten_SinglesPtop_stack_5->SetBinError(28,8.840582);
   bjeten_SinglesPtop_stack_5->SetBinError(29,7.807003);
   bjeten_SinglesPtop_stack_5->SetBinError(30,8.502672);
   bjeten_SinglesPtop_stack_5->SetBinError(31,29.63466);
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
   
   Double_t Graph_from_bjeten_fx3001[31] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   0};
   Double_t Graph_from_bjeten_fy3001[31] = {
   0,
   0,
   0,
   6233,
   11589,
   13714,
   14289,
   14042,
   13252,
   11993,
   10756,
   9565,
   8494,
   7390,
   6381,
   5711,
   4998,
   4320,
   3732,
   3186,
   2933,
   2725,
   2309,
   1998,
   1824,
   1639,
   1383,
   1292,
   1177,
   1046,
   0};
   Double_t Graph_from_bjeten_felx3001[31] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   0};
   Double_t Graph_from_bjeten_fely3001[31] = {
   0,
   0,
   0,
   78.94935,
   107.6522,
   117.1068,
   119.5366,
   118.4989,
   115.1173,
   109.5126,
   103.7111,
   97.80082,
   92.1629,
   85.96511,
   79.88116,
   75.57116,
   70.69653,
   65.72671,
   61.0901,
   56.44466,
   54.15718,
   52.20153,
   48.05206,
   44.69899,
   42.70831,
   40.48456,
   37.18871,
   35.9444,
   34.30743,
   32.34192,
   0};
   Double_t Graph_from_bjeten_fehx3001[31] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   0};
   Double_t Graph_from_bjeten_fehy3001[31] = {
   1.841055,
   1.841055,
   1.841055,
   78.94935,
   107.6522,
   117.1068,
   119.5366,
   118.4989,
   115.1173,
   109.5126,
   103.7111,
   97.80082,
   92.1629,
   85.96511,
   79.88116,
   75.57116,
   70.69653,
   65.72671,
   61.0901,
   56.44466,
   54.15718,
   52.20153,
   48.05206,
   44.69899,
   42.70831,
   40.48456,
   37.18871,
   35.9444,
   34.30743,
   32.34192,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_bjeten_fx3001,Graph_from_bjeten_fy3001,Graph_from_bjeten_felx3001,Graph_from_bjeten_fehx3001,Graph_from_bjeten_fely3001,Graph_from_bjeten_fehy3001);
   grae->SetName("Graph_from_bjeten");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjeten3001 = new TH1F("Graph_Graph_from_bjeten3001","Data",100,0,330);
   Graph_Graph_from_bjeten3001->SetMinimum(0);
   Graph_Graph_from_bjeten3001->SetMaximum(15849.39);
   Graph_Graph_from_bjeten3001->SetDirectory(0);
   Graph_Graph_from_bjeten3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjeten3001->SetLineColor(ci);
   Graph_Graph_from_bjeten3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjeten3001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjeten3001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjeten3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjeten3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjeten3001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjeten3001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjeten3001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjeten3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjeten3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjeten3001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjeten3001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjeten3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjeten3001);
   
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
   p2->Range(-43.37349,0.4485106,318.0723,1.597447);
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
   
   TH1F *ratioframe__2 = new TH1F("ratioframe__2","t#bar{t}",30,0,300);
   ratioframe__2->SetMinimum(0.46);
   ratioframe__2->SetMaximum(1.54);
   ratioframe__2->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__2->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__2->SetMarkerColor(ci);
   ratioframe__2->GetXaxis()->SetTitle("Energy [GeV]");
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
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_ratio_fy3002[30] = {
   0,
   0,
   0,
   0.8654677,
   0.8801301,
   0.8914794,
   0.9014222,
   0.9116551,
   0.9258858,
   0.9056696,
   0.9190737,
   0.9139446,
   0.9197499,
   0.9002436,
   0.8813833,
   0.8909346,
   0.900186,
   0.8747216,
   0.8585492,
   0.8329724,
   0.8858684,
   0.9309676,
   0.8843963,
   0.8407899,
   0.8793706,
   0.911505,
   0.8537012,
   0.8585097,
   0.9163756,
   0.8886072};
   Double_t Graph_from_ratio_felx3002[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_ratio_fely3002[30] = {
   0,
   0,
   0,
   0.01314587,
   0.009710556,
   0.009166216,
   0.009038263,
   0.009270598,
   0.009702944,
   0.009869173,
   0.01050758,
   0.01107772,
   0.01195313,
   0.01240429,
   0.01303055,
   0.01393175,
   0.01513754,
   0.01599388,
   0.01684557,
   0.01767965,
   0.01934718,
   0.02122816,
   0.02173208,
   0.0221691,
   0.02424693,
   0.02667237,
   0.02839537,
   0.03044738,
   0.03168402,
   0.03254483};
   Double_t Graph_from_ratio_fehx3002[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_ratio_fehy3002[30] = {
   0,
   0,
   0,
   0.01314587,
   0.009710556,
   0.009166216,
   0.009038263,
   0.009270598,
   0.009702944,
   0.009869173,
   0.01050758,
   0.01107772,
   0.01195313,
   0.01240429,
   0.01303055,
   0.01393175,
   0.01513754,
   0.01599388,
   0.01684557,
   0.01767965,
   0.01934718,
   0.02122816,
   0.02173208,
   0.0221691,
   0.02424693,
   0.02667237,
   0.02839537,
   0.03044738,
   0.03168402,
   0.03254483};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3002,Graph_from_ratio_fy3002,Graph_from_ratio_felx3002,Graph_from_ratio_fehx3002,Graph_from_ratio_fely3002,Graph_from_ratio_fehy3002);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3002 = new TH1F("Graph_Graph_from_ratio3002","Data",100,0,330);
   Graph_Graph_from_ratio3002->SetMinimum(0);
   Graph_Graph_from_ratio3002->SetMaximum(1.047415);
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
