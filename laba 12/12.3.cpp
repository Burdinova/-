/* 3. Дано целое число в диапазоне 10–40, определяющее количество учебных заданий
по некоторой теме. Вывести строку-описание указанного количества заданий, обеспечив
правильное согласование числа со словами «учебное задание»,
например: 18 — «восемнадцать учебных заданий».*/

#include <iostream>
using namespace std;
int main()
{
    int x, d, a, y;
    setlocale(LC_ALL, "Rus");
    cout << "Вывести строку-описание указанного количества заданий " << endl;
    cout << "Введите число в диапазоне 10–40: ";
    cin >> x;
    switch (x)
    {
    case 10: cout << "десять "; break;
    case 11: cout << "одиннадцать "; break;
    case 12: cout << "двенадцать "; break;
    case 13: cout << "тринадцать "; break;
    case 14: cout << "четырнадцать "; break;
    case 15: cout << "пятнадцать "; break;
    case 16: cout << "шетнадцать "; break;
    case 17: cout << "семнадцать "; break;
    case 18: cout << "восемнадцать "; break;
    case 19: cout << "девятнадцать "; break;
    case 20: cout << "двадцать "; break;
    case 21: cout << "двадцать одно "; break;
    case 22: cout << "двадцать два "; break;
    case 23: cout << "двадцать три "; break;
    case 24: cout << "двадцать четыре "; break;
    case 25: cout << "двадцать пять "; break;
    case 26: cout << "двадцать шесть "; break;
    case 27: cout << "двадцать семь "; break;
    case 28: cout << "двадцать восемь "; break;
    case 29: cout << "двадцать девять "; break;
    case 30: cout << "тридцать "; break;
    case 31: cout << "тридцать одно "; break;
    case 32: cout << "тридцать два "; break;
    case 33: cout << "тридцать три "; break;
    case 34: cout << "тридцать четыре "; break;
    case 35: cout << "тридцать пять "; break;
    case 36: cout << "тридцать шесть "; break;
    case 37: cout << "тридцать семь "; break;
    case 38: cout << "тридцать восеь "; break;
    case 39: cout << "тридцать девять "; break;
    case 40: cout << "сорок "; break;
    default:
        break;
    }

    if ((x > 40) || (x < 10)) cout << "Число выходит за рамки диапазона";
    if (((x >= 10) && (x <= 20)) || ((x >= 25) && (x <= 30)) || ((x >= 35) && (x <= 40)))
        cout << " учебных заданий";
    if ((x == 31) || (x == 21))
        cout << " учебное задание";
    if ((x == 22) || (x == 23) || (x == 24) || (x == 32) || (x == 33) || (x == 34))
        cout << " учебных задания";
    return 0;
}