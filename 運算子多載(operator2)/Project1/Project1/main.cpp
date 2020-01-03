#include <iostream>
#include "mytime.h"

int main()
{
	using std::cout;
	using std::endl;

	Time plan;
	Time coding(40, 2);
	Time drinking(50, 5);
	Time total;

	cout << "plan: ";
	plan.show();
	cout << endl;

	cout << "coding: ";
	coding.show();
	cout << endl;

	cout << "drinking: ";
	drinking.show();
	cout << endl;

	//cout << "Coding Time: " << coding;
	cout << "Coding Time: " << coding << " hi~!!!" << endl;

	std::cin.get();
	return 0;
}