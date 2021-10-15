// 2. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b,c;
    cout << "Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C»" << endl;
    cout << "Введите А" << endl << "A=";
    cin >> a;
    cout << "Введите B" << endl << "B=";
    cin >> b;
    cout << "Введите C" << endl << "C=";
    cin >> c;
    if (a < b && b <c)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}