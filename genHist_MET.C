void genHist_MET()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo1","canvas_plotflow_tempo1",0,0,1000,500);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  canvas->SetHighLightColor(2);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(3);
  canvas->SetFrameBorderMode(0);
  canvas->SetFrameBorderSize(0);
  canvas->SetTickx(1);
  canvas->SetTicky(1);
  canvas->SetLeftMargin(0.14);
  canvas->SetRightMargin(0.3);
  canvas->SetBottomMargin(0.15);
  canvas->SetTopMargin(0.05);

  // Creating a new TH1F
  TH1F* S1_MET_0 = new TH1F("S1_MET_0","S1_MET_0",50,0.0,500.0);
  // Content
  S1_MET_0->SetBinContent(0,0.0); // underflow
  S1_MET_0->SetBinContent(1,0.00470000014588);
  S1_MET_0->SetBinContent(2,0.0104999995385);
  S1_MET_0->SetBinContent(3,0.0170999999533);
  S1_MET_0->SetBinContent(4,0.0248999982007);
  S1_MET_0->SetBinContent(5,0.0283999980469);
  S1_MET_0->SetBinContent(6,0.0334000013517);
  S1_MET_0->SetBinContent(7,0.0308999873635);
  S1_MET_0->SetBinContent(8,0.0393999905144);
  S1_MET_0->SetBinContent(9,0.0438000072387);
  S1_MET_0->SetBinContent(10,0.0458000036263);
  S1_MET_0->SetBinContent(11,0.0435000016127);
  S1_MET_0->SetBinContent(12,0.0489999978464);
  S1_MET_0->SetBinContent(13,0.050800006931);
  S1_MET_0->SetBinContent(14,0.0471999887618);
  S1_MET_0->SetBinContent(15,0.0403000073925);
  S1_MET_0->SetBinContent(16,0.0428999903606);
  S1_MET_0->SetBinContent(17,0.0427000030576);
  S1_MET_0->SetBinContent(18,0.0415999988766);
  S1_MET_0->SetBinContent(19,0.039900008115);
  S1_MET_0->SetBinContent(20,0.0365000019203);
  S1_MET_0->SetBinContent(21,0.0334999950032);
  S1_MET_0->SetBinContent(22,0.0307000000605);
  S1_MET_0->SetBinContent(23,0.0282000107439);
  S1_MET_0->SetBinContent(24,0.0287000036729);
  S1_MET_0->SetBinContent(25,0.0235000007294);
  S1_MET_0->SetBinContent(26,0.020999999077);
  S1_MET_0->SetBinContent(27,0.0150000000456);
  S1_MET_0->SetBinContent(28,0.0146000007681);
  S1_MET_0->SetBinContent(29,0.0127000004992);
  S1_MET_0->SetBinContent(30,0.010999999869);
  S1_MET_0->SetBinContent(31,0.00879999890833);
  S1_MET_0->SetBinContent(32,0.0080000003533);
  S1_MET_0->SetBinContent(33,0.00640000077607);
  S1_MET_0->SetBinContent(34,0.0059999990314);
  S1_MET_0->SetBinContent(35,0.00549999870092);
  S1_MET_0->SetBinContent(36,0.00380000053789);
  S1_MET_0->SetBinContent(37,0.00260000023818);
  S1_MET_0->SetBinContent(38,0.00389999912369);
  S1_MET_0->SetBinContent(39,0.0020999999077);
  S1_MET_0->SetBinContent(40,0.0020999999077);
  S1_MET_0->SetBinContent(41,0.0021999999738);
  S1_MET_0->SetBinContent(42,0.00150000000456);
  S1_MET_0->SetBinContent(43,0.00129999987237);
  S1_MET_0->SetBinContent(44,0.00160000007066);
  S1_MET_0->SetBinContent(45,0.000999999920804);
  S1_MET_0->SetBinContent(46,0.00080000003533);
  S1_MET_0->SetBinContent(47,0.000900000101425);
  S1_MET_0->SetBinContent(48,0.000400000017665);
  S1_MET_0->SetBinContent(49,0.00080000003533);
  S1_MET_0->SetBinContent(50,0.00050000008376);
  S1_MET_0->SetBinContent(51,0.00760000107578); // overflow
  S1_MET_0->SetEntries(10000);
  // Style
  S1_MET_0->SetLineColor(9);
  S1_MET_0->SetLineStyle(1);
  S1_MET_0->SetLineWidth(1);
  S1_MET_0->SetFillColor(0);
  S1_MET_0->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S1_MET_1 = new TH1F("S1_MET_1","S1_MET_1",50,0.0,500.0);
  // Content
  S1_MET_1->SetBinContent(0,0.0); // underflow
  S1_MET_1->SetBinContent(1,0.00330000045866);
  S1_MET_1->SetBinContent(2,0.0101999996234);
  S1_MET_1->SetBinContent(3,0.0166000008867);
  S1_MET_1->SetBinContent(4,0.0233999989909);
  S1_MET_1->SetBinContent(5,0.0268000029773);
  S1_MET_1->SetBinContent(6,0.0303000030899);
  S1_MET_1->SetBinContent(7,0.0350000011265);
  S1_MET_1->SetBinContent(8,0.0380000082721);
  S1_MET_1->SetBinContent(9,0.0411000090767);
  S1_MET_1->SetBinContent(10,0.0408000034279);
  S1_MET_1->SetBinContent(11,0.0447000028485);
  S1_MET_1->SetBinContent(12,0.0435000049246);
  S1_MET_1->SetBinContent(13,0.0460999880907);
  S1_MET_1->SetBinContent(14,0.0478000036532);
  S1_MET_1->SetBinContent(15,0.0460999880907);
  S1_MET_1->SetBinContent(16,0.0431000056166);
  S1_MET_1->SetBinContent(17,0.0466000057293);
  S1_MET_1->SetBinContent(18,0.0401999921302);
  S1_MET_1->SetBinContent(19,0.0389000005471);
  S1_MET_1->SetBinContent(20,0.0401999921302);
  S1_MET_1->SetBinContent(21,0.0331999919049);
  S1_MET_1->SetBinContent(22,0.0330999982457);
  S1_MET_1->SetBinContent(23,0.0323999932889);
  S1_MET_1->SetBinContent(24,0.029500004474);
  S1_MET_1->SetBinContent(25,0.029900003782);
  S1_MET_1->SetBinContent(26,0.0253999930636);
  S1_MET_1->SetBinContent(27,0.0212000003299);
  S1_MET_1->SetBinContent(28,0.0198999988782);
  S1_MET_1->SetBinContent(29,0.0133000004281);
  S1_MET_1->SetBinContent(30,0.01010000103);
  S1_MET_1->SetBinContent(31,0.00750000059384);
  S1_MET_1->SetBinContent(32,0.0070000002253);
  S1_MET_1->SetBinContent(33,0.00540000052625);
  S1_MET_1->SetBinContent(34,0.00420000013518);
  S1_MET_1->SetBinContent(35,0.00290000115069);
  S1_MET_1->SetBinContent(36,0.00319999939809);
  S1_MET_1->SetBinContent(37,0.00199999999388);
  S1_MET_1->SetBinContent(38,0.00189999992017);
  S1_MET_1->SetBinContent(39,0.00189999992017);
  S1_MET_1->SetBinContent(40,0.000999999996941);
  S1_MET_1->SetBinContent(41,0.00150000011877);
  S1_MET_1->SetBinContent(42,0.000899999923232);
  S1_MET_1->SetBinContent(43,0.00070000002253);
  S1_MET_1->SetBinContent(44,0.00129999997135);
  S1_MET_1->SetBinContent(45,0.000999999996941);
  S1_MET_1->SetBinContent(46,0.00070000002253);
  S1_MET_1->SetBinContent(47,0.000500000121828);
  S1_MET_1->SetBinContent(48,0.000299999974411);
  S1_MET_1->SetBinContent(49,0.00070000002253);
  S1_MET_1->SetBinContent(50,0.000199999999388);
  S1_MET_1->SetBinContent(51,0.00450000084974); // overflow
  S1_MET_1->SetEntries(10000);
  // Style
  S1_MET_1->SetLineColor(46);
  S1_MET_1->SetLineStyle(1);
  S1_MET_1->SetLineWidth(1);
  S1_MET_1->SetFillColor(0);
  S1_MET_1->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S1_MET_2 = new TH1F("S1_MET_2","S1_MET_2",50,0.0,500.0);
  // Content
  S1_MET_2->SetBinContent(0,0.0); // underflow
  S1_MET_2->SetBinContent(1,0.00210000056215);
  S1_MET_2->SetBinContent(2,0.00789999972402);
  S1_MET_2->SetBinContent(3,0.0167000006453);
  S1_MET_2->SetBinContent(4,0.0172000031698);
  S1_MET_2->SetBinContent(5,0.0223000038178);
  S1_MET_2->SetBinContent(6,0.0285999937897);
  S1_MET_2->SetBinContent(7,0.0325999972512);
  S1_MET_2->SetBinContent(8,0.0344000063397);
  S1_MET_2->SetBinContent(9,0.0415000003509);
  S1_MET_2->SetBinContent(10,0.0459999979694);
  S1_MET_2->SetBinContent(11,0.0417000013607);
  S1_MET_2->SetBinContent(12,0.0457000048222);
  S1_MET_2->SetBinContent(13,0.0434999937141);
  S1_MET_2->SetBinContent(14,0.0448000086455);
  S1_MET_2->SetBinContent(15,0.0470000030185);
  S1_MET_2->SetBinContent(16,0.045900005832);
  S1_MET_2->SetBinContent(17,0.0427999985472);
  S1_MET_2->SetBinContent(18,0.0440999967435);
  S1_MET_2->SetBinContent(19,0.0434999937141);
  S1_MET_2->SetBinContent(20,0.0446000076357);
  S1_MET_2->SetBinContent(21,0.0400000011447);
  S1_MET_2->SetBinContent(22,0.0346999994869);
  S1_MET_2->SetBinContent(23,0.0338999954475);
  S1_MET_2->SetBinContent(24,0.0327000061237);
  S1_MET_2->SetBinContent(25,0.025999997397);
  S1_MET_2->SetBinContent(26,0.0249999923479);
  S1_MET_2->SetBinContent(27,0.0183999924937);
  S1_MET_2->SetBinContent(28,0.0172999953072);
  S1_MET_2->SetBinContent(29,0.0138999998957);
  S1_MET_2->SetBinContent(30,0.0124000006896);
  S1_MET_2->SetBinContent(31,0.0085999999114);
  S1_MET_2->SetBinContent(32,0.00529999998432);
  S1_MET_2->SetBinContent(33,0.00410000061938);
  S1_MET_2->SetBinContent(34,0.0060000001717);
  S1_MET_2->SetBinContent(35,0.00359999976832);
  S1_MET_2->SetBinContent(36,0.00359999976832);
  S1_MET_2->SetBinContent(37,0.00370000027323);
  S1_MET_2->SetBinContent(38,0.00280000074953);
  S1_MET_2->SetBinContent(39,0.00240000040338);
  S1_MET_2->SetBinContent(40,0.00140000004006);
  S1_MET_2->SetBinContent(41,0.0013000000372);
  S1_MET_2->SetBinContent(42,0.00160000004579);
  S1_MET_2->SetBinContent(43,0.000700000020032);
  S1_MET_2->SetBinContent(44,0.00060000001717);
  S1_MET_2->SetBinContent(45,0.00110000003148);
  S1_MET_2->SetBinContent(46,0.000700000020032);
  S1_MET_2->SetBinContent(47,0.00100000002862);
  S1_MET_2->SetBinContent(48,0.000300000008585);
  S1_MET_2->SetBinContent(49,0.000500000014308);
  S1_MET_2->SetBinContent(50,0.000500000014308);
  S1_MET_2->SetBinContent(51,0.00300000008585); // overflow
  S1_MET_2->SetEntries(10000);
  // Style
  S1_MET_2->SetLineColor(1);
  S1_MET_2->SetLineStyle(1);
  S1_MET_2->SetLineWidth(1);
  S1_MET_2->SetFillColor(0);
  S1_MET_2->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S1_MET_3 = new TH1F("S1_MET_3","S1_MET_3",50,0.0,500.0);
  // Content
  S1_MET_3->SetBinContent(0,0.0); // underflow
  S1_MET_3->SetBinContent(1,0.003199999636);
  S1_MET_3->SetBinContent(2,0.00939999924212);
  S1_MET_3->SetBinContent(3,0.0138000001946);
  S1_MET_3->SetBinContent(4,0.0205999938167);
  S1_MET_3->SetBinContent(5,0.023899994116);
  S1_MET_3->SetBinContent(6,0.0300999987038);
  S1_MET_3->SetBinContent(7,0.0349999996513);
  S1_MET_3->SetBinContent(8,0.0397000025935);
  S1_MET_3->SetBinContent(9,0.0412000042391);
  S1_MET_3->SetBinContent(10,0.0462000041893);
  S1_MET_3->SetBinContent(11,0.0470999952133);
  S1_MET_3->SetBinContent(12,0.0453999955623);
  S1_MET_3->SetBinContent(13,0.045799991573);
  S1_MET_3->SetBinContent(14,0.0461000051866);
  S1_MET_3->SetBinContent(15,0.045799991573);
  S1_MET_3->SetBinContent(16,0.0471999942159);
  S1_MET_3->SetBinContent(17,0.0445000045383);
  S1_MET_3->SetBinContent(18,0.044900000549);
  S1_MET_3->SetBinContent(19,0.0396000035908);
  S1_MET_3->SetBinContent(20,0.0327000059843);
  S1_MET_3->SetBinContent(21,0.0312000043387);
  S1_MET_3->SetBinContent(22,0.032500007979);
  S1_MET_3->SetBinContent(23,0.0265000013965);
  S1_MET_3->SetBinContent(24,0.0268999974072);
  S1_MET_3->SetBinContent(25,0.0199000007981);
  S1_MET_3->SetBinContent(26,0.0212000044383);
  S1_MET_3->SetBinContent(27,0.0182000011471);
  S1_MET_3->SetBinContent(28,0.0153999991823);
  S1_MET_3->SetBinContent(29,0.0141999995264);
  S1_MET_3->SetBinContent(30,0.0119999998804);
  S1_MET_3->SetBinContent(31,0.0101000005636);
  S1_MET_3->SetBinContent(32,0.00880000024443);
  S1_MET_3->SetBinContent(33,0.00799999992029);
  S1_MET_3->SetBinContent(34,0.00499999995018);
  S1_MET_3->SetBinContent(35,0.00619999960611);
  S1_MET_3->SetBinContent(36,0.00460000061839);
  S1_MET_3->SetBinContent(37,0.00530000027931);
  S1_MET_3->SetBinContent(38,0.00369999963102);
  S1_MET_3->SetBinContent(39,0.003199999636);
  S1_MET_3->SetBinContent(40,0.00260000063832);
  S1_MET_3->SetBinContent(41,0.00280000030421);
  S1_MET_3->SetBinContent(42,0.00239999931186);
  S1_MET_3->SetBinContent(43,0.00159999998406);
  S1_MET_3->SetBinContent(44,0.00189999931685);
  S1_MET_3->SetBinContent(45,0.00129999998705);
  S1_MET_3->SetBinContent(46,0.00119999998804);
  S1_MET_3->SetBinContent(47,0.000899999991033);
  S1_MET_3->SetBinContent(48,0.000699999993026);
  S1_MET_3->SetBinContent(49,0.000999999990037);
  S1_MET_3->SetBinContent(50,0.000799999992029);
  S1_MET_3->SetBinContent(51,0.00769999959117); // overflow
  S1_MET_3->SetEntries(10000);
  // Style
  S1_MET_3->SetLineColor(8);
  S1_MET_3->SetLineStyle(1);
  S1_MET_3->SetLineWidth(1);
  S1_MET_3->SetFillColor(0);
  S1_MET_3->SetFillStyle(1001);
  // Creating a new THStack
  THStack* stack = new THStack("mystack_2","mystack");
  stack->Add(S1_MET_0);
  stack->Add(S1_MET_1);
  stack->Add(S1_MET_2);
  stack->Add(S1_MET_3);
  stack->Draw("nostack");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("Events  ( scaled to one )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("#slash{E}_{T} (GeV) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(0);

  // Creating a TLegend
  TLegend* legend = new TLegend(.73,.5,.97,.95);
  legend->AddEntry(S1_MET_0,"new_delphes");
  legend->AddEntry(S1_MET_1,"new_MG5");
  legend->AddEntry(S1_MET_2,"old_MG5");
  legend->AddEntry(S1_MET_3,"old_delphes");
  legend->SetFillColor(0);
  legend->SetTextSize(0.05);
  legend->SetTextFont(22);
  legend->SetY1(TMath::Max(0.15,0.97-0.10*legend->GetListOfPrimitives()->GetSize()));
  legend->Draw();

  // Saving the image
  canvas->SaveAs("/home/user1/Desktop/Root files/genHist_MET.png");

}
