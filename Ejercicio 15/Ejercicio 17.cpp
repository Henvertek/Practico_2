// Ejercicio 15.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float a, b, c;
	cout << "ingrese 3 numeros\n>>>";
	cin >> a >> b >> c;
	cout << "Promedio: " << (a + b + c) / 3 << "\n";
	system("pause");
    return 0;
}

