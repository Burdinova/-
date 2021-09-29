//4. Скорость первого автомобиля V1 км / ч, второго — V2 км / ч, расстояние между ними S км.Определить расстояние между ними 
//через T часов, если автомобили удаляются друг от друга.
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double v1, v2, s, t, z;
	cout << "v1=";
	cin >> v1;
	cout << "v2=";
	cin >> v2;
	cout << "s=";
	cin >> s;
	cout << "t=";
	cin >> t;
	z = s + v1 * t + v2 * t;
	cout << "Расстояние через t часов=" << z;
	return 0;
}