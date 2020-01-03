#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	IK test = IK(8);
	test.Viewik();

	IK *ptr = new IK(10);
	ptr->Viewik();

	cin.get();

	return 0;
}