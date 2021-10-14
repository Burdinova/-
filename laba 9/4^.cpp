/* 4. Даны целые положительные числа A, B, C.На прямоугольнике размера A × B размещено максимально
возможное количество квадратов со стороной C (без наложений). Найти количество квадратов, размещенных 
на прямоугольнике, а также площадь незанятой части прямоугольника.*/

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    cout << "Введите размеры прямоугольника" << endl;
    cout << "A=";
    cin >> a;
    cout << "B=";
    cin >> b;
    cout << "Введите сторону квадрата" << endl;
    cout << "C=";
    cin >> c;
    double col_a = floor(a / c);
    double col_b = floor(b / c);
    int col_kv = col_a * col_b;
    int s_kv = col_kv * c * c;
    int ost = a * b - s_kv;
    cout << "Количество квадратов=" << col_kv <<endl;
    cout << "Площадь незанятой части=" << ost;
    return 0;
}
