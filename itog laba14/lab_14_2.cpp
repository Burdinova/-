﻿// 2. Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений).
// Не используя операции умножения и деления, найти длину незанятой части отрезка A.

#include <iostream>
using namespace std;
int lab_14_2()
{

	setlocale(LC_ALL, "Rus");
	double a, s, b;
	cout << "Найти длину незанятой части отрезка A" << endl;
	cout << "Введите положительные числа A и B (A > B)" << endl;
	cout << "Введите А: ";
	cin >> a;
	cout << "Введите B: ";
	cin >> b;
	s = 0;
	while (a >= b) {
		a = a - b;
	}
	cout << a;
	return 0;
}