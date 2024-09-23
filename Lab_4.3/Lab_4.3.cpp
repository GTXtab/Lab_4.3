// Lab_04_3.cpp
// Малаховський Назар
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 20


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, c, x, xp, xk, dx, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(4) << "x " << " |"
		<< setw(7) << " |" << setw(4) << "F " << " |" << endl;
	cout << "---------------------------" << endl;


	for (x = xp; x <= xk; x += dx) {
		if (x < 0 && b != 0) {
			F = -(2 * x - c) / (c * x - a);
		}
		else if (x > 0 && b == 0)
		{
			F = (x - a) / (x - c);
		}
		else if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		{
			F = -x / c + (-c) / (2 * x);
		}

		cout << "|" << setw(6) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		cout << "---------------------------" << endl;
	}

	return 0;
}
