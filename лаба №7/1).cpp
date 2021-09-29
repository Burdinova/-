//1. Дано значение угла α в градусах (0 < α < 360). Определить значение этого же угла в радианах, учитывая, что 180◦ = π радианов.
#include <iostream>
using namespace std;
int main()
{
	double a, rad;
	cout << "a=";
	cin >> a;
	rad = a / 180;
	cout << "rad=" << rad << "*pi";
	return 0;
}
