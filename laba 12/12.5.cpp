/*5. В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета:
зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных:
крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи.
По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».//то есть через 12 лет животное меняет цвет//*/


#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "По номеру года определить его название" << endl;
    cout << "Введите год: ";
    cin >> n;

    switch ((n) % 10) {
    case 0:
    case 1:
        cout << "белый ";break;
    case 2:
    case 3:
        cout << "черный ";break;
    case 4:
    case 5:
        cout << "зелёный ";break;
    case 6:
    case 7:
        cout << "красный "; break;
    case 8:
    case 9:
        cout << "жёлтый ";break;
    }
    switch ((n + 8) % 12) {
    case 0:
        cout << "крыса"; break;
    case 1:
        cout << "корова"; break;
    case 2:
        cout << "тигр"; break;
    case 3:
        cout << "заяц"; break;
    case 4:
        cout << "дракон"; break;
    case 5:
        cout << "змея"; break;
    case 6:
        cout << "лошадь"; break;
    case 7:
        cout << "овца"; break;
    case 8:
        cout << "обезьяна"; break;
    case 9:
        cout << "курица"; break;
    case 10:
        cout << "собака"; break;
    case 11:
        cout << "свинья"; break;
    }
    return 0;
}
