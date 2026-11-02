#include "zad2.h"
using namespace std;

void Transcription::setDNA(const string& dna) {
	dnaSequence = dna;
}

void Transcription::transcribe() {
	rnaSequence = dnaSequence;
	for (char& nt : rnaSequence) {
		if (nt == 'T') {
			nt = 'U';
		}
	}
}

void Transcription::printRNA() const {
	cout << rnaSequence << endl;
}