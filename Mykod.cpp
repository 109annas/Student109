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
	cout << "������ �\ny=";
	cin >> y;
	Dobchik = 1;
	if (pow(y, 2) + 5 == 0) {
		cout << "�������";
	}
	else {
		for (int n = 1; n <= 10; n++) {
			Dobchik *= n;
		}
		Z = (y + Dobchik + 2) / (pow(y, 2) + 5);
		cout << "Z=" << Z;
		cout << "ʳ����!!!";
		float x, Y, Z, b;
		int a;
		printf("����� �: ");
		scanf_s("%f", &x);
		printf("����� �: ");
		scanf_s("%f", &Y);
		printf("����� Z: ");
		scanf_s("%f", &Z);
		b = Y - x;
		a = static_cast<int> ((((fabs(Y - Z)) / b) / (1 + pow(b, 3))) + pow(10 * Y - 17, 1.0 / 3) - pow(x, 3) - pow(Y, 3 - x));
		printf("\n��������� ��������: \na=%i\n", a);

	}
}
//hello