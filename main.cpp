#include <iostream>
#include "estruturas/Vetor.h"
#include "algoritmos/InsertionSort.h"
using namespace std;

int main() {
	// bo depurar as parada na main

	vetor<int> vet;
	vet.push_back(3);
	vet.push_back(1);
	vet.push_back(2);
	vet.push_back(5);
	vet.push_back(4);

	inSort(vet.begin(), vet.end());
	for (int i : vet) cout << i << ' ';
	cout << '\n';

	return 0;
}
