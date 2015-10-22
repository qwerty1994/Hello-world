#include <iostream>

using namespace std;
// Учебная программа
int main()
{
    double one, tho;
    setlocale(LC_ALL,"Russian");
    cout << "Введите первое число :";
    cin >> one;
    cout << "Введите второе число :";
    cin >> tho;
    cout << "Сумма двух чисел = " << one+tho << endl ;
    cout << "Разность двух чисел = " << one-tho << endl;
    cout << "Произведение двух чисел = " << one*tho;
}
