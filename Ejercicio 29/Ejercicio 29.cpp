// Ejercicio 29.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

float module(double a, double b) {
	while (a >= b) {
		a -= b;
	}
	return a;
}

int main()
{
	float price, payment, change;
	unsigned short int totalCoins = 0, totalBills = 0;
	unsigned short int bills[9] = { 2, 5, 10, 20, 50, 100, 200, 500, 1000 };
	float coins[6] = { 0.01, 0.05, 0.10, 0.25, 0.50, 1.00 };
	cout << "Cual es el total a pagar?\n>>> $";
	cin >> price;
	cout << "\nCon cuanto va a pagar?\n>>> $";
	cin >> payment;
	change = payment - price;
	if (change < 0) {
		cout << "Disculpe, pero no puede pagar con $" << payment << ".\nFaltan $" << -change << ", los puede pagar con, por ejemplo:\n";
		change = -change;
	}
	else cout << "\nSu vuelto es de $" << change << " y lo recibira en:\n";

	for (int i = 8; i >= 0 && change >= 2; i--) {
		int amount = change / bills[i];
		totalBills += amount;
		if (amount) {
			cout << amount << " billete";
			if (amount != 1)
				cout << "s";
			cout << " de $" << bills[i] << endl;
			change = module(change, bills[i]);
		}
	}
	cout << endl;
	for (int i = 5; i >= 0 && change > 0; i--) {
		int amount = change / coins[i];
		totalCoins += amount;
		if (amount) {
			cout << amount << " moneda";
			if (amount != 1) cout << "s";
			cout << " de ";
			if (coins[i] == 1)
				cout << "1 peso\n";
			else {
				cout << coins[i] * 100 << " centavo";
				if (coins[i] * 100 > 1)
					cout << "s";
				cout << endl;
			}
			change = module(change, coins[i]);
		}
	}
	cout << "\nEn total, seran " << totalBills << " billetes y " << totalCoins << " monedas.\n\n";
	system("pause");
  return 0;
}

