#include "table_functions.h"
#include "Games.h"
#include <iostream>
#include <iomanip>
using namespace std;

//Вывод "головы" таблицы
void head() {
    cout << "----------------------------------------------------------------------------------\n"
        << "|                                   Новинки игр                                  |\n"
        << "----------------------------------------------------------------------------------\n"
        << "|          Название         |   Год выхода   |       Студия      |    Стоимость  |\n"
        << "----------------------------------------------------------------------------------" << endl;
}

//Вывод нотации таблицы
void notation() {
    cout << "|             Примечание: Цена указаны на 2023 год в турецком регионе            |\n"
        << "----------------------------------------------------------------------------------" << endl;
}

//Вывод нижнего бортика таблицы
void line() {
    cout << "----------------------------------------------------------------------------------" << endl;
}

//Вывод таблицы
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
    cout << "Введите название игры:" << endl;
    cin >> name;
    arr[index].name = name;

    int release_data = 0;
    cout << "Введите год выпуска:" << endl;
    cin >> release_data;
    arr[index].release_data = release_data;

    string studio;
    cout << "Введите название студии:" << endl;
    cin >> studio;
    arr[index].studio = studio;

    int price = 0;
    cout << "Введите цену:" << endl;
    cin >> price;
    arr[index].price = price;
 }