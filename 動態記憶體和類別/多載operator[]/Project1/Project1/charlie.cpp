#pragma warning(disable : 4996)
#include <cstring>                 // string.h for some
#include "charlie.h"               // includes <iostream>
using std::cin;
using std::cout;
using std::endl;

int Charlie::num_strings = 0;

Charlie::Charlie()
{
	cout << "HI! I'm default constructor!" << endl;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}
Charlie::Charlie(const Charlie & cp)  //copy constructor
{
	cout << "Hi! I'm copy constructor" << endl;
	len = cp.len;
	str = cp.str;
	//str = new char[len + 1];
	//std::strcpy(str, cp.str);
	num_strings++;
}
Charlie::~Charlie()
{
	cout << "物件刪除" << endl;
}

//operator
char & Charlie::operator[](int i)
{
	return str[0];
}

void Charlie::operator=(char * s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];  //str = new char[len + 1];
	std::strcpy(str, s);
	//cout << strlen(str) << endl;
}

//friend
ostream & operator<<(ostream & ct, Charlie & st)
{
	ct << st.str << endl;

	return ct;
}

istream & operator>>(istream & is, Charlie & name)
{
	char temp[50];

	is.get(temp, 50);

	if (is)
	{
		delete[] name.str;   //刪除預設的str[0] = '\0'

		name.len = strlen(temp);
		name.str = new char[name.len + 1];
		std::strcpy(name.str, temp);
	}

	while (cin && cin.get() != '\n')
		continue;

	return is;
}