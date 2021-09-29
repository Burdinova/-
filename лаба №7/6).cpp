// 6. Найти решение системы линейных уравнений вида 
//A1·x + B1·y = C1,
//A2·x + B2·y = C2,
#include <iostream>
using namespace std;
int main()
{
	double a1, a2, b1, b2, c1, c2, x, y;
	cout << "A1*x + B1*y = C1" << endl;
	cout << "A2*x + B2*y = C2" << endl;
	cout << "a1=";
	cin >> a1;
	cout << "b1=";
	cin >> b1;
	cout << "c1=";
	cin >> c1;
	cout << "a2=";
	cin >> a2;
	cout << "b2=";
	cin >> b2;
	cout << "c2=";
	cin >> c2;
	y = (c2 * a1 - a2 * c1) / (b2 * a1 - b1 * a2);
	x = (c1 - b1 * y) / a1;
	cout << "x=" << x;
	cout << "y=" << y;
	return 0;
}
