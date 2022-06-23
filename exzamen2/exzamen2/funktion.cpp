#include <iostream>
#include <string>
#include "funktion.h"


void deletSpicok(Spicok* mas, int size, int index)
{
    string da;
    cout << "вы точно хотите удалить:  " << mas[index].title << "  choose Y/N  "; cin >> da;
    if (da == "Y")
    {
        mas[index].title = '\0';
        mas[index].priority = '\0';
        mas[index].description = '\0';
        mas[index].day = '\0';
        mas[index].manth = '\0';
        mas[index].year = '\0';
    }
    else
    {
        cout << "EXIT" << endl;
    }
}
void addSpicok(Spicok& d)
{
    cout << "¬ведите название задани€: "; cin >> d.title;
    cout << "¬ведите приоритет задани€ (от 1 до 10 где 1 наивысший приоритет!):"; cin >> d.priority;
    cout << "¬ведите  описание задани€: "; for (int i = 0; i < 2; i++) { getline(cin, d.description); }
    cout << "¬ведите  дату задани€ в формате день /мес€ц /год "; cin >> d.day, cin >> d.manth, cin >> d.year;
}
void editSpicok(Spicok* mas, int size, int index)
{
    if (index > size)
    {
        cout << "такого задани€ не введено" << endl;
        return;
    }
    cout << "¬ведите новое им€:"; cin >> mas[index].title;
    cout << "введите новый приоритет:"; cin >> mas[index].priority;
    cout << "¬ведите новое описание:"; for (int i = 0; i < 2; i++) { getline(cin, mas[index].description); }
    cout << "¬ведите новую дату:  в формате /день"; cin >> mas[index].day; cout << "/мес€ц"; cin >> mas[index].manth; cout << "/ год"; cin >> mas[index].year;
}
int findSpicok(Spicok* mas, int size, int prior, string name, string ops, int day, int manth, int yaer)
{
    for (int i = 0; i < size; i++)
    {
        if (mas[i].title == name)
        {
            return i;
        }
        else if (mas[i].priority == prior)
        {
            return i;
        }
        else if (mas[i].description == ops)
        {
            return i;
        }
        else if (mas[i].day == day)
        {
            return i;
        }
        else if (mas[i].manth == manth)
        {
            return i;
        }
        else if (mas[i].year == yaer)
        {
            return i;
        }
    }
    cout << "“акое задание отсутствует! " << endl;
    return -1;
}
void outputSpicok(Spicok* date, int size, int index1, int index2, int index3, int index4)
{



    if (index4 > 3)
    {
        cout << "нет такого параметра"  "\n" << "попробуй еще раз"; cin >> index4;

    }
    for (int i = 0; i < size; i++)
    {
        if (date[i].day == NULL && date[i].manth == NULL && date[i].year == NULL)
        {
            cout << "“акого задани€ не существует! " << endl;
        }
        break;
    }
    if (index4 == 1)
    {
        for (int i = 0; i < size; i++)
        {
            if (date[i].day == index1 && date[i].manth == index2 && date[i].year == index3)
            {
                cout << date[i].title << "  " << date[i].description << " day " << date[i].day << "manth " << date[i].manth << "year " << date[i].year;
            }
        }
    }
    if (index4 == 2)
    {
        for (int i = 0; i < size; i++)
        {
            if (date[i].manth == index2 && date[i].year == index3)
            {
                cout << date[i].title << "  " << date[i].description << " day " << date[i].day << " manth " << date[i].manth << "year " << date[i].year;
            }
        }

    }
    if (index4 == 3)
    {
        for (int i = 0; i < size; i++)
        {
            if (date[i].year == index3)
            {
                cout << date[i].title << "  " << date[i].description << " day " << date[i].day << " manth " << date[i].manth << "year " << date[i].year;
            }
        }
    }

}