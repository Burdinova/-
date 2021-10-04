//5. Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.

#include <iostream>
using namespace std;
int main()
{
	int a;
	double z, w;
	cout <<"a=";
	cin>>a;
	z = a / 100;
	w = (a % 100) * 10 + z;
	cout<<w<<endl;
	return 0;
}
