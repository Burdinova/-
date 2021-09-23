//Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов.
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
    cout << "Сумма квадратов=" << a*a + b*b << endl;
    cout << "Разность квадратов=" << a*a - b*b << endl;
    cout << "Произведение квадратов=" << a * a * b * b << endl;
    cout << "Частное квадратов=" << a * a / b * b << endl;
    return 0;
}


