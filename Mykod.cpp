#include <iostream>
#include <iomanip>
#include <math.h>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float Z, Dobchik, y;
	cout << "Ââåä³òü ó\ny=";
	cin >> y;
	Dobchik = 1;
	if (pow(y, 2) + 5 == 0) {
		cout << "ÏÎÌÈËÊÀ";
	}
	else {
		for (int n = 1; n <= 10; n++) {
			Dobchik *= n;
		}
		Z = (y + Dobchik + 2) / (pow(y, 2) + 5);
		cout << "Z=" << Z;
		cout << "Ê³íåöü";
	}
}
//hello