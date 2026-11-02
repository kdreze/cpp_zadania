#pragma once
#include <iostream>
#include <string>

using namespace std;

class Transcription {
private:
	string dnaSequence;
	string rnaSequence;

public:
	Transcription() = default;
	void setDNA(const string& dna);
	void transcribe();
	void printRNA() const;
};