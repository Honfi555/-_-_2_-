#include <iostream>
#include <iomanip>
#include "Games.h"
#include "table_functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int size = 3;
    Games* arr = new Games[size];

    arr[0] = Games{ "Atomic Heart", 2023, "Mundfish", 2600 };
    arr[1] = Games{ "Cyberpunk2077", 2020, "CD Projekt Red", 1870 };
    arr[2] = Games{ "Assassin's Creed Valhalla", 2020, "Ubisoft Montreal", 2600 };

    table_return(arr, size);

    while (true)
    {
        int choise = 0;

        cout << "Выберите действие:" << endl;
        cout << "1. Добавть строку;" << endl;
        cout << "2. Изменить строку;" << endl;
        cout << "3. Удалить строку;" << endl;
        cout << "4. Выйти из программы." << endl;
        cin >> choise;

        //Проверка на правильность введённого числа
        while (true) {
            if (choise < 1 || choise > 4) {
                cout << "Выберите корректное действие:" << endl;
                cout << "1. Добавть строку;" << endl;
                cout << "2. Изменить строку;" << endl;
                cout << "3. Удалить строку;" << endl;
                cout << "4. Выйти из программы." << endl;
            }
            else {
                break;
            }
        }

        //Выход
        if (choise == 4) {
            cout << "Выход.." << endl;
            system("pause");
            return 0;
        }

        //Добавление нового элемента в массив
        if (choise == 1)
        {
            int new_size = size + 1;
            Games* new_arr = new Games[new_size];

            for (int i = 0; i < new_size; i++)
            {
                if (i != size) new_arr[i] = arr[i];
                else new_inform(new_arr, new_size, i);
            }
            size++;
            arr = new Games[size];
            assignment(arr, new_arr, size);
            //arr = new_arr;
            delete[] new_arr;
        }
        //Изминение элемента массива
        if (choise == 2)
        {
            int element_change = 0;
            cout << "Введите номер строки для изменения:" << endl;
            cin >> element_change;

            while (true)
            {
                if (element_change > size)
                {
                    cout << "Введите коректный номер строки(всего " << size << " строк):" << endl;
                    cin >> element_change;
                }
                else
                {
                    break;
                }
            }

            new_inform(arr, size, element_change-1);
        }
        //Удаление элемента массива
        if (choise == 3)
        {
            int element_delete = 0;
            cout << "Введите номер строки для удаления" << endl;
            cin >> element_delete;

            while (true)
            {
                if (element_delete > size)
                {
                    cout << "Введите коректный номер строки(всего " << size << " строк):" << endl;
                    cin >> element_delete;
                }
                else
                {
                    break;
                }
            }

            int new_size = size - 1, j = 0;
            Games* new_arr = new Games[new_size];

            for (int i = 0; i < size; i++)
            {
                if (i != element_delete - 1)
                {
                    new_arr[j] = arr[i];
                    j++;
                }
            }
            size--;
            arr = new Games[size];
            assignment(arr, new_arr, size);
            delete[] new_arr;
        }

        table_return(arr, size);
    }

    return 0;
}