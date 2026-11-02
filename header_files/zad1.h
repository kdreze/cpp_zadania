#pragma once	
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Sequence
{
private:
	string sequenceData;
public:
	Sequence() = default;

	void setSequence(const string& seq);
	void countNucleotides() const;

};


