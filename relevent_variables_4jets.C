#include <iostream>
#include "TFile.h"
#include "TTree.h"
#include <iomanip>
#include <fstream>
using namespace std;

void DataToTxt(const char *filename, const char *output){

  TFile *file=new TFile(filename); // opens the root file  
  TTree *tree=(TTree*)file->Get("Delphes"); // creates the TTree object
  //tree->Scan(); prints the content on the screen

  Float_t val[64];   //create variables of the same type as the branches you want to access
  // Declare Array of size "Length" corresponging to the entries

  ofstream myfile;
  myfile.open (output); //output the file as inputted at start

	// Make Header for each column, printing header according to leaf name and entry 

  // Branch: Missing ET
  myfile << setw(5) << "MissingET.MET"<<",";
  myfile << setw(5) << "MissingET.Eta"<<",";
  myfile << setw(5) << "MissingET.Phi"<<",";
  // Branch: Scalar HT
  myfile << setw(5) << "ScalarHT.HT"<<",";
  // Branch: Electron
  myfile << setw(5) << "Electron.PT"<<",";
  myfile << setw(5) << "Electron.Eta"<<",";
  myfile << setw(5) << "Electron.Phi"<<",";
  myfile << setw(5) << "Electron.T"<<",";
  // Branch: Muon
  myfile << setw(5) << "Muon.PT"<<",";
  myfile << setw(5) << "Muon.Eta"<<",";
  myfile << setw(5) << "Muon.Phi"<<",";
  myfile << setw(5) << "Muon.T"<<",";
  // Branch: Jet
  myfile << setw(5) << "Jet.PT"<<"_1"<<","; //PT
  myfile << setw(5) << "Jet.PT"<<"_2"<<",";
  myfile << setw(5) << "Jet.PT"<<"_3"<<",";
  myfile << setw(5) << "Jet.PT"<<"_4"<<",";
  myfile << setw(5) << "Jet.Eta"<<"_1"<<","; //Eta
  myfile << setw(5) << "Jet.Eta"<<"_2"<<",";
  myfile << setw(5) << "Jet.Eta"<<"_3"<<",";
  myfile << setw(5) << "Jet.Eta"<<"_4"<<",";
  myfile << setw(5) << "Jet.Phi"<<"_1"<<","; //Phi
  myfile << setw(5) << "Jet.Phi"<<"_2"<<",";
  myfile << setw(5) << "Jet.Phi"<<"_3"<<",";
  myfile << setw(5) << "Jet.Phi"<<"_4"<<",";
  myfile << setw(5) << "Jet.T"<<"_1"<<","; //T
  myfile << setw(5) << "Jet.T"<<"_2"<<",";
  myfile << setw(5) << "Jet.T"<<"_3"<<",";
  myfile << setw(5) << "Jet.T"<<"_4"<<",";
  myfile << setw(5) << "Jet.Mass"<<"_1"<<","; //Mass
  myfile << setw(5) << "Jet.Mass"<<"_2"<<",";
  myfile << setw(5) << "Jet.Mass"<<"_3"<<",";
  myfile << setw(5) << "Jet.Mass"<<"_4"<<",";
  myfile << setw(5) << "Jet.DeltaEta"<<"_1"<<","; //DeltaEta
  myfile << setw(5) << "Jet.DeltaEta"<<"_2"<<",";
  myfile << setw(5) << "Jet.DeltaEta"<<"_3"<<",";
  myfile << setw(5) << "Jet.DeltaEta"<<"_4"<<",";
  myfile << setw(5) << "Jet.DeltaPhi"<<"_1"<<","; //DeltaPhi
  myfile << setw(5) << "Jet.DeltaPhi"<<"_2"<<",";
  myfile << setw(5) << "Jet.DeltaPhi"<<"_3"<<",";
  myfile << setw(5) << "Jet.DeltaPhi"<<"_4"<<",";
  myfile << setw(5) << "Jet.Flavor"<<"_1"<<","; //Flavor
  myfile << setw(5) << "Jet.Flavor"<<"_2"<<",";
  myfile << setw(5) << "Jet.Flavor"<<"_3"<<",";
  myfile << setw(5) << "Jet.Flavor"<<"_4"<<",";
  myfile << setw(5) << "Jet.FlavorAlgo"<<"_1"<<","; //FlavorAlgo
  myfile << setw(5) << "Jet.FlavorAlgo"<<"_2"<<",";
  myfile << setw(5) << "Jet.FlavorAlgo"<<"_3"<<",";
  myfile << setw(5) << "Jet.FlavorAlgo"<<"_4"<<",";
  myfile << setw(5) << "Jet.FlavorPhys"<<"_1"<<","; //FlavorPhys
  myfile << setw(5) << "Jet.FlavorPhys"<<"_2"<<",";
  myfile << setw(5) << "Jet.FlavorPhys"<<"_3"<<",";
  myfile << setw(5) << "Jet.FlavorPhys"<<"_4"<<",";
  myfile << setw(5) << "Jet.BTag"<<"_1"<<","; //BTag
  myfile << setw(5) << "Jet.BTag"<<"_2"<<",";
  myfile << setw(5) << "Jet.BTag"<<"_3"<<",";
  myfile << setw(5) << "Jet.BTag"<<"_4"<<",";
  myfile << setw(5) << "Jet.BTagAlgo"<<"_1"<<","; //BTagAlgo
  myfile << setw(5) << "Jet.BTagAlgo"<<"_2"<<",";
  myfile << setw(5) << "Jet.BTagAlgo"<<"_3"<<",";
  myfile << setw(5) << "Jet.BTagAlgo"<<"_4"<<",";
  myfile << setw(5) << "Jet.BTagPhys"<<"_1"<<","; //BTagPhys
  myfile << setw(5) << "Jet.BTagPhys"<<"_2"<<",";
  myfile << setw(5) << "Jet.BTagPhys"<<"_3"<<",";
  myfile << setw(5) << "Jet.BTagPhys"<<"_4";
  myfile << '\n'; 

  Int_t n_events=(Int_t)tree->GetEntries(); // define vector of number of events
  for (Int_t i=0;i<n_events;i++){
    // loop over the tree 
    tree->GetEntry(i);
    
	// Get values for each leaf(variable)
    // MET and SHT
    val[0] = tree->GetLeaf("MissingET.MET")->GetValue(0); 
    val[1] = tree->GetLeaf("MissingET.Eta")->GetValue(0);
    val[2] = tree->GetLeaf("MissingET.Phi")->GetValue(0); 
    val[3] = tree->GetLeaf("ScalarHT.HT")->GetValue(0); 
    // Electrons 
    val[4] = tree->GetLeaf("Electron.PT")->GetValue(0);
    val[5] = tree->GetLeaf("Electron.Eta")->GetValue(0);
    val[6] = tree->GetLeaf("Electron.Phi")->GetValue(0);
    val[7] = tree->GetLeaf("Electron.T")->GetValue(0);
    // Muons
    val[8] = tree->GetLeaf("Muon.PT")->GetValue(0); 
    val[9] = tree->GetLeaf("Muon.Eta")->GetValue(0);
    val[10] = tree->GetLeaf("Muon.Phi")->GetValue(0);
    val[11] = tree->GetLeaf("Muon.T")->GetValue(0);
    // Jets
    val[12] = tree->GetLeaf("Jet.PT")->GetValue(0);
    val[13] = tree->GetLeaf("Jet.PT")->GetValue(1); 
    val[14] = tree->GetLeaf("Jet.PT")->GetValue(2); 
    val[15] = tree->GetLeaf("Jet.PT")->GetValue(3);  
    val[16] = tree->GetLeaf("Jet.Eta")->GetValue(0); 
    val[17] = tree->GetLeaf("Jet.Eta")->GetValue(1); 
    val[18] = tree->GetLeaf("Jet.Eta")->GetValue(2); 
    val[19] = tree->GetLeaf("Jet.Eta")->GetValue(3); 
    val[20] = tree->GetLeaf("Jet.Phi")->GetValue(0);
    val[21] = tree->GetLeaf("Jet.Phi")->GetValue(1); 
    val[22] = tree->GetLeaf("Jet.Phi")->GetValue(2); 
    val[23] = tree->GetLeaf("Jet.Phi")->GetValue(3);  
    val[24] = tree->GetLeaf("Jet.T")->GetValue(0); 
    val[25] = tree->GetLeaf("Jet.T")->GetValue(1); 
    val[26] = tree->GetLeaf("Jet.T")->GetValue(2); 
    val[27] = tree->GetLeaf("Jet.T")->GetValue(3); 
    val[28] = tree->GetLeaf("Jet.Mass")->GetValue(0); 
    val[29] = tree->GetLeaf("Jet.Mass")->GetValue(1); 
    val[30] = tree->GetLeaf("Jet.Mass")->GetValue(2); 
    val[31] = tree->GetLeaf("Jet.Mass")->GetValue(3); 
    val[32] = tree->GetLeaf("Jet.DeltaEta")->GetValue(0); 
    val[33] = tree->GetLeaf("Jet.DeltaEta")->GetValue(1); 
    val[34] = tree->GetLeaf("Jet.DeltaEta")->GetValue(2); 
    val[35] = tree->GetLeaf("Jet.DeltaEta")->GetValue(3); 
    val[36] = tree->GetLeaf("Jet.DeltaPhi")->GetValue(0);
    val[37] = tree->GetLeaf("Jet.DeltaPhi")->GetValue(1);
    val[38] = tree->GetLeaf("Jet.DeltaPhi")->GetValue(2);
    val[39] = tree->GetLeaf("Jet.DeltaPhi")->GetValue(3); 
    val[40] = tree->GetLeaf("Jet.Flavor")->GetValue(0);
    val[41] = tree->GetLeaf("Jet.Flavor")->GetValue(1);
    val[42] = tree->GetLeaf("Jet.Flavor")->GetValue(2);
    val[43] = tree->GetLeaf("Jet.Flavor")->GetValue(3);
    val[44] = tree->GetLeaf("Jet.FlavorAlgo")->GetValue(0); 
    val[45] = tree->GetLeaf("Jet.FlavorAlgo")->GetValue(1); 
    val[46] = tree->GetLeaf("Jet.FlavorAlgo")->GetValue(2); 
    val[47] = tree->GetLeaf("Jet.FlavorAlgo")->GetValue(3); 
    val[48] = tree->GetLeaf("Jet.FlavorPhys")->GetValue(0); 
    val[49] = tree->GetLeaf("Jet.FlavorPhys")->GetValue(1); 
    val[50] = tree->GetLeaf("Jet.FlavorPhys")->GetValue(2); 
    val[51] = tree->GetLeaf("Jet.FlavorPhys")->GetValue(3); 
    val[52] = tree->GetLeaf("Jet.BTag")->GetValue(0); 
    val[53] = tree->GetLeaf("Jet.BTag")->GetValue(1); 
    val[54] = tree->GetLeaf("Jet.BTag")->GetValue(2); 
    val[55] = tree->GetLeaf("Jet.BTag")->GetValue(3); 
    val[56] = tree->GetLeaf("Jet.BTagAlgo")->GetValue(0); 
    val[57] = tree->GetLeaf("Jet.BTagAlgo")->GetValue(1); 
    val[58] = tree->GetLeaf("Jet.BTagAlgo")->GetValue(2); 
    val[59] = tree->GetLeaf("Jet.BTagAlgo")->GetValue(3); 
    val[60] = tree->GetLeaf("Jet.BTagPhys")->GetValue(0); 
    val[61] = tree->GetLeaf("Jet.BTagPhys")->GetValue(1); 
    val[62] = tree->GetLeaf("Jet.BTagPhys")->GetValue(2); 
    val[63] = tree->GetLeaf("Jet.BTagPhys")->GetValue(3); 

	//write to file
    myfile << val[0] <<",";
    myfile << setw(12) << val[1] <<",";
    myfile << setw(12) << val[2] <<",";
    myfile << setw(12) << val[3] <<",";
    myfile << setw(12) << val[4] <<",";
    myfile << setw(12) << val[5] <<",";
    myfile << setw(12) << val[6] <<",";
    myfile << setw(12) << val[7] <<",";
    myfile << setw(12) << val[8] <<",";
    myfile << setw(12) << val[9] <<",";
    myfile << setw(12) << val[10] <<",";
    myfile << setw(12) << val[11] <<",";
    myfile << setw(12) << val[12] <<",";
    myfile << setw(12) << val[13] <<",";
    myfile << setw(12) << val[14] <<",";
    myfile << setw(12) << val[15] <<",";
    myfile << setw(12) << val[16] <<",";
    myfile << setw(12) << val[17] <<",";
    myfile << setw(12) << val[18] <<",";
    myfile << setw(12) << val[19] <<",";
    myfile << setw(12) << val[20] <<",";
    myfile << setw(12) << val[21] <<",";
    myfile << setw(12) << val[22] <<",";
    myfile << setw(12) << val[23] <<",";
    myfile << setw(12) << val[24] <<",";
    myfile << setw(12) << val[25] <<",";
    myfile << setw(12) << val[26] <<",";
    myfile << setw(12) << val[27] <<",";
    myfile << setw(12) << val[28] <<",";
    myfile << setw(12) << val[29] <<",";
    myfile << setw(12) << val[30] <<",";
    myfile << setw(12) << val[31] <<",";
    myfile << setw(12) << val[32] <<",";
    myfile << setw(12) << val[33] <<",";
    myfile << setw(12) << val[34] <<",";
    myfile << setw(12) << val[35] <<",";
    myfile << setw(12) << val[36] <<",";
    myfile << setw(12) << val[37] <<",";
    myfile << setw(12) << val[38] <<",";
    myfile << setw(12) << val[39] <<",";
    myfile << setw(12) << val[40] <<",";
    myfile << setw(12) << val[41] <<",";
    myfile << setw(12) << val[42] <<",";
    myfile << setw(12) << val[43] <<",";
    myfile << setw(12) << val[44] <<",";
    myfile << setw(12) << val[45] <<",";
    myfile << setw(12) << val[46] <<",";
    myfile << setw(12) << val[47] <<",";
    myfile << setw(12) << val[48] <<",";
    myfile << setw(12) << val[49] <<",";
    myfile << setw(12) << val[50] <<",";
    myfile << setw(12) << val[51] <<",";
    myfile << setw(12) << val[52] <<",";
    myfile << setw(12) << val[53] <<",";
    myfile << setw(12) << val[54] <<",";
    myfile << setw(12) << val[55] <<",";
    myfile << setw(12) << val[56] <<",";
    myfile << setw(12) << val[57] <<",";
    myfile << setw(12) << val[58] <<",";
    myfile << setw(12) << val[59] <<",";
    myfile << setw(12) << val[60] <<",";
    myfile << setw(12) << val[61] <<",";
    myfile << setw(12) << val[62] <<",";
    myfile << setw(12) << val[63];
    myfile << '\n';   
    }

  myfile.close();

}
