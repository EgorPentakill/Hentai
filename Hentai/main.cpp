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
		cout << "������ ������ ����� ����!" << endl;
		cin >> firstnumber;
		cout << "������ �������������� ����" << endl;
		cin >> action;

		switch (action)
		{
		case '+':
			cout << "� ���� ������ ������!" << endl;
			cin >> secondnumber;
			cout << firstnumber + secondnumber << endl;
			break;

		case '-':
			cout << "� ���� ������ �����!" << endl;
			cin >> secondnumber;
			cout << firstnumber - secondnumber << endl;
			break;

		case '*':
			cout << "� ���� ������ �����!" << endl;
			cin >> secondnumber;
			cout << firstnumber * secondnumber << endl;
			break;

		case '/':
			cout << "� ���� ������ �����!" << endl;
			cin >> secondnumber;
			cout << firstnumber / secondnumber << endl;
			break;


		default:
			cout << "������! � ���� ������� ������ ���������, �������, �������� ��� ���������!" << endl;
			system("pause");
			break;


		}
		cout << "���������� - 1" << endl;
		cout << "����� - 2" << endl;
		cin >> option;

	} while (option == 1);





}