#include <iostream>
#include "Header.h"

using namespace std;

IK::IK()
{
	cout << "hi~~~" << endl;
}

IK::IK(int f = 9)
{
	cout << "***";
	fuss = f;
}

void IK::Viewik()
{
	cout << fuss << endl;
}
