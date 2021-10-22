/*4. Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например:
256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».*/

#include <iostream>
using namespace std;
int main()
{
    int x, d, a,z, y;
    setlocale(LC_ALL, "Rus");
    cout << "Введите число в диапазоне 100–999: ";
    cin >> x;
    if ((x < 100) || (x > 999)) cout << "Число выходит за рамки диапазона";
    else {
        y = x / 100; //смотрим сотни
        d = x % 10; //смотрим единицы
        a = (x / 10)%10; // смотрим десятки
        z = x % 100; //два последних числа
        switch (y)
        {
        case 1: cout << "сто "; break;
        case 2: cout << "двести "; break;
        case 3: cout << "триста "; break;
        case 4: cout << "четыреста "; break;
        case 5: cout << "пятьсот "; break;
        case 6: cout << "шестьсот "; break;        
        case 7: cout << "семьсот "; break;
        case 8: cout << "восемьсот "; break;
        case 9: cout << "девятьсот "; break;

        default:
            break;
        }
        if ((z < 11) || (z > 19)) {
            switch (a)
            {
            case 1: cout << "десять "; break;
            case 2: cout << "двадцать "; break;
            case 3: cout << "тридцать "; break;
            case 4: cout << "сорок "; break;
            case 5: cout << "пятьдесят "; break;
            case 6: cout << "шестьдесят "; break;
            case 7: cout << "семьдесят "; break;
            case 8: cout << "восемьдесят "; break;
            case 9: cout << "девяносто "; break;
            default:
                break;
            }
            switch (d)
            {
            case 1: cout << "один "; break;
            case 2: cout << "два "; break;
            case 3: cout << "три "; break;
            case 4: cout << "четыре "; break;
            case 5: cout << "пять "; break;
            case 6: cout << "шесть "; break;
            case 7: cout << "семь "; break;
            case 8: cout << "восемь "; break;
            case 9: cout << "девять "; break;
            default:
                break;
            }
        }
        else {
            switch (z)
            {
            case 11: cout << "одиннадцать "; break;
            case 12: cout << "двенадцать "; break;
            case 13: cout << "тринадцать "; break;
            case 14: cout << "четырнадцать "; break;
            case 15: cout << "пятнадцать "; break;
            case 16: cout << "шетнадцать "; break;
            case 17: cout << "семнадцать "; break;
            case 18: cout << "восемнадцать "; break;
            case 19: cout << "девятнадцать "; break;
            default:
                break;
            }
        }
        
    }
    return 0;
}