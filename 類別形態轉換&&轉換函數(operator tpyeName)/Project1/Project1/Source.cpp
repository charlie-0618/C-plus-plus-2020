#include <iostream>
#include "charlie.h"

Charlie::Charlie()
{
	std::cout << "constructor!" << std::endl;
}
Charlie::Charlie(double num)
{
	std::cout << "hi!" << std::endl;
	test = num;
}
Charlie::Charlie(const Charlie &cp)  //copy constructor狡籹篶
{
	std::cout << "copy!!" << std::endl;
	test = cp.test;
}
Charlie::~Charlie()
{
	std::cout << "bye!!!" << std::endl;
}

//conversion function
Charlie::operator int()   //锣传ㄧ计ぃ盿Τ把计ぃ﹚肚篈
{
	std::cout << "operator int" << std::endl;
	return int(test + 2);
}

Charlie::operator double()
{
	std::cout << "operator double" << std::endl;
	return test;
}

//operator
Charlie  Charlie::operator+(double & st2)
{
	std::cout << "operator+" << std::endl;

	Charlie total1;

	total1.test = test + st2;

	std::cout << "$$$$" << std::endl;
	return total1;
}

//friend
/*Charlie operator+(Charlie & st1, double & st2)
{
	std::cout << "operator+" << std::endl;
	Charlie total;
	total.test = st1.test + st2;

	return total;
}*/