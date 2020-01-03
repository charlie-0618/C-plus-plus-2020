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
	using namespace charlie;   //使用using指令後, 可以使用charlie內所有內容

	struct Data_iformation
	{
		Person name;   //建立charlie空間的structure變數叫name

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
			cout << "重新輸入: ";
		}
	}

	void showJack(Data_iformation &rd)
	{
		showPerson(rd.name);
		cout << ": $" << rd.amount << std::endl;
	}

}