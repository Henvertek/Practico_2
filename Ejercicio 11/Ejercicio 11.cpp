// Ejercicio 11.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(){
	float squares[5] = { 1.00, 1.41, 1.73, 2.00, 2.23 };
	cout << "N         Raiz Cuadrada \n-----------------------\n";

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "         " << squares[i] << "\n";

	}

	system("pause");
    return 0;
}

