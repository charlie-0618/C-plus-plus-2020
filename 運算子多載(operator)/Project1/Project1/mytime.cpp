#include <iostream>
#include "mytime.h"

Time::Time()
{
	minute = 0;
	hour = 0;
	more_hour = 0.0;
}
Time::Time(int m, int h)
{
	minute = m;
	hour = h;
	more_hour = 0.0;
}
Time Time::operator+(Time & t)
{
	Time sum;
	sum.minute = (minute + t.minute) % 60;
	sum.hour = hour + t.hour + (minute + t.minute) / 60;

	return sum;
}

Time Time::operator*(double n)
{
	Time sum;
	sum.minute = minute % 60;
	sum.more_hour = hour * n + minute / 60;
	return sum;
}


Time operator*(double n, Time & t)   //夥伴函數，怕使用者輸反，在建立一個備案，同樣回傳結果
{                                    //非Time類別成員函數，所以不用Time::，但是有一樣的權限!!
	Time sum;
	sum.minute = t.minute % 60;
	sum.more_hour = t.hour * n + t.minute / 60;
	return sum;
}

void Time::show()
{
	std::cout << "Hour= " << hour  << " More_Hour= " << more_hour << " Minute= " << minute << std::endl;
}