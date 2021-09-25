#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b, c;
    cout << "Координата А=";
    cin >> a;
    cout << "Координата B=";
    cin >> b;
    cout << "Координата C=";
    cin >> c;
    cout << "АC=" << (c - a) <<endl;
    cout << "BC=" <<  (c - b) <<endl;
    cout << "АC+BC=" << (c - a) +(c - b);
    return 0;
}

