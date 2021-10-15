/* 6. Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. Проверить истинность высказывания:
«Треугольник со сторонами a, b, c является прямоугольным».*/
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b,c;
    cout << "Проверить истинность высказывания:«Треугольник со сторонами a, b, c является прямоугольным»" << endl;
    cout << "Введите стороны треугольника: " << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if ((a*a+b*b == c*c) || (a * a + c * c == b * b)|| (c * c + b * b == a * a))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}


