#include <iostream>
using namespace std;
int lab_14_1();
int lab_14_2();
int lab_14_3();
int lab_14_4();
int lab_14_5();
int lab_14_6();

int main()
{
    setlocale(LC_ALL, "Rus");
    int f;
    cout << "Введите номер задачи от 1 до 6" << endl;
    cout << "№: ";
    cin >> f;
    switch (f) {
    case 1:
        lab_14_1();
        break;
    case 2:
        lab_14_2();
        break;
    case 3:
        lab_14_3();
        break;
    case 4:
        lab_14_4();
        break;
    case 5:
        lab_14_5();
        break;
    case 6:
        lab_14_6();
        break;
    }
}

