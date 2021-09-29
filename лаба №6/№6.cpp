//6. Дано число A. Вычислить A^8 , используя вспомогательную переменную и три операции умножения.
#include <iostream>
using namespace std;
int main()
{
	double a, x;
	cout << "a=";
	cin >> a;
	x = a * a;
	x = x * x;
	x = x * x;
	cout << "a^8=" << x;
	return 0;
}
