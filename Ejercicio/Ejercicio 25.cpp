// Ejercicio.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void initialize(short int *a, short int *b, short int *c) {
	*a = 1;
	*b = 0;
	*c = 2;
}

int main()
{
	short int A = 1;
	short int B = 0;
	short int C = 2;
	cout << "a.  X = " << (A++) + (--B) + C / 2;
	initialize(&A, &B, &C);
	cout << "\nb.  X = " << (++A) + (B--) + C / 2;
	initialize(&A, &B, &C);
	cout << "\nc.  X = " << (A++) - (--C) + (++A);
	initialize(&A, &B, &C);
	cout << "\nd.  X = " << (++A) - (--C) + (A++);
	initialize(&A, &B, &C);
	cout << "\nd.  X = " << ((++B) + (++C)) / 2 << "\n";

	system("pause");
    return 0;
}

