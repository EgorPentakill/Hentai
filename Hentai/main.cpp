#include <iostream>
using namespace std;

bool userWantsToContinue()
{
    int option;
    cout << "���������� - 1" << endl;
    cout << "����� - 2" << endl;
    cin >> option;
    return option == 1;
}

int main()
{

    char action;
    double firstnumber;
    double secondnumber;
    double result;

    do
    {
        setlocale(LC_ALL, "Russian");
        cout << "Whassup homie" << endl;
        cout << "������ ������ ����� ����!" << endl;

        while (!(cin >> firstnumber))
        {
            cout << "�� �����? ���� �����!" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }

        cout << "� ���� ������ �����!" << endl;

        while (!(cin >> secondnumber))
        {
            cout << "�� �����? ���� �����!" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }

        cout << "������ �������������� ����" << endl;

        cin >> action;

        switch (action)
        {
        case '+':
            cout << firstnumber + secondnumber << endl;
            break;
        case '-':
            cout << firstnumber - secondnumber << endl;
            break;

        case '*':
            cout << firstnumber * secondnumber << endl;
            break;
        case '/':
            cout << firstnumber / secondnumber << endl;
            break;
        default:
            cout << "������! � ���� ������� ������ ���������, �������, �������� ��� ���������!" << endl;
            break;
        }
    }

    while (userWantsToContinue());
    return 0;
}
			
