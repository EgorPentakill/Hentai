#include <iostream>
using namespace std;


void main()
{

	char action;
	double firstnumber;
	double secondnumber;
	double result;
	int option;


	do

	{




		setlocale(LC_ALL, "Russian");
		cout << "Whassup homie" << endl;
		cout << "Напиши первое число сюда!" << endl;
		cin >> firstnumber;
		cout << "Напиши математический знак" << endl;
		cin >> action;

		switch (action)
		{
		case '+':
			cout << "А сюда второе чисдло!" << endl;
			cin >> secondnumber;
			cout << firstnumber + secondnumber << endl;
			break;

		case '-':
			cout << "А сюда второе число!" << endl;
			cin >> secondnumber;
			cout << firstnumber - secondnumber << endl;
			break;

		case '*':
			cout << "А сюда второе число!" << endl;
			cin >> secondnumber;
			cout << firstnumber * secondnumber << endl;
			break;

		case '/':
			cout << "А сюда второе число!" << endl;
			cin >> secondnumber;
			cout << firstnumber / secondnumber << endl;
			break;


		default:
			cout << "Ошибка! Я умею считать только умножение, деление, сложение или вычитание!" << endl;
			system("pause");
			break;


		}
		cout << "Продолжить - 1" << endl;
		cout << "Выход - 2" << endl;
		cin >> option;

	} while (option == 1);





}