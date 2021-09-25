#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double x1, x2, y1, y2, x3, y3,z,g,h,f;
    cout << "Координаты точки А:" << endl;
    cout << "x1=";
    cin >> x1;
    cout << "y1=";
    cin >> y1;
    cout << "Координаты точки B:" << endl;
    cout << "x2=";
    cin >> x2;
    cout << "y2=";
    cin >> y2;
    cout << "Координаты точки C:" << endl;
    cout << "x3=";
    cin >> x3;
    cout << "y3=";
    cin >> y3;
    cout << "Длина стороны АВ=";  
    g = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << g <<endl;
    cout << "Длина стороны BC=";
    f = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    cout << f << endl;
    cout << "Длина стороны AC=";
    h = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    cout << h << endl;
    cout << "Периметр=" << g + f + h << endl;
    z = (g + h + f)/2;
    cout << "Площадь=" << sqrt(z*(z-g)*(z-f)*(z-h)) << endl;
    return 0;
}
