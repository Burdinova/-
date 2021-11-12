/*5. Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров,
а затем — элементы с четными номерами в порядке убывания номеров*/

#include <iostream>
using namespace std;
int lab_16_5()
{
    int f = 10;
    while (f != 1024)
    {
    setlocale(LC_ALL, "Rus");
    int n, a, i;
    double b;
    int arr[200];
    cout << "Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров," << endl;
    cout << "а затем — элементы с четными номерами в порядке убывания номеров" << endl;
    cout << "Введите число N" << endl;
    cin >> n;
    cout << "Введите элементы массива" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> b;
        arr[i] = b;
    }

    for (i = 1; i < n; i = i + 2) cout << "arr[" << i << "]= " << arr[i] << endl;
    cout << endl;
    if (n % 2 != 0)
    {
        for (i = n - 1; i >= 0; i = i - 2) cout << "arr[" << i << "]= " << arr[i] << endl;
    }
    if (n % 2 == 0)
    {
        for (i = n - 2; i >= 0; i = i - 2) cout << "arr[" << i << "]= " << arr[i] << endl;
    }
    system("pause");
    return 0;
    }
}
