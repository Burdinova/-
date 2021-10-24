// 2. Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double n,s, i;
    cout << "Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей)" << endl;
    cout << "Введите число N: ";
    cin >> n;
    s = 1;
    for (int i = 1; i <= n; i++)
    {
        s = s * (1 + 0.1 * i);
    };
    cout << s;
    return 0;



}