#pragma once
#include <iostream>

using namespace std;

int * compare_arrysize(int arr1[10], int arr2[10])
{

	int *ptr1 = arr1;

	int *ptr2 = arr2;

	int num = 0;

	int save_ptr = 0;

	for (int i = 0; i < 10; i++)
	{
		save_ptr = *(ptr1 + i);

		//cout << save_ptr << endl;

		for (int r = 0; r < 10; r++)
		{
			if (*(ptr1 + i) > arr1[r])
			{
				num++;
			}
		}

		arr2[num] = save_ptr;

		num = 0;
	}

	return ptr2;

}