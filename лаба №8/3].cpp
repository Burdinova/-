//3. Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально
//возможное количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double A, B, y, w, r;
	cout << "Введите числа А и В, где (A>B)";
	cout << "А=";
	cin >> A;
	cout << "B=";
	cin >> B;
	y = A / B;
	r = floor(y);
	w = A - r * B;
	cout << "Незанятая часть отрезка А =" <<w <<endl;
	return 0;
}
