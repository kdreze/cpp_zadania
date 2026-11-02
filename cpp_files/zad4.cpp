#include "zad4.h"
using namespace std;

long long Rabbits::countRabbits(int months, int pairs) {
	if (months == 1 || months == 2) {
		return 1;
	}
	long long prev2 = 1;
	long long prev1 = 1;
	long long current = 0;

	for (int i = 3; i <= months; ++i) {
		current = prev1 + prev2 * pairs;
		prev2 = prev1;
		prev1 = current;
	}
	return current;
}
