#pragma once
#ifndef MYTIME_H_
#define MYTIME_H_

class Time
{
private:
	int minute;
	int hour;
	double more_hour;
public:
	Time();
	Time(int m, int h);
	// operator overloading
	Time operator+(Time & t);
	Time operator*(double n);
	//friends
	friend Time operator*(double n, Time & t);   //�ŧi�٦���,�W�����B�Ͱ�
	void show();
};

#endif // !MYTIME_H_
