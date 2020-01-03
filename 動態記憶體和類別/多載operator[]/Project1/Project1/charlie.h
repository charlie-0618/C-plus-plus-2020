#pragma once
#ifndef CHARLIE_H_
#define CHARLIE_H_
#include <iostream>
using std::ostream;
using std::istream;

class Charlie
{
private:
	char * str;             // pointer to string
	int len;                // length of string
	static int num_strings; // number of objects
public:
	Charlie();
	Charlie(const Charlie & cp);  //copy constructor
	~Charlie();
	int length() const { return len; }
	//operator
	char & operator[](int i);
	void operator=(char * s);
	//friend
	friend ostream & operator<<(ostream & ct, Charlie & st);
	friend istream & operator>>(istream & is, Charlie & name);
};
#endif