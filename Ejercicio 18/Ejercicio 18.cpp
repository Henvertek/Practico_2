// Ejercicio 18.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int h, m, s;
	cout << "Ingrese las horas\n>>>";
	cin >> h;
	cout << "\nIngrese los minutos\n>>>";
	cin >> m;
	cout << "\nIngrese los segundos\n>>>";
	cin >> s;
	cout << h * 3600 + m * 60 + s << "\n";
	system("pause");
    return 0;
}

