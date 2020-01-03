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

	//friend void operator<<(std::ostream & os, Time & t);   //��k�@: �ŧi�٦���(�����I)
	friend std::ostream & operator<<(std::ostream & os, Time & t);   //��k�G: �ŧi�٦���

	void show();  //�@�릨���禡
};

#endif // !MYTIME_H_