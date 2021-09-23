//Даны два ненулевых числа. Найти сумму, разность, произведение и частное их модулей.

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "Сумма модулей=" << abs(a) + abs(b) <<endl;
    cout << "Разность модулей=" << abs(a) - abs(b) << endl;
    cout << "Произведение модулей=" << abs(a) * abs(b) << endl;
    cout << "Частное модулей=" << abs(a) / abs(b) << endl;
    return 0;
}

