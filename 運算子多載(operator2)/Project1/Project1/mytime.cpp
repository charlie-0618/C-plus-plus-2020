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

//�Ĥ@�ؤ�k: ���O�᭱����b�L�r��
/*void operator<<(std::ostream & os, Time & t)   //�٦��ơA�ǤJ����cout
{
	Time sum;
	sum.minute = t.minute % 60;
	sum.more_hour = t.hour + t.minute / 60;
	
	os << " minute: " << sum.minute << " hour: " << sum.more_hour << std::endl;

}*/

//�ĤG�ؤ�k: �^�ǫ�A�᭱��L�r��
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