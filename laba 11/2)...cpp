/*2. Даны три числа. Найти сумму двух наибольших из них*/

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b,c,z;
    cout << "Найти сумму двух наибольших чисел "<< endl;
    cout << "Введите А = ";
    cin >> a;
    cout << "Введите B = ";
    cin >> b;
    cout << "Введите C = ";
    cin >> c;
    if ((a>=b) && (c>=b))
    {
        z = a + c;
        cout << "Ответ= "<<z;
    }
    else {
        if ((b >= a) && (c >= a))
        {
            z = c + b;
            cout << "Ответ= " << z;
        }
        else
        {
            z = a + b;
            cout << "Ответ= " << z;
        }
    }
    return 0;
}