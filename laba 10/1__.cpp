// 1. Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b;
    cout << "Проверить истинность высказывания: «Справедливы неравенства A > 2 и B <= 3»" << endl;
    cout << "Введите А" << endl << "A=";
    cin >> a;
    cout << "Введите B" << endl << "B=";
    cin >> b;
    if (a>2 && b<=3) 
    {
        cout << "true"; 
    }
    else
    {
        cout << "false"; 
    }
    return 0;
}
