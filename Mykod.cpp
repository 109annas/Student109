#include <iostream>
#include <iomanip>
#include <math.h>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float Z, dobchik, y;
	cout << "Ââåä³òü ó\ny=";
	cin >> y;
	dobchik = 1;
	if (pow(y, 2) + 5 == 0) {
		cout << "ÏÎÌÈËÊÀ";
	}
	else {
		for (int n = 1; n <= 10; n++) {
			dobchik *= n;
		}
		Z = (y + dobchik + 2) / (pow(y, 2) + 5);
		cout << "Z=" << Z;
	}
}