/******************************************************************************

Определите структуру Subscriber, описывающую абонента оператора связи.
Эта структура должна хранить информацию о номере телефона, имени и адресе
абонента.
Перегрузите операции ввода >> и вывода << в поток для абонентов.
Напишите программу, управляющую базой данных абонентов телефонной

компании. Для этого в функции main нужно завести (библиотечный) список або-
нентов и организовать цикл, в котором: печатать меню, содержащее возможные

действия пользователя: добавить абонента, удалить абонента по номеру, распеча-
тать имя и адрес абонента по номеру телефона и выйти из программы.

Перегрузите операции ввода >> и вывода << для списка абонентов. Исполь-
зуя операцию вывода в поток, распечатайте всю базу данных.

*******************************************************************************/

#include<iostream>
#include<clocale>
#include<ctime>
#include<list>
using namespace std;

struct Subscriber
{
    char* name;
    char* number;
    char* address;
    Subscriber(char *nm = nullptr, char *nb = nullptr, char *ad = nullptr) : name(nm), number(nb), address(ad) {}
};

/* struct List
{
    
    // конструктор
    // деструктор
    
    // add_sub()
    // delete_sub(n)
    // print_by_number(n)
}; */

void printMenu()
{
    cout << "1 - добавить абонента" << '\n';
    cout << "2 - удалить абонента по номеру" << '\n';
    cout << "3 - распечатать имя и адрес абонента по номеру телефона" << '\n';
    cout << '\n';
    cout << "0 - выйти из программы" << '\n';
}

void select(int choice) 
{
    switch(choice)
    {
        case 1:
        {
            
        }
        case 2:
        {
            
        }
        case 3:
        {
            
        }
        case 4:
        {
            
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
	srand(time(NULL));

    int choice = -1;
    do
	{
		system("cls");
		printMenu();
		cin >> choice;
		select(choice);
		system("pause");
	} while (choice != 0);
    
    return EXIT_SUCCESS;
}
