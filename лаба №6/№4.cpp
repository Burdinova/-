//4. Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x
#include <iostream>
using namespace std;
int main()
{
	double y, x;
	cout << "x=";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "y=" << y;
	return 0;
}
