/* 1. ������� ������� PowerA3(A, B), ����������� ������ ������� ����� A � ������������ �� � ����������
B (A � �������, B � �������� ��������; ��� ��������� �������� �������������).
� ������� ���� ������� ����� ������ ������� ���� ������ �����.*/

#include <iostream>
using namespace std;

double PowerA3(double a)
{
    return a * a * a;
}

int lab_15_1()
{
    int f = 10;
    while (f != 1024)
    {
        setlocale(LC_ALL, "Rus");
        cout << "������� ������� PowerA3(A, B), ����������� ������ ������� ����� A � ������������ �� � ���������� B" << endl;
        cout << "� ������� ���� ������� ����� ������ ������� ���� ������ �����" << endl;
        double x, y, i;
        for (int i = 0; i < 5; i++)
        {
            cout << "A=";
            cin >> x;
            y = PowerA3(x);
            cout << "B = A^3 = " << y << endl;
        }
        system("pause");
        return 0;
    }
}
