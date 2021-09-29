//№1
#include <iostream>
using namespace std;
int main()
{
	double a, b, z;
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	z = a;
	a = b;
	b = z;
	cout << "A=" << a << endl;
	cout << "B=" << b;
	return 0;
}