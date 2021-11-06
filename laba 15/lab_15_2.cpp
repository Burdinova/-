/*2. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
 −1, если X < 0; 0, если X = 0; 1, если X > 0.
С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.*/

#include <iostream>
using namespace std;
int Sign(double x)
{
    if (x == 0) return 0;
    if (x < 0) return -1;
    if (x > 0) return 1;
}
int lab_15_2()
{
    int f = 1;
    while (f != 1024)
    {

    setlocale(LC_ALL, "Rus");
    double A, B, y;
    cout << "Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения" << endl;
    cout << "−1, если X < 0; 0, если X = 0; 1, если X > 0" << endl;
    cout << "С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B" << endl;
    cout << "Введите A и B" << endl;
    cin >> A;
    cin >> B;
    y = Sign(A) + Sign(B);
    cout << y;

    system("pause");
    return 0;
    }
}
