#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, c, b;
    cout << "Координата А=";
    cin >> a;
    cout << "Координата C=";
    cin >> c;
    cout << "Координата B=";
    cin >> b;
    cout << "АC*BC=" << (c-a)*(b-c);
    return 0;
}


