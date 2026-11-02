#include "zad1.h"
using namespace std;

void Sequence::setSequence(const string& seq) {
	sequenceData = seq;
}

void Sequence::countNucleotides() const {
	int countA = 0, countC = 0, countT = 0, countG = 0;
	for (char nt : sequenceData) {
		switch (nt) {
		case 'A': countA++; break;
		case 'C': countC++; break;
		case 'T': countT++; break;
		case 'G': countG++; break;
		}
	}
	cout << countA << " " << countC << " " << countG << " " << countT << endl;
}

