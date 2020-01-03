#include <iostream>
#include "charlie.h"

/*struct gg
{
	Item item;
};*/

int main()
{
	const char * ch = "i love";  //ch == &ch[0] ,  *(ch + 0) == ch[0]

	std::cout << ch << ">>" << (ch + 2) << std::endl;

	Charlie gg = 3.14;

	double num1 = double(gg);  //有強制轉換double()

	int num2 = gg;   //自動判別轉換形態

	std::cout << num1 << "   " << num2 << std::endl;


	double gg1 = 5.1;
	Charlie total;

	total = gg + gg1;   //運算子多載operator
	std::cout << "****" << std::endl;

	std::cout << total.test << std::endl;

	std::cin.get();
	return 0;
}