// Ejercicio 13.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned short int a = 8, b = 24, swap;
	cout << "a tiene  " << a << " y b tiene " << b << "\n";
	swap = a; a = b; b = swap;
	cout << "a tiene " << a << " y b tiene " << b << "\n";
	system("pause");
    return 0;
}

