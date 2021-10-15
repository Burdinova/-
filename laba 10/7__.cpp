/* 7. Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».*/
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    cout << "Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c»" << endl;
    cout << "Введите стороны треугольника: " << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if ((a+ b > c ) && (a + c> b) && (c + b > a))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}


