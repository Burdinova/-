//4. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A^2 + A^3 + . . . + A^N

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double a, n, s, i;
    cout << "Используя один цикл, найти сумму 1 + A + A^2 + A^3 + . . . + A^N" << endl;
    cout << "Введите число A: ";
    cin >> a;
    cout << "Введите число N: ";
    cin >> n;
    s = 0;
    for (int i = 0; i <= n; i++)
    {
        s = s + pow(a, i);
    };
    cout << s;
    return 0;
}