#include <iostream>
#include <stdlib.h>
using namespace std;

// randomly accessing an array is demonstrably slower than sequential access

int main() {
	const int NUM = 100000;
	const int TRIALS = 1000000000 / NUM;
	auto array = new int[NUM];

	cout << "iterate thru array sequentially" << endl;
	for (int i = 0; i < TRIALS; i++) {
		for (int j = 0; j < NUM; j++) {
			array[j*1];
		}
	}
	cout << "sequential done" << endl;

	cout << "iterate thru randomly" << endl;
	for (int i = 0; i < NUM * TRIALS; i++) {
		array[rand() / NUM];
	}
	cout << "randomly done" << endl;

	delete[] array;

	return 0;
}
