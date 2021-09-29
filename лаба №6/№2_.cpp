//2. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.
#include <iostream>
using namespace std;
int main()
{
	double a, b, c, z;
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	cout << "C=";
	cin >> c;
	z = a;
	a = b;
	b = c;
	c = z;
	cout << "A=" << a << endl;
	cout << "B=" << b << endl;
	cout << "C=" << c << endl;
	return 0;
}