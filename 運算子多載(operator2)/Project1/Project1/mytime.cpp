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

//第一種方法: 但是後面不能在印字串
/*void operator<<(std::ostream & os, Time & t)   //夥伴函數，傳入物件cout
{
	Time sum;
	sum.minute = t.minute % 60;
	sum.more_hour = t.hour + t.minute / 60;
	
	os << " minute: " << sum.minute << " hour: " << sum.more_hour << std::endl;

}*/

//第二種方法: 回傳後，後面能印字串
std::ostream & operator<<(std::ostream & os, Time & t)
{
	Time sum;
	sum.minute = t.minute % 60;
	sum.more_hour = t.hour + t.minute / 60;

	os << " minute: " << sum.minute << " hour: " << sum.more_hour;
	return os;
}

void Time::show()
{
	std::cout << "Hour= " << hour << " More_Hour= " << more_hour << " Minute= " << minute << std::endl;
}