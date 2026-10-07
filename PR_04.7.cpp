// Качмар Владислав.
// 12 варіант.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	double PI = 4.0 * atan(1.0);
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |"
		<< setw(10) << "atan(x)" << " |"
		<< setw(10) << "S" << " |"
		<< setw(6) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 0;
		a = -1.0 / x;           // Перший доданок при n=0
		S = -PI / 2.0 + a;      // -pi/2 + a0
		do {
			n++;
			// Рекурентна формула
			R = -(2.0 * n - 1.0) / ((2.0 * n + 1.0) * x * x);
			a *= R;
			S += a;
		} while (abs(a) >= eps);
		cout << "|" << setw(10) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << atan(x) << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(6) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}