// Ejercicio 14.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string name;
	//char name[15];
	cout << "Introduzca su nombre:\n>>> ";
	getline(cin, name);
	//cin >> name;
	cout << "Cuantas horas regulares ha trabajado hoy?\n>>> ";
	unsigned short int hours;
	cin >> hours;
	cout << "Y cuantas horas extras ha hecho hoy?\n>>> ";
	unsigned short int extras;
	cin >> extras;
	cout << "Buenas tardes, " << name << "!\n";
	float total = hours * 88.5 + extras * 137;
	cout << "El monto bruto a cobrar es de $" << total << "\n\nExiste una retencion del 7.5%, que equivale a " << total * .075 << ".\nEl monto neto a cobrar es de " << total * .925 << "\n>>> ";
	system("pause");
    return 0;
}

