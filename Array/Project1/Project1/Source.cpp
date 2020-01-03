#include <iostream>
#include <array>

using namespace std;

int main(void)
{
	array<int, 5> arr1 = {2,6,8,1,2};

	array<array<int, 5>, 5> arr2;

	for (int i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i] << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr2[i][j] = i;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr2[i][j];
		}

		cout << endl;
	}
	cout << "-------------------------" << endl;

	for (int i = 0; i < arr2.size(); i++)
	{
		for (int j = 0; j < arr2[i].size(); j++)
		{
			cout << arr2[i].at(j);
		}

		cout << endl;
	}
	cout << "-------------------------" << endl;


	system("pause");

	return 0;
}