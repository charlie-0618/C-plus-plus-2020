#include <iostream>
#include "stock.h"

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