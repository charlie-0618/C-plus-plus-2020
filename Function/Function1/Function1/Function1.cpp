// Function1.cpp: 定義主控台應用程式的進入點。
//
#include <iostream>
#include "stdafx.h"

using namespace std;

void arrtest(int);

int main()
{
	int arr[5] = {1,2,3,4,5};

	arrtest(arr);

    return 0;
}

void arrtest(int *ptr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr + i) << "  " << ptr[i] << endl;
	}
}

