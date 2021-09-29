//7. Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения.
#include <iostream>
using namespace std;
int main()
{
	double a, x, y;
	cout << "a=";
	cin >> a;
	x = a * a * a;
	y = x * x;
	y = y * x * y;
	cout << "a^15=" << y;
	return 0;
}
