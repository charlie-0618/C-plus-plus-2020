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
	std::cin.get();  //������C����'\n';
	std::cin.get();
	//system("pause");

	return 0;
}

void other(void)
{
	using std::cout;
	using std::endl;
	using namespace Jack;   //�i�H�ϥ�Jack���Ҧ����e

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
	using charlie::Person;   //�u��ϥΩR�W�Ŷ���struct charlie, �䥦�Ŷ��������L�k�ϥ�, �n�t��ŧi

	Person gg = { "hi!", "yes!" };

	charlie::showPerson(gg);   //���w�ϥΩR�W�Ŷ�charlie::showPerson()�禡

	std::cout << std::endl;
}