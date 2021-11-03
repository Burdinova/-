/*5. Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя алгоритм Евклида*/

#include <iostream>
using namespace std;
int lab_14_5()
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	cout << "Найти наибольший общий делитель (НОД) данных чисел, используя алгоритм Евклида" <<endl;
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	while (a != b)
	{
		if (a > b) { a = a - b; }
		else if (b > a) { b = b - a; }
	}

	cout << a;
	return 0;
}

