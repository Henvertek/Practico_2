#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned int N = 0; 
	do {
		cout << "Ingrese un numero positivo de 5 digitos\n>>>";
		cin >> N;
	} while (N > 99999 || N < 10000);
	unsigned short int figures = 0;
	int list[10];
	for (int i = 0; N > 0; i++) {
		list[i] = N % 10;
		N /= 10;
		figures++;
	}
	for (int i = figures - 1; i >= 0; i--) {
		cout << list[i] << "\n";
	}
	system("pause");
    return 0;
}

