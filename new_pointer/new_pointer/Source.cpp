#include <iostream>

using namespace std;

int main(void)
{
	int *ptr1 = new int(42); //�t�m�@��int�Ŷ��A�}�x�s���42

	int *ptr = new int[5];  //�t�m5��int�Ŷ����@���}�C

	int *ptr2 = new int[5*4];  //�t�m5*4��int�Ŷ����G���}�C

	ptr[0] = 2;
	//ptr[1] = 4;

	*(ptr + 1) = 4;  //���P�� ptr[1] = 4

	cout << *ptr1 << " " << ptr <<  " " << &ptr << endl;

	cout << "-----------------------" << endl;

	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) = i;

		ptr[i] = i;

		cout << "*(ptr + " << i << ") = " << *(ptr + i) << endl;

		cout << "*ptr[" << i << "] = " << ptr[i] << endl;
	}

	cout << "-----------------------" << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			*(ptr2 + 4 * i + j) = j;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "*(ptr2 + 4 * " << i << " + " << j << ") = " << *(ptr2 + 4 * i + j) << endl;
		}
	}

	delete [] ptr;
	delete [] ptr1;
	delete [] ptr2;

	system("pause");

	return 0;
}