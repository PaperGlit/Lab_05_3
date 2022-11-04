#include <iostream>
#include <iomanip>

using namespace std;

double f(const double x);

int main()
{
	double tp, tk, g;
	int n;

	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "t" << " |"
		<< setw(7) << "g" << "	|" << endl;
	cout << "---------------------------" << endl;

	double dt = (tk - tp) / n;
	double t = tp;

	while (t <= tk)
	{
		g = f(2 * t) + pow(f(t * t + 1), 2);

		cout << "|" << setw(7) << setprecision(2) << t
			<< " |" << setw(10) << setprecision(3) << g
			<< " |" << endl;

		t += dt;
	}
	cout << "---------------------------" << endl;

	return 0;
}

double f(const double x)
{
	if (abs(x) >= 1)
		return ((sin(2 * x) + 1) / (sin(x) + cos (x) * cos(x)));
	else
	{
		int n = 0;
		double a = x * x;
		double S = a;	

		do
		{
			n++;
			double R = pow(x, 4) / (2 * n * (2 * n + 1));
			a *= R;
			S += a;
		} while (n < 7);

		return S;
	}
}