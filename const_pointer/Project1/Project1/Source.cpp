#include <iostream>

int main(void)
{
	int i = 10;

	int num1 = 20;

	const int * ptr1 = &i;

	*ptr1 = 30;  //���X�k�A�]��const int *

	ptr1 = &num1; //�X�k



	int j = 10;

	int num2 = 20;

	int * const ptr2 = &j;

	*ptr2 = 30;  //�X�k

	ptr2 = &num2; //���X�k�A�]��const ptr2 = &j

	return 0;
}