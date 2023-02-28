#include "table_functions.h"
#include "Games.h"
#include <iostream>
#include <iomanip>
using namespace std;

//����� "������" �������
void head() {
    cout << "----------------------------------------------------------------------------------\n"
        << "|                                   ������� ���                                  |\n"
        << "----------------------------------------------------------------------------------\n"
        << "|          ��������         |   ��� ������   |       ������      |    ���������  |\n"
        << "----------------------------------------------------------------------------------" << endl;
}

//����� ������� �������
void notation() {
    cout << "|             ����������: ���� ������� �� 2023 ��� � �������� �������            |\n"
        << "----------------------------------------------------------------------------------" << endl;
}

//����� ������� ������� �������
void line() {
    cout << "----------------------------------------------------------------------------------" << endl;
}

//����� �������
void table_return(Games* arr, int size)
{
    head();
    for (int i = 0; i < size; i++)
    {
        cout << "| " << setw(25) << arr[i].name << " | " << setw(14) << arr[i].release_data
            << " | " << setw(17) << arr[i].studio << " | " << setw(13) << arr[i].price << " |" << endl;
        line();
    }
    notation();
}

void new_inform(Games* arr, int size, int index)
{
    string name;
    cout << "������� �������� ����:" << endl;
    cin >> name;
    arr[index].name = name;

    int release_data = 0;
    cout << "������� ��� �������:" << endl;
    cin >> release_data;
    arr[index].release_data = release_data;

    string studio;
    cout << "������� �������� ������:" << endl;
    cin >> studio;
    arr[index].studio = studio;

    int price = 0;
    cout << "������� ����:" << endl;
    cin >> price;
    arr[index].price = price;
 }