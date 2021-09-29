//3. Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, x, y, m, z;
	cout << "x кг=";
	cin >> x;
	cout << "a руб=";
	cin >> a;
	cout << "y кг=";
	cin >> y;
	z = 1 * a / x; // цена 1 кг конфет
	m = y * a / x; // цена за y кг конфет
	cout << "цена 1 кг=" << z << endl;
	cout << "цена y кг=" << m;
	return 0;
}
