#pragma once
#include <string>
#include <iostream>

namespace charlie
{
	struct Person
	{
		std::string Firstname;
		std::string Lastname;
	};

	void getPerson(Person &);
	void showPerson(Person &);

	using std::cout;
	using std::cin;
	void getPerson(Person &rp)
	{
		cout << "Enter first name: ";
		cin >> rp.Firstname;
		cout << "Enter last name: ";
		cin >> rp.Lastname;
	}

	void showPerson(Person &rp)
	{
		cout << rp.Firstname << " + " << rp.Lastname;
	}
}

namespace Jack
{
	using namespace charlie;   //�ϥ�using���O��, �i�H�ϥ�charlie���Ҧ����e

	struct Data_iformation
	{
		Person name;   //�إ�charlie�Ŷ���structure�ܼƥsname

		int amount;
	};

	void getJack(Data_iformation &);
	void showJack(Data_iformation &);

	using std::cout;
	using std::cin;
	void getJack(Data_iformation &rd)
	{
		getPerson(rd.name);
		cout << "Enter parse: ";
		while (!(cin >> rd.amount))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "���s��J: ";
		}
	}

	void showJack(Data_iformation &rd)
	{
		showPerson(rd.name);
		cout << ": $" << rd.amount << std::endl;
	}

}