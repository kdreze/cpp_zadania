#include "zad3.h"
#include <algorithm>
using namespace std;

void ReverseComplement::setDNA(const string& dna) {
	dnaSequence = dna;
}

void ReverseComplement::doReverseComplement() {
	complementSequence = dnaSequence;
	for (char& nt : complementSequence) {
		switch (nt) {
		case 'A': nt = 'T'; break;
		case 'T': nt = 'A'; break;
		case 'C': nt = 'G'; break;
		case 'G': nt = 'C'; break;
		}
	}
	reverse(complementSequence.begin(), complementSequence.end());
}

void ReverseComplement::printResult() const {
	cout << complementSequence << endl;
}
