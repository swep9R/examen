#include <iostream>
#include <string>
#include <windows.h> 
#include "funktion.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int lenght = 10;
    Spicok Spicok1[10] = {};
    int menu; int number; int n; int priority;
    string title; string description;
    int day = 0;
    int manth = 0;
    int year = 0;
    do
    {
        cout << "MENU" << endl;
        cout << "1 - ������ ����� ������;" << endl;
        cout << "2 - ������� ������;" << endl;
        cout << "3 - ������������� �������;" << endl;
        cout << "4 - ����� �������;" << endl;
        cout << "5 - ������� �� ����� �������;" << endl;
        cout << "6 - exit;" << endl;

        cout << "������ ����� ����: " << endl;
        cin >> menu;
        system("cls");
        switch (menu)
        {
        case 1:
        {
            cout << "choose the col task" << endl;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                addSpicok(Spicok1[i]);
            }
            break;
        }
        case 2:
        {
            cout << "choose the col delete task" << endl;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "enter the index when you wont delete" << endl;
                cin >> number;
                deletSpicok(&Spicok1[i], lenght, number);
            }
            break;
        }
        case 3:
        {
            cout << "choose the col edit task" << endl;
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cout << "enter the index when you wont edit" << endl;
                cin >> number;
                editSpicok(&Spicok1[i], lenght, number);
            }
            break;
        }
        case 4:
        {   cout << "choose the col find task" << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "������� �������� �������: "; cin >> title;
            cout << "������� ��������� ������� (�� 1 �� 10 ��� 1 ��������� ���������!):"; cin >> priority;
            cout << "�������  �������� �������: "; for (int i = 0; i < 2; i++) { getline(cin, description); }
            cout << "�������  ���� ������� � ������� ���� /������/����� "; cin >> day; cin >> manth; cin >> year;
            if (findSpicok(&Spicok1[i], lenght, priority, title, description, day, manth, year) == 0)
            {
                cout << " task find " << endl;
            }
            else
            {
                cout << " fail dont find " << endl;
            }
        }

        break;
        }
        case 5:
        {
            cout << "enter the col how you wont cout" << endl;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "������� ���������� ��� ���� �� ���� - 1" << endl;
                cout << "������� ���������� ��� ���� �� ����� - 2" << endl;
                cout << "������� ���������� ��� ���� �� ��� - 3" << endl;
                cin >> number;
                if (number == 1) { cin >> day; cin >> manth; cin >> year; }
                if (number == 2) { cin >> manth; cin >> year; }
                if (number == 3) { cin >> year; }
                outputSpicok(&Spicok1[i], lenght, day, manth, year, number);
            }

            break;
        }
        default:
            break;

        }
        if (menu >= 7)
        {
            break;
        }

    } while (true);

}