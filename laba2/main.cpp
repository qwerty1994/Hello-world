#include <iostream>

using namespace std;

int main()
{
    double one, tho;
    setlocale(LC_ALL,"Russian");
    cout << "������� ������ ����� :";
    cin >> one;
    cout << "������� ������ ����� :";
    cin >> tho;
    cout << "����� ���� ����� = " << one+tho <<endl ;
    cout << "�������� ���� ����� = " << one-tho;
}
