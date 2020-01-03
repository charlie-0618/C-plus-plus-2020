#include <iostream>
#include <charlie.h>

using namespace std;


int main(void)
{
	
	int arr1[] = { 30, 12, 55, 31, 98, 11, 41, 80, 66, 21 };

	int arr2[] = { 30, 12, 55, 31, 98, 11, 41, 80, 66, 21 };

	int *ptr = compare_arrysize(arr1, arr2);
	
	for (int i = 0; i < 10; i++)
	{
		cout << *(ptr + i) << " ";
	}

	/*
	int arr2[10];

	memcpy(arr2, arr1, sizeof(arr1));

	int num = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int r = 0; r < 10; r++)
		{
			if (arr1[i] > arr1[r])
			{
				num++;
			}
		}

		arr2[num] = arr1[i];

		num = 0;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr2[i] << " ";
	}
	*/

	cout << endl;

	system("pause");

	return 0;

}