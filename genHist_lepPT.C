void genHist_lepPT()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo3","canvas_plotflow_tempo3",0,0,1000,500);
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
  TH1F* S2_PT_0 = new TH1F("S2_PT_0","S2_PT_0",50,0.0,500.0);
  // Content
  S2_PT_0->SetBinContent(0,0.0); // underflow
  S2_PT_0->SetBinContent(1,0.0);
  S2_PT_0->SetBinContent(2,0.055232554556);
  S2_PT_0->SetBinContent(3,0.101259693314);
  S2_PT_0->SetBinContent(4,0.109011629327);
  S2_PT_0->SetBinContent(5,0.113372092588);
  S2_PT_0->SetBinContent(6,0.10804263882);
  S2_PT_0->SetBinContent(7,0.0809108567955);
  S2_PT_0->SetBinContent(8,0.0741279112895);
  S2_PT_0->SetBinContent(9,0.0610465095545);
  S2_PT_0->SetBinContent(10,0.0557170557864);
  S2_PT_0->SetBinContent(11,0.0416666635439);
  S2_PT_0->SetBinContent(12,0.0373062002833);
  S2_PT_0->SetBinContent(13,0.0324612357923);
  S2_PT_0->SetBinContent(14,0.0222868175333);
  S2_PT_0->SetBinContent(15,0.0174418649955);
  S2_PT_0->SetBinContent(16,0.0135658910121);
  S2_PT_0->SetBinContent(17,0.011627906411);
  S2_PT_0->SetBinContent(18,0.011627906411);
  S2_PT_0->SetBinContent(19,0.00823643365802);
  S2_PT_0->SetBinContent(20,0.00532945735409);
  S2_PT_0->SetBinContent(21,0.00581395380319);
  S2_PT_0->SetBinContent(22,0.00484496090499);
  S2_PT_0->SetBinContent(23,0.00484496090499);
  S2_PT_0->SetBinContent(24,0.00484496090499);
  S2_PT_0->SetBinContent(25,0.00290697630393);
  S2_PT_0->SetBinContent(26,0.00387596920212);
  S2_PT_0->SetBinContent(27,0.00145348815197);
  S2_PT_0->SetBinContent(28,0.000484496090499);
  S2_PT_0->SetBinContent(29,0.000968992300531);
  S2_PT_0->SetBinContent(30,0.000968992300531);
  S2_PT_0->SetBinContent(31,0.000968992300531);
  S2_PT_0->SetBinContent(32,0.000968992300531);
  S2_PT_0->SetBinContent(33,0.000484496090499);
  S2_PT_0->SetBinContent(34,0.00145348815197);
  S2_PT_0->SetBinContent(35,0.0);
  S2_PT_0->SetBinContent(36,0.000968992300531);
  S2_PT_0->SetBinContent(37,0.000968992300531);
  S2_PT_0->SetBinContent(38,0.000484496090499);
  S2_PT_0->SetBinContent(39,0.0);
  S2_PT_0->SetBinContent(40,0.0);
  S2_PT_0->SetBinContent(41,0.0);
  S2_PT_0->SetBinContent(42,0.000484496090499);
  S2_PT_0->SetBinContent(43,0.000484496090499);
  S2_PT_0->SetBinContent(44,0.000484496090499);
  S2_PT_0->SetBinContent(45,0.0);
  S2_PT_0->SetBinContent(46,0.0);
  S2_PT_0->SetBinContent(47,0.0);
  S2_PT_0->SetBinContent(48,0.0);
  S2_PT_0->SetBinContent(49,0.0);
  S2_PT_0->SetBinContent(50,0.0);
  S2_PT_0->SetBinContent(51,0.000968992300531); // overflow
  S2_PT_0->SetEntries(2064);
  // Style
  S2_PT_0->SetLineColor(9);
  S2_PT_0->SetLineStyle(1);
  S2_PT_0->SetLineWidth(1);
  S2_PT_0->SetFillColor(0);
  S2_PT_0->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S2_PT_1 = new TH1F("S2_PT_1","S2_PT_1",50,0.0,500.0);
  // Content
  S2_PT_1->SetBinContent(0,0.0); // underflow
  S2_PT_1->SetBinContent(1,0.0);
  S2_PT_1->SetBinContent(2,0.0576694374884);
  S2_PT_1->SetBinContent(3,0.0986920398953);
  S2_PT_1->SetBinContent(4,0.112960757775);
  S2_PT_1->SetBinContent(5,0.106420928136);
  S2_PT_1->SetBinContent(6,0.104042810934);
  S2_PT_1->SetBinContent(7,0.0868014245498);
  S2_PT_1->SetBinContent(8,0.0731272286368);
  S2_PT_1->SetBinContent(9,0.0677764575985);
  S2_PT_1->SetBinContent(10,0.0457788368108);
  S2_PT_1->SetBinContent(11,0.039833529138);
  S2_PT_1->SetBinContent(12,0.0392390071715);
  S2_PT_1->SetBinContent(13,0.028537450427);
  S2_PT_1->SetBinContent(14,0.0231866793886);
  S2_PT_1->SetBinContent(15,0.0196195035858);
  S2_PT_1->SetBinContent(16,0.0202140255523);
  S2_PT_1->SetBinContent(17,0.0142687281471);
  S2_PT_1->SetBinContent(18,0.00713436334014);
  S2_PT_1->SetBinContent(19,0.00951248494245);
  S2_PT_1->SetBinContent(20,0.0118906065448);
  S2_PT_1->SetBinContent(21,0.00653983403966);
  S2_PT_1->SetBinContent(22,0.00475624320462);
  S2_PT_1->SetBinContent(23,0.0053507725051);
  S2_PT_1->SetBinContent(24,0.00118906065448);
  S2_PT_1->SetBinContent(25,0.00118906065448);
  S2_PT_1->SetBinContent(26,0.00297265236959);
  S2_PT_1->SetBinContent(27,0.00237812160231);
  S2_PT_1->SetBinContent(28,0.000594530327238);
  S2_PT_1->SetBinContent(29,0.000594530327238);
  S2_PT_1->SetBinContent(30,0.00118906065448);
  S2_PT_1->SetBinContent(31,0.000594530327238);
  S2_PT_1->SetBinContent(32,0.0);
  S2_PT_1->SetBinContent(33,0.000594530327238);
  S2_PT_1->SetBinContent(34,0.000594530327238);
  S2_PT_1->SetBinContent(35,0.0);
  S2_PT_1->SetBinContent(36,0.00118906065448);
  S2_PT_1->SetBinContent(37,0.00118906065448);
  S2_PT_1->SetBinContent(38,0.000594530327238);
  S2_PT_1->SetBinContent(39,0.000594530327238);
  S2_PT_1->SetBinContent(40,0.0);
  S2_PT_1->SetBinContent(41,0.0);
  S2_PT_1->SetBinContent(42,0.0);
  S2_PT_1->SetBinContent(43,0.0);
  S2_PT_1->SetBinContent(44,0.0);
  S2_PT_1->SetBinContent(45,0.0);
  S2_PT_1->SetBinContent(46,0.0);
  S2_PT_1->SetBinContent(47,0.0);
  S2_PT_1->SetBinContent(48,0.00118906065448);
  S2_PT_1->SetBinContent(49,0.0);
  S2_PT_1->SetBinContent(50,0.0);
  S2_PT_1->SetBinContent(51,0.0); // overflow
  S2_PT_1->SetEntries(1682);
  // Style
  S2_PT_1->SetLineColor(46);
  S2_PT_1->SetLineStyle(1);
  S2_PT_1->SetLineWidth(1);
  S2_PT_1->SetFillColor(0);
  S2_PT_1->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S2_PT_2 = new TH1F("S2_PT_2","S2_PT_2",50,0.0,500.0);
  // Content
  S2_PT_2->SetBinContent(0,0.0); // underflow
  S2_PT_2->SetBinContent(1,0.0202000012036);
  S2_PT_2->SetBinContent(2,0.0653999942864);
  S2_PT_2->SetBinContent(3,0.0891000047288);
  S2_PT_2->SetBinContent(4,0.10700000273);
  S2_PT_2->SetBinContent(5,0.106499991847);
  S2_PT_2->SetBinContent(6,0.0949999925705);
  S2_PT_2->SetBinContent(7,0.0834000011582);
  S2_PT_2->SetBinContent(8,0.0721000028875);
  S2_PT_2->SetBinContent(9,0.065500003157);
  S2_PT_2->SetBinContent(10,0.0493999974754);
  S2_PT_2->SetBinContent(11,0.040200001401);
  S2_PT_2->SetBinContent(12,0.0334999928);
  S2_PT_2->SetBinContent(13,0.0289000031303);
  S2_PT_2->SetBinContent(14,0.0255999948975);
  S2_PT_2->SetBinContent(15,0.0197000070559);
  S2_PT_2->SetBinContent(16,0.0180000068718);
  S2_PT_2->SetBinContent(17,0.013400000467);
  S2_PT_2->SetBinContent(18,0.0101000006018);
  S2_PT_2->SetBinContent(19,0.00959999976009);
  S2_PT_2->SetBinContent(20,0.00780000074642);
  S2_PT_2->SetBinContent(21,0.00649999922742);
  S2_PT_2->SetBinContent(22,0.00400000003949);
  S2_PT_2->SetBinContent(23,0.00489999954633);
  S2_PT_2->SetBinContent(24,0.00419999937207);
  S2_PT_2->SetBinContent(25,0.00280000069705);
  S2_PT_2->SetBinContent(26,0.00210000052279);
  S2_PT_2->SetBinContent(27,0.00210000052279);
  S2_PT_2->SetBinContent(28,0.00130000001284);
  S2_PT_2->SetBinContent(29,0.00200000001975);
  S2_PT_2->SetBinContent(30,0.00170000018414);
  S2_PT_2->SetBinContent(31,0.00120000001185);
  S2_PT_2->SetBinContent(32,0.00110000001086);
  S2_PT_2->SetBinContent(33,0.000700000006912);
  S2_PT_2->SetBinContent(34,0.000700000006912);
  S2_PT_2->SetBinContent(35,0.000900000008886);
  S2_PT_2->SetBinContent(36,0.000100000000987);
  S2_PT_2->SetBinContent(37,0.000400000003949);
  S2_PT_2->SetBinContent(38,0.000400000003949);
  S2_PT_2->SetBinContent(39,0.000100000000987);
  S2_PT_2->SetBinContent(40,0.000100000000987);
  S2_PT_2->SetBinContent(41,0.000300000002962);
  S2_PT_2->SetBinContent(42,0.000100000000987);
  S2_PT_2->SetBinContent(43,0.0);
  S2_PT_2->SetBinContent(44,0.000200000001975);
  S2_PT_2->SetBinContent(45,0.000300000002962);
  S2_PT_2->SetBinContent(46,0.000100000000987);
  S2_PT_2->SetBinContent(47,0.0);
  S2_PT_2->SetBinContent(48,0.0);
  S2_PT_2->SetBinContent(49,0.000200000001975);
  S2_PT_2->SetBinContent(50,0.000100000000987);
  S2_PT_2->SetBinContent(51,0.00100000000987); // overflow
  S2_PT_2->SetEntries(10000);
  // Style
  S2_PT_2->SetLineColor(1);
  S2_PT_2->SetLineStyle(1);
  S2_PT_2->SetLineWidth(1);
  S2_PT_2->SetFillColor(0);
  S2_PT_2->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S2_PT_3 = new TH1F("S2_PT_3","S2_PT_3",50,0.0,500.0);
  // Content
  S2_PT_3->SetBinContent(0,0.0); // underflow
  S2_PT_3->SetBinContent(1,0.0);
  S2_PT_3->SetBinContent(2,0.0440644490473);
  S2_PT_3->SetBinContent(3,0.0838540039364);
  S2_PT_3->SetBinContent(4,0.0973364128407);
  S2_PT_3->SetBinContent(5,0.102597814735);
  S2_PT_3->SetBinContent(6,0.0891154331333);
  S2_PT_3->SetBinContent(7,0.0845116757603);
  S2_PT_3->SetBinContent(8,0.0772772037887);
  S2_PT_3->SetBinContent(9,0.065932255615);
  S2_PT_3->SetBinContent(10,0.0577112759076);
  S2_PT_3->SetBinContent(11,0.0570536040837);
  S2_PT_3->SetBinContent(12,0.0379809300705);
  S2_PT_3->SetBinContent(13,0.0369944223346);
  S2_PT_3->SetBinContent(14,0.0286089973684);
  S2_PT_3->SetBinContent(15,0.0203880285822);
  S2_PT_3->SetBinContent(16,0.0207168699547);
  S2_PT_3->SetBinContent(17,0.0164419594147);
  S2_PT_3->SetBinContent(18,0.0123314695611);
  S2_PT_3->SetBinContent(19,0.0133179882181);
  S2_PT_3->SetBinContent(20,0.00690562240814);
  S2_PT_3->SetBinContent(21,0.00739888173664);
  S2_PT_3->SetBinContent(22,0.00493258782442);
  S2_PT_3->SetBinContent(23,0.00542584715292);
  S2_PT_3->SetBinContent(24,0.00591910648142);
  S2_PT_3->SetBinContent(25,0.00443932849592);
  S2_PT_3->SetBinContent(26,0.00312397119669);
  S2_PT_3->SetBinContent(27,0.00180861553562);
  S2_PT_3->SetBinContent(28,0.00312397119669);
  S2_PT_3->SetBinContent(29,0.00230187431806);
  S2_PT_3->SetBinContent(30,0.000986517564885);
  S2_PT_3->SetBinContent(31,0.00115093715903);
  S2_PT_3->SetBinContent(32,0.000822097970737);
  S2_PT_3->SetBinContent(33,0.00131535675318);
  S2_PT_3->SetBinContent(34,0.00065767837659);
  S2_PT_3->SetBinContent(35,0.000822097970737);
  S2_PT_3->SetBinContent(36,0.0);
  S2_PT_3->SetBinContent(37,0.000164419594147);
  S2_PT_3->SetBinContent(38,0.0);
  S2_PT_3->SetBinContent(39,0.000493258782442);
  S2_PT_3->SetBinContent(40,0.000328839188295);
  S2_PT_3->SetBinContent(41,0.000164419594147);
  S2_PT_3->SetBinContent(42,0.000328839188295);
  S2_PT_3->SetBinContent(43,0.0);
  S2_PT_3->SetBinContent(44,0.000328839188295);
  S2_PT_3->SetBinContent(45,0.000328839188295);
  S2_PT_3->SetBinContent(46,0.0);
  S2_PT_3->SetBinContent(47,0.0);
  S2_PT_3->SetBinContent(48,0.000164419594147);
  S2_PT_3->SetBinContent(49,0.0);
  S2_PT_3->SetBinContent(50,0.000164419594147);
  S2_PT_3->SetBinContent(51,0.000164419594147); // overflow
  S2_PT_3->SetEntries(6082);
  // Style
  S2_PT_3->SetLineColor(8);
  S2_PT_3->SetLineStyle(1);
  S2_PT_3->SetLineWidth(1);
  S2_PT_3->SetFillColor(0);
  S2_PT_3->SetFillStyle(1001);


  // Creating a new THStack
  THStack* stack = new THStack("mystack_4","mystack");
  stack->Add(S2_PT_0);
  stack->Add(S2_PT_1);
  stack->Add(S2_PT_2);
  stack->Add(S2_PT_3);
  stack->Draw("nostack");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("N. of l+ ( scaled to one )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("p_{T} [ l+ ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(0);

  // Creating a TLegend
  TLegend* legend = new TLegend(.73,.5,.97,.95);
  legend->AddEntry(S2_PT_0,"new_delphes");
  legend->AddEntry(S2_PT_1,"new_MG5");
  legend->AddEntry(S2_PT_2,"old_MG5");
  legend->AddEntry(S2_PT_3,"old_delphes");
  legend->SetFillColor(0);
  legend->SetTextSize(0.05);
  legend->SetTextFont(22);
  legend->SetY1(TMath::Max(0.15,0.97-0.10*legend->GetListOfPrimitives()->GetSize()));
  legend->Draw();

  // Saving the image
  canvas->SaveAs("/home/user1/Desktop/Root files/genHist_PT.png");

}
