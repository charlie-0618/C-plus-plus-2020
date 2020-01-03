#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>

class Time
{
private:
	int minute;
	int hour;
	double more_hour;
public:
	Time();
	Time(int m, int h);

	//friend void operator<<(std::ostream & os, Time & t);   //方法一: 宣告夥伴函數(有缺點)
	friend std::ostream & operator<<(std::ostream & os, Time & t);   //方法二: 宣告夥伴函數

	void show();  //一般成員函式
};

#endif // !MYTIME_H_