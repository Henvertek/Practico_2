// Ejercicio 26.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned short int N;
	unsigned short int amount = 240;
	float rate = 2;
	cout << "12 empleados actualmente digitan 240 paginas.\n";
	cout << "Ingrese la cantidad de empleados\n>>>";
	cin >> N;
	cout << N << " empleados de un juzgado digitarian " << amount / 12 * N * rate << " paginas diarias si trabajaran " << rate << " veces la cantidad de horas diarias.\n";
	system("pause");
  return 0;
}

