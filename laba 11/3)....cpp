/*3. На плоскости расположены три точки: A, B, C. Определить,
какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.*/

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double x_a, y_a, x_b, y_b, x_c, y_c,rb, rc;
    cout << "Определить, какая из двух последних точек(B или C) расположена ближе к A и найти ее расстояние от А" << endl;
    cout << "Введите координаты А = ";
    cin >> x_a;
    cin >> y_a;
    cout << "Введите координаты B = ";
    cin >> x_b;
    cin >> y_b;
    cout << "Введите координаты C = ";
    cin >> x_c;
    cin >> y_c;
    rc = sqrt(pow((x_c - x_a), 2) + pow((y_c - y_a), 2));
        rb = sqrt(pow((x_b - x_a), 2) + pow((y_b - y_a), 2));
    if (rb < rc)
    {
        cout << "Точка B" << "   " << "Ответ= " << rb;
    }

    if (rc < rb)
    {
        cout << "Точка C" << "   " << "Ответ= " << rc;
    }

    return 0;
}