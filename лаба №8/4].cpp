//4. Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout <<"a=";
	cin>>a;
	cout<<a / 10 + (a % 10) * 10<<endl;
	return 0;
}
