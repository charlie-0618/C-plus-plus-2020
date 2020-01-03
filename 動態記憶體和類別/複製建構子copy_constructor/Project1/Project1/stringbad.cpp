#pragma warning(disable : 4996)
#include <cstring>
#include <string>
#include "stringbad.h"

int StringBad::num_string = 0;

using std::cout;
using std::endl;

StringBad::StringBad()
{
	cout << "on! No~" << endl;
}

StringBad::StringBad(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_string++;

	cout << "num_string: " << num_string << "  str: " << str << endl;
}

//copy constructor
StringBad::StringBad(const StringBad &st)
{
	cout << "hi! i'm copy constructor" << endl;
	num_string++;
	
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	//cout << str;
}

StringBad::~StringBad()
{
	cout << str << " object deleted ";
	num_string--;
	cout << " ³Ñ¤Uobject: " << num_string << endl << endl;
	delete[] str;
}

//friend
std::ostream & operator<<(std::ostream &os, StringBad & st)
{
	cout << ">>>>> ";
	os << st.str;
	return os;
}