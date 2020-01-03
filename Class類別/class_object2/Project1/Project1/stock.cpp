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
	std::cout << "�ʶR�H�m�W: " << name << "  ";

	std::cout << "�ʶR�H����: " << idnum << "  ";

	std::cout << "��X���B: " << money << std::endl;
}

void stock::sell(const char idnum[11], double money)
{
	std::cout << "��a����: " << idnum << "  ";

	id = idnum;

	custom_deposit = money;

	interest_rate();
}

void stock::gg() const
{
	std::cout << "const����I�s���\!" << std::endl;
}