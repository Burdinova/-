/*5. ��� ������ A ������� N. ������� ������� ��� �������� � ��������� �������� � ������� ����������� �������,
� ����� � �������� � ������� �������� � ������� �������� �������*/

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
    cout << "��� ������ A ������� N. ������� ������� ��� �������� � ��������� �������� � ������� ����������� �������," << endl;
    cout << "� ����� � �������� � ������� �������� � ������� �������� �������" << endl;
    cout << "������� ����� N" << endl;
    cin >> n;
    cout << "������� �������� �������" << endl;
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
