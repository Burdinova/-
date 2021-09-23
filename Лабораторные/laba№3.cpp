#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus"); //устанавливает русскую локализацию
    double a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "среднее значение=" << (a + b) / 2; // вывод средне арифмитического значения
    return 0;
}


