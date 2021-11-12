/* 4. Дан массив A размера N.Вывести его элементы в следующем порядке : A1, AN, A2, AN−1, A3, AN−2 */

#include <iostream>
#include <cmath>

using namespace std;
int lab_16_4()
{
    int f = 10;
    while (f != 1024)
    {
    setlocale(LC_ALL, "Rus");
    double k, b;
    int i, n;
    double arr[200];
    cout << "Дан массив A размера N.Вывести его элементы в следующем порядке : A1, AN, A2, AN-1, A3, AN-2" << endl;
    cout << "Введите размер массива N" << endl;
    cin >> n;
    cout << "Введите элементы массива" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> b;
        arr[i] = b;
    }
    k = n / 2;
    //if (n % 2 == 0) k = n / 2;
    //if (n % 2 != 0)  k = round(n / 2)+1;
    for (i = 0; i < k; i++)
    {
        cout << "A[" << i << "]= " << arr[i] << endl << "A[" << n - i - 1 << "]= " << arr[n - i - 1] << endl;
    }
    system("pause");
    return 0;
    }
}
