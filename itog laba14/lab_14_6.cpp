/*6. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. Найти целое число K — порядковый номер числа Фибоначчи N.*/

#include <iostream>
using namespace std;
int lab_14_6()
{
    setlocale(LC_ALL, "Rus");
    int n,x,y,k,z;
    cout << "Найти целое число K — порядковый номер числа Фибоначчи N "<<endl;
    cout << "Введите целое число N (> 1), являющееся числом Фибоначчи: N = FK ";
    cin >> n;
    z = 0;
    x = 0;
    y = 1;
    k = 2;
    while (z != n)
    {
        z = x + y;
        x = y;
        y = z;
        k++;
    }
    cout << k;
    return 0;
}