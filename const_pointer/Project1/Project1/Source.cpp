#include <iostream>

int main(void)
{
	int i = 10;

	int num1 = 20;

	const int * ptr1 = &i;

	*ptr1 = 30;  //不合法，因為const int *

	ptr1 = &num1; //合法



	int j = 10;

	int num2 = 20;

	int * const ptr2 = &j;

	*ptr2 = 30;  //合法

	ptr2 = &num2; //不合法，因為const ptr2 = &j

	return 0;
}