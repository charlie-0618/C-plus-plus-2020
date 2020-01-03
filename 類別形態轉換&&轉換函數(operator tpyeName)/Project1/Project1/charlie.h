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
	operator int();   //沒有強制轉換
	explicit operator double();   //宣告explicit 強制使用轉換形態來呼叫 >>> double()
	//operator
	Charlie  operator+(double & st2);
	//friend 
	//friend Charlie operator+(Charlie & st1, double & st2);
};

#endif // !CHARLIE_H_
