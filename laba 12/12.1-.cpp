/* 1. Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12
(1 — январь, 2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»).*/

#include <iostream>
using namespace std;
int main()
{
    int x, d, a, y;
    setlocale(LC_ALL, "Rus");
    cout << "Вывести дату в виде текста"<<endl;
    cout << "Введите номер дня: ";
    cin >> x;
    cout << "Введите номер месяца: ";
    cin >> y;
    if (x > 31) cout << "На нашей планете нет такого числа, но у марсиан оно определённо существует!";
    else {
        d = x % 10; //смотрим единицы
        a = x / 10; // смотрим десятки
        if (((x < 10) || (x > 20)) && (x != 30))
        {
            switch (a)
            {
            case 2: cout << "двадцать "; break;
            case 3: cout << "тридцать "; break;
            default:
                break;
            }
            switch (d)
            {
            case 1: cout << "первое "; break;
            case 2: cout << "второе "; break;
            case 3: cout << "третье "; break;
            case 4: cout << "четвертое "; break;
            case 5: cout << "пятое "; break;
            case 6: cout << "шестое "; break;
            case 7: cout << "седьмое "; break;
            case 8: cout << "восьмое "; break;
            case 9: cout << "девятое "; break;
            default:
                break;
            }
        }
        else
        {
            switch (x)
            {
            case 10: cout << "десятое "; break;
            case 11: cout << "одиннадцатое "; break;
            case 12: cout << "двенадцатое "; break;
            case 13: cout << "тринадцатое "; break;
            case 14: cout << "четырнадцатое "; break;
            case 15: cout << "пятнадцатое "; break;
            case 16: cout << "шетнадцатое "; break;
            case 17: cout << "семнадцатое "; break;
            case 18: cout << "восемнадцатое "; break;
            case 19: cout << "девятнадцатое "; break;
            case 20: cout << "двадцатое "; break;
            case 30: cout << "тридцатое "; break;
            default:
                break;
            }
        }
        switch (y)
        {
        case 1: cout << "января"; break;
        case 2: cout << "февраля"; break;
        case 3: cout << "марта"; break;
        case 4: cout << "апреля"; break;
        case 5: cout << "мая"; break;
        case 6: cout << "июня"; break;
        case 7: cout << "июля"; break;
        case 8: cout << "августа"; break;
        case 9: cout << "сентября"; break;
        case 10: cout << "октября"; break;
        case 11: cout << "ноября"; break;
        case 12: cout << "декабря"; break;
        default: cout << "На нашей планете нет такого месяца, но у марсиан он определённо существует";
            break;
        }
    }
    return 0;
}
