//2. Даны целые положительные числа A и B (A > B). На отрезке длины A
//размещено максимально возможное количество отрезков длины B (без наложений).
//Найти количество отрезков B, размещенных на отрезке A.
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double A, B, y, r;
	cout << "Введите числа А и В, где (A>B)";
	cout << "А=";
	cin >> A;
	cout << "B=";
	cin >> B;
	y = A / B;
	r = floor(y); // округление вниз
	cout << "Количество отрезков B, размещённых на отрезке А =" << r << endl;
	return 0;
}