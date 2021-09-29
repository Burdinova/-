//5. Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x
#include <iostream>
using namespace std;
int main()
{
	double y, x;
	cout << "x=";
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "y=" << y;
	return 0;
}