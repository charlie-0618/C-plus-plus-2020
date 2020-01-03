#include <iostream>

using namespace std;

int * compare_arrysize(int *ptr1, int size)
{

	int *ptr3 = ptr1;
	
	static int arr2[] = {0};

	int num = 0;

	int save_ptr = 0;

	for (int i = 0; i < 10; i++)
	{
		save_ptr = *(ptr1 + i);

		for (int r = 0; r < 10; r++)
		{
			if (*(ptr3 + i) > *(ptr1 + r))
			{
				num++;
			}
		}
		
		arr2[num] = save_ptr;

		num = 0;
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << arr2[i] << endl;
	}
	
	cout << "----------------------------" << endl;
	
	int *ptr2 = arr2;
	
	for (int i = 0; i < 10; i++)
	{
		cout << *(ptr2+i) << endl;
	}

	return arr2;
}


int main(void)
{
	
	int arr1[] = { 30, 12, 55, 31, 98, 11, 41, 80, 66, 21 };
	
	int size = sizeof(arr1) / sizeof(arr1[0]);
	
	cout << size << endl;
	
	cout << "----------------------------" << endl;

	int *ptr = compare_arrysize(arr1 , size);
	
	cout << "----------------------------" << endl;
	
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
