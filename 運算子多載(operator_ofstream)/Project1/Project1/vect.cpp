#include <iostream>
#include <string>
#include "vect.h"

namespace MY_VECTOR 
{
	Vector::Vector()
	{
		txt = "test.txt";
		txt1 = " charlie";
	}

	Vector::Vector(double test)
	{
		n = test + 10;
	}

	Vector::~Vector()
	{
		std::cout << "bye~" << std::endl;
	}

	void Vector::operator<<(std::ostream & os)
	{
		os << "i love mcu" << txt1;
	}

	std::ostream & operator<<(std::ostream & os, Vector & str)
	{
		os << "i love mcu ";

		return os;
	}
}

