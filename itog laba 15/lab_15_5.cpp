/*5. ������� ������� Fact2(N) ������������� ����, ����������� ������� ���������:
N!! = 1�3�5�. . .�N, ���� N � ��������; N!! = 2�4�6�. . .�N, ���� N � ������
(N > 0 � �������� ������ ����; ������������ ������������
�������� ������������ ��� ����, ����� �������� �������������� ������������ ��� ������� ��������� N).
*/

#include <iostream>
using namespace std;
double Fact2(int N)
{
    int j;
    double k;
    k = 1;
    if (N % 2 == 0)
    {
        for (j = 2; j <= N; j += 2) k = k * j;
    }
    if (N % 2 != 0)
    {
        for (j = 1; j <= N; j += 2) k = k * j;
    }
    return k;
}
int lab_15_5()
{
    int f = 10;
    while (f != 1024)
    {
    setlocale(LC_ALL, "Rus");
    int a;
    double y;
    cout << "������� ������� Fact2(N) ������������� ����, ����������� ������� ���������" << endl;
    cout << "N!! = 1�3�5�. . .�N, ���� N � ��������; N!! = 2�4�6�. . .�N, ���� N � ������" << endl;
    cout << "������� N (N > 0)" << endl;
    cin >> a;
    y = Fact2(a);
    cout << y << endl;
    system("pause");
    return 0;
}
}
