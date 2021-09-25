#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	double x1, x2, y1, y2;
	cout << "Координата точки А:";
	cout << " x1=";
	cin >> x1;
	cout << " y1=";
	cin >> y1;
	cout << "Координата точки C:";
	cout << " x2=";
	cin >> x2;
	cout << " y2=";
	cin >> y2;
	cout << "Периметр=" << 2 * ((x2 - x1) + (y2 - y1)) <<endl;
	cout << "Площадь=" << ((x2 - x1) * (y2 - y1));
	return 0;
}

