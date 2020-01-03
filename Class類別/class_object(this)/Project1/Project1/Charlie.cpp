#include <iostream>
#include "charlie.h"

using namespace std;

int ww = 0;

Charlie::Charlie()
{
	ID = "";
	double money = 0.0;
	int year = 0;

	ww++;
	cout << "^^^^^" << this << "^^^^^" << ww << endl;
}

Charlie::Charlie(const std::string & Id, int y, double m)
{
	ID = Id;
	money = m;
	year = y;

	set_total();
}

Charlie::~Charlie()
{
}

void Charlie::show() const
{
	cout << "ID: " << ID << "  year: " << year << "  $$ => " << total << endl;
}

Charlie & Charlie::topval(Charlie & s)
{
	if (s.total > total)
	{
		return s;
	}
	else
		return *this;   //*this指的是*ptr物件
}

/*Charlie* Charlie::topval(Charlie & s)
{
	if (s.total > total)
	{
		return &s;
	}
	else
		return this;
}*/