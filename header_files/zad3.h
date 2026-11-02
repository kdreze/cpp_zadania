#pragma once
#include <iostream>
#include <string>

using namespace std;

class ReverseComplement {
private:
	string dnaSequence;
	string complementSequence;
public:
	ReverseComplement() = default;
	void setDNA(const string& dna);
	void doReverseComplement();
	void printResult() const;
};