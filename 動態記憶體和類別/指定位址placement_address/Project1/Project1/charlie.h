#include <iostream>
#include <string>
#ifndef CHARLIE_H_
#define CHARLIE_H_

using std::string;

class Charlie
{
private:
	string words;
	int number;
	int test;
public:
	//Charlie();
	Charlie(const char * s);
	//const string & s = "hi! charlie", int i = 0
	Charlie(const string & s = "hi! charlie", int i = 0)   //當有內嵌函數(inline fuction)時，變為預設函數
	{
		words = s;
		number = i;
		std::cout << words << "\n\n";
	}
	~Charlie();
	void show();
};

#endif // !CHARLIE_H_
