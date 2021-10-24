//5. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 
//1 − A + A2 − A3 + . ..± AN. Условный оператор не использовать.

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double a, k, n, s, i;
    cout << "Используя один цикл, найти значение выражения 1-A + A^2-A^3 + . ..+/- A^N" << endl;
    cout << "Введите число A: ";
    cin >> a;
    cout << "Введите число N: ";
    cin >> n;
    s = 1;
    k = 1;
    for (i = 1; i <= n; i++)
    {
        k = k*a*(-1);
        s= s+k;
    };
    cout << s;
    return 0;
}