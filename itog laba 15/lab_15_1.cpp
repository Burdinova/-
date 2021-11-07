/* 1. ќписать функцию PowerA3(A, B), вычисл€ющую третью степень числа A и возвращающую ее в переменной
B (A Ч входной, B Ч выходной параметр; оба параметра €вл€ютс€ вещественными).
— помощью этой функции найти третьи степени п€ти данных чисел.*/

#include <iostream>
using namespace std;

double PowerA3(double a)
{
    return a * a * a;
}

int lab_15_1()
{
    int f = 10;
    while (f != 1024)
    {
        setlocale(LC_ALL, "Rus");
        cout << "ќписать функцию PowerA3(A, B), вычисл€ющую третью степень числа A и возвращающую ее в переменной B" << endl;
        cout << "— помощью этой функции найти третьи степени п€ти данных чисел" << endl;
        double x, y, i;
        for (int i = 0; i < 5; i++)
        {
            cout << "A=";
            cin >> x;
            y = PowerA3(x);
            cout << "B = A^3 = " << y << endl;
        }
        system("pause");
        return 0;
    }
}
