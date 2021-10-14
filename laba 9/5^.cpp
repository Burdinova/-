/*5. Дан номер некоторого года (целое положительное число). Определить соответствующий ему номер столетия,
учитывая, что, к примеру, началом 20 столетия был 1901 год*/

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double god, stol;
    cout << "Введите год" << endl << "god=";
    cin >> god;
    stol = ceil(god / 100);
    cout << "Номер столетия = " << stol;
    return 0;
}
