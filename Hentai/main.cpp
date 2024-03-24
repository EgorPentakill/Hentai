#include <iostream>
using namespace std;
struct Expressions {
        float a;
        float b;
        char c;
        float d;
    };
char action;
float firstnumber;
float secondnumber;
float result;
bool userWantsToContinue()
{
    int option;
    cout << "Продолжить - 1" << endl;
    cout << "Выход - 2" << endl;
    cin >> option;
    return option == 1;
}
Expressions readExpressions()
{
    Expressions exp;
    exp.a = firstnumber;
    exp.b = secondnumber;
    exp.c = action;
    cout << "Whassup homie" << '\n';
    cout << "Напиши первое число сюда!" << '\n';

    while (!(cin >> exp.a))
    {
        cout << "Ты тупой? Пиши число!" << '\n';
        cin.clear();
        cin.ignore(32767, '\n');
    }

    cout << "А сюда второе число!" << '\n';

    while (!(cin >> exp.b))
    {
        cout << "Ты тупой? Пиши число!" << '\n';
        cin.clear();
        cin.ignore(32767, '\n');
    }

    cout << "Напиши математический знак" << '\n';

    cin >> exp.c;
    return exp;
}
float calculateExpressions(Expressions exp)
{
    exp.d = result;
    switch (exp.c)
    {
    case '+':
        result = exp.a + exp.b;
       
        break;
    case '-':
        result = exp.a - exp.b;
        
        break;
    case '*':
        result = exp.a * exp.b;
        
        break;
    case '/':
        result = exp.a / exp.b;
       
        break;
    default:
        cout << "Ошибка! Я умею считать только умножение, деление, сложение или вычитание!" << endl;
        break;
    }
    return result;
}
void printResult(float result)
{
    cout << result << endl;
}
void makeSomeCalculations()
{
    Expressions exp = readExpressions();
    result = calculateExpressions(exp);
    printResult(result);
}


    int main()
    {
        setlocale(LC_ALL, "Russian");
        do
        {
            makeSomeCalculations();
        }

        while (userWantsToContinue());
        return 0;

    }

			
