#pragma once
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Charlie
{
private:
	std::string ID;
	double money;
	int year;
	double total;
	void set_total() 
	{ 
		total = money + year * 10;  //�~���V�j���V�h
	}
public:
	Charlie();        
	Charlie(const std::string & co, int y, double m);
	~Charlie();
	void show() const;
	Charlie & topval(Charlie & s);
};

#endif