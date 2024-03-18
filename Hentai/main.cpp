#include <iostream>
using namespace std;

bool userWantsToContinue()
{
    int option;
    cout << "Продолжить - 1" << endl;
    cout << "Выход - 2" << endl;
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
        cout << "Напиши первое число сюда!" << endl;

        while (!(cin >> firstnumber))
        {
            cout << "Ты тупой? Пиши число!" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }

        cout << "А сюда второе число!" << endl;

        while (!(cin >> secondnumber))
        {
            cout << "Ты тупой? Пиши число!" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }

        cout << "Напиши математический знак" << endl;

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
            cout << "Ошибка! Я умею считать только умножение, деление, сложение или вычитание!" << endl;
            break;
        }
    }

    while (userWantsToContinue());
    return 0;
}
			
