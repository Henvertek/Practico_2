// Ejercicio 23.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const double PI = 3.14159265358;
	cout << "Ingrese el nombre del cilindro\n>>>";
	string name;
	cin >> name;
	float h;
	cout << "Cual es su altura?\n>>>";
	cin >> h;
	cout << "Cual es su radio?\n>>>";
	float r;
	cin >> r;
	cout << "El cilindro " << name << " tiene " << 2 * PI * r * r + r * (2 * PI * r) << " de area y " << PI * r * r * h << " de volumen.\n";
	system("pause");
    return 0;
}

