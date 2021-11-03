//3. Дано целое число N (> 1). Вывести наименьшее из целых чисел K,
//для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту сумму.

# include <iostream>
using namespace std;
int lab_14_3()
{
	setlocale(LC_ALL, "Rus");
	int N;
	int K =0;
	int S = 0;
	cout << "Наименьшее из целых чисел K, для которых сумма 1 + 2 + ... + K будет больше или равна N:   " << endl;
	cout << "Введите целое число N (>1): ";
	cin >> N;
	while (S < N) {
		K=K+1;
		S=S+K;
	}
	cout<< "K= " << K << endl;
	return 0;
}