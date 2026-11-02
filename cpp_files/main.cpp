#include <iostream>
#include "zad1.h"
#include "zad2.h"
#include "zad3.h"
#include "zad4.h"

using namespace std;

int main() {
	// Zad 1: Nucleotide Count
	Sequence mySeq;
	string s;

	cout << "Enter a DNA sequence: ";
	cin >> s;
	mySeq.setSequence(s);
	cout << "Nucleotide counts (A C G T): ";
	mySeq.countNucleotides();

	// Zad 2: Transcription
	Transcription myTrans;
	string t;
	cout << "Enter a DNA sequence: ";
	cin >> t;
	myTrans.setDNA(t);
	myTrans.transcribe();
	cout << "RNA sequence: ";
	myTrans.printRNA();

	// Zad 3: Complementing a Strand of DNA
	ReverseComplement myRevComp;
	string inputDNA;
	cout << "Enter a DNA sequence: ";
	cin >> inputDNA;
	myRevComp.setDNA(inputDNA);
	myRevComp.doReverseComplement();
	cout << "Reverse complement: ";
	myRevComp.printResult();

	// Zad 4: Rabbits and Recurrence Relations
	Rabbits myRabbits;
	int months, pairs;
	cout << "Enter number of months: ";
	cin >> months;
	cout << "Enter number of pairs produced by each pair: ";
	cin >> pairs;
	long long totalRabbits = myRabbits.countRabbits(months, pairs);
	cout << "Total rabbits: " << totalRabbits << endl;
	return 0;
}