// file2.cpp -- contains functions called in file1.cpp
#include <iostream>
#include <cmath>
#include "coordin.h" // structure templates, function prototypes

using namespace std;

// convert rectangular to polar coordinates
polar rect_to_polar(rect &a)
{
	
	polar answer;

	answer.distance = a.y;
	answer.angle = a.x;

	return answer;      // ¦^¶Ç polar structure
}


void show_polar(polar a)
{

	cout << "distance = " << a.distance;
	cout << ", angle = " << a.angle;
	cout << " \n";
}
