// file1.cpp -- example of a three-file program
#include <iostream>
#include "coordin.h" // structure templates, function prototypes

using namespace std;
int main()
{
	rect rrplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rrplace.x >> rrplace.y)  // slick use of cin
	{
		pplace = rect_to_polar(rrplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Bye!\n";
	// keep window open in MSVC++
	/*
	cin.clear();
	while (cin.get() != '\n')
	continue;
	cin.get();
	*/
	return 0;
}
