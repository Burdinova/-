//1. Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double x, y, r;
	cout << "В байтах x=";
	cin >> x;
	y = x * 1 / 1024;
	r = ceil(y); //округление в большую сторону
	cout << "В килобайтах =" <<y <<endl;
	cout << "Полное количество килобайтов =" <<r <<endl;
	return 0;
}
