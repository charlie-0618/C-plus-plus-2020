#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <tuple>

using namespace std;

int main(void)
{

	int y[3] = { 1,2,3 };

	for (int &test : y)
	{
		test *= 2;

		cout << test << " " << endl;
	}

	system("pause");

	return 0;
}