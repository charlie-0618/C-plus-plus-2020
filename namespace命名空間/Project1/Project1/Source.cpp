#include <iostream>
#include "namsp.h"

void other(void);
void another(void);

int main(void)
{
	using Jack::Data_iformation;

	using Jack::showJack;

	Data_iformation gg = { {"charlie", "kitty"}, 260 };

	showJack(gg);

	other();

	another();
	std::cin.get();  //接收佇列中的'\n';
	std::cin.get();
	//system("pause");

	return 0;
}

void other(void)
{
	using std::cout;
	using std::endl;
	using namespace Jack;   //可以使用Jack內所有內容

	Person gg = { "jason", "mike" };

	showPerson(gg);

	cout << endl;

	Data_iformation zippy[3];

	for (int i = 0; i < 3; i++)
	{
		getJack(zippy[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		showJack(zippy[i]);
	}
}

void another(void)
{
	using charlie::Person;   //只能使用命名空間的struct charlie, 其它空間內的都無法使用, 要另行宣告

	Person gg = { "hi!", "yes!" };

	charlie::showPerson(gg);   //指定使用命名空間charlie::showPerson()函式

	std::cout << std::endl;
}