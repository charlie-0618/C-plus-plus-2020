#include "charlie.h"

/*Charlie::Charlie()
{
	std::cout << "hi! default constructor" << std::endl;
	words = "marry";
	number = 100;
}*/

Charlie::Charlie(const char * s) : test(123)  //
{
	std::cout << s << " " << test;

	test = 321;

	std::cout << " " << test << std::endl;
}


Charlie::~Charlie()
{
	std::cout << "bye! constructor" << std::endl;
}

void Charlie::show()
{
	std::cout << words << ", " << number << "\n\n";
}