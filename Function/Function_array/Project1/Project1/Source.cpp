//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
const std::array<std::string, Seasons> Snames =
{ "Spring", "Summer", "Fall", "Winter" };

void fill(std::array<double, Seasons> * pa);
void show(std::array<double, Seasons> da);
void test(std::array<std::array<double, 2>, 4> *exp);

int main()
{
	std::array<double, 4> expenses;
	std::array<std::array<double, 2>,4> exp;

	test(&exp);
	fill(&expenses);
	show(expenses);
	std::cin.get();
	std::cin.get();
	return 0;
}

//--------------------二維Array陣列Function傳遞用法---------------------
void test(std::array<std::array<double, 2>, 4> *exp)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> ((*exp)[j])[i];

		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << ((*exp)[j])[i] << " ";
		}
		std::cout << std::endl;
	}
}
//-----------------------------------------------------------------------

void fill(std::array<double, Seasons> * pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << "Enter " << Snames[i] << " expenses: ";
		while (!(std::cin >> (*pa)[i]))
		{
			std::cin.clear();

			while (std::cin.get() != '\n')
				continue;
			std::cout << "輸錯咯!!" << std::endl;
		}
	}
}

void show(std::array<double, Seasons> da)
{
	double total = 0.0;
	std::cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Snames[i] << ": $" << da[i] << '\n';
		total += da[i];
	}
	std::cout << "Total: $" << total << '\n';
}


/*#include <iostream>
#include <array>

using namespace std;

const int num = 4;

const array<string, num> name = {"charlie", "jack", "marry", "alice"};

int main(void)
{
	

	return 0;
}

void gg(test *time)
{
	
}*/