#include <iostream>
#ifndef STRINGBAD_H_
#define STRINGBAD_H_

class StringBad
{
private:
	char * str;
	int len;
	static int num_string;
public:
	StringBad();
	StringBad(const char * s);
	StringBad(const StringBad &st);  //½Æ»s«Øºc¤l
	~StringBad();
	//friend
	friend std::ostream & operator<<(std::ostream &os, StringBad & st);
};
#endif // !STRINGBAD_H_
