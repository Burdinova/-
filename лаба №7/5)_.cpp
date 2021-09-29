//5. Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B(коэффициент A не равен 0).

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, x, b;
	cout << "b=";
	cin >> b;
	cout << "a=";
	cin >> a;

		if (a == 0)
		{
			cout << "a не может быть равно 0";
		}
		else if (a != 0)
		{
			x = -b / a;
			cout << "x=" << x;
		}

	return 0;
}