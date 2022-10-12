#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x, R, xp, xk, step, r;
	cout << "Enter R: "; cin >> R;
	cout << "Enter xp: "; cin >> xp;
	cout << "Enter xk: "; cin >> xk;
	cout << "Enter step: "; cin >> step;

	cout << fixed;
	cout << "---------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(5) << "|" << setw(2) << " " << setw(5) << "result" << setw(3) << "|" << endl;
	cout << "---------------------" << endl;

	x = xp;
	while (x <= xk) {
		if (x <= R)

			r = R;

		else

			if (R < x && x <= 0)

				r = R - sqrt(R * R - x * x);

			else

				if (0 < x && x <= R)

					r = R - sqrt(R * R - x * x);

				else

					if (R < x && x <= 6)

						r = R + (-3 - R) / (6 - R) * (x - R);

					else

						r = -3 * x + 18;



		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << r
			<< " |" << endl;
		cout << "---------------------" << endl;
		x += step;
	}


	return 0;
}
