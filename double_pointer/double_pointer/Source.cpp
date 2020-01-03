// Function1.cpp: 定義主控台應用程式的進入點。
//
#include <iostream>

using namespace std;

int main()
{
	int a = 10;

	int b = 20;

	int *ptr = &a;

	int *gg = &b;

	int **ptr1;

	ptr1 = &gg;

	*ptr1 = &a;

	cout << a << " &a = " << &a << endl;

	cout << b << " &b = " << &b << endl;

	cout << *ptr << " ptr = " << ptr << "  &ptr = " << &ptr << endl;

	cout << *gg << " gg = " << gg << "  &gg = " << &gg << endl;

	cout << **ptr1 << " *ptr1 = " << *ptr1 << "  ptr1 = " << ptr1 << "  &ptr1 = " << &ptr1 << endl;

	system("pause");

	return 0;
}



