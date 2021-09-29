//2. Дано значение угла α в радианах (0 < α < 2•π). Определить значение этого же угла в градусах, учитывая, что 180◦ = π радианов
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, x;
	cout << "Введите без pi, a=";
	cin >> a;
	x = a * 180;
	cout << "x=" << x;
	return 0;
}