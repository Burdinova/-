// 1. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.

#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "Rus");
    double n,i;
    cout << "Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет" <<endl;
    cout << "Введите цену за 1 кг кконфет: ";
    cin >> n;
    for (i = 0.1; i <1; i=i + 0.1)
    {
        cout << i << "= " << i * n<< endl;
    };
    return 0;



}