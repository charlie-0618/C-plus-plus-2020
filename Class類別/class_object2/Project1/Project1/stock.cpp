#include <iostream>
#include "stock.h"

stock::stock()
{
	std::cout << "Hi! I'm constructor" << std::endl;
}

stock::stock(const std::string &co)
{
	std::cout << "Hi! I'm another constructor" << std::endl;
	std::cout << co << std::endl;
}

stock::~stock()
{
	std::cout << "bye, I'm destructor!!!" << std::endl;
}

void stock::buy(const std::string & name, const char *idnum, double money)
{
	std::cout << "購買人姓名: " << name << "  ";

	std::cout << "購買人身份: " << idnum << "  ";

	std::cout << "支出金額: " << money << std::endl;
}

void stock::sell(const char idnum[11], double money)
{
	std::cout << "賣家身份: " << idnum << "  ";

	id = idnum;

	custom_deposit = money;

	interest_rate();
}

void stock::gg() const
{
	std::cout << "const物件呼叫成功!" << std::endl;
}