#pragma once
#ifndef CHARLIE_H_
#define CHARLIE_H_

class Charlie
{
public:
	double test;
public:
	Charlie();
	Charlie(double num);
	Charlie(const Charlie &cp);
	~Charlie();
	//conversion function
	operator int();   //�S���j���ഫ
	explicit operator double();   //�ŧiexplicit �j��ϥ��ഫ�κA�өI�s >>> double()
	//operator
	Charlie  operator+(double & st2);
	//friend 
	//friend Charlie operator+(Charlie & st1, double & st2);
};

#endif // !CHARLIE_H_
