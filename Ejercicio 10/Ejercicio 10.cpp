#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	unsigned short int a = 28, b = 30, c = 31;//We store our three day options
	const char months[12][11] = {"Enero     ", "Febrero   ", "Marzo     ", "Abril     ", "Mayo      ", "Junio     ", "Julio     ", "Agosto    ", "Septiembre", "Octubre   ", "Noviembre ", "Diciembre "};//We make a list of known months
	cout << "/---+-----------+----\\\n";
	cout << "|Nro|Mes        |Dias|\n+---+-----------+----+\n";//We print column titles
	for (unsigned short int i = 0; i < 12; i++) {//For each month
		cout << "|";
		if (i < 9) cout << " ";//We add an extra space for 1-digit numbers
		cout << i + 1 << " |";//We print the month number
		cout << months[i] << " |";//We print the month name
		if (i == 1) {//If it's the second month
			cout << a << "  |\n";//We print 28 days
		}
		else if ((i % 7) % 2 == 0) cout << c << "  |\n";//Every other month will be a 31-day month
		else cout << b << "  |\n";//The rest will be 30-day months
	}
	cout << "\\---+-----------+----/";
	cout << "\n\n";
	system("pause");
	return 0;
}