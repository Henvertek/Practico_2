// Ejercicio 24.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned const int megameters = 380;
	unsigned const long int meters = megameters * 1000000;
	unsigned const long int kilometers = megameters * 1000;
	cout << "De la Tierra a la Luna hay aproximadamente " << megameters << " megametros, es decir " << kilometers << " kilometros o " << meters << " de metros.\n";
	system("pause");
    return 0;
}

