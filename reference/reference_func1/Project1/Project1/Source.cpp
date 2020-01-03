#include <iostream>

using namespace std;

void val(int, int);
void ptr(int *, int *);
void ref(int &, int &);//�H�W���禡�쫬 function prototype

int main(void)
{
	int num1 = 10;

	int num2 = 20;

	cout << num1 << " " << num2 << endl;

	ref(num1, num2);
	//ref(num1 + 1, num2);  //���~, num1 + 1���O�ܼ�

	double && test_ref = 36.05;  //rvalue reference �n�� && �����]�ܼ�

	cout << num1 << " " << num2 << endl;

	ptr(&num1, &num2);

	cout << num1 << " " << num2 << endl;

	val(num1, num2);

	cout << num1 << " " << num2 << endl;

	cin.get();

	return 0;
}

//reference�۷��ex: int * const ptr , ���i�H���ܦa�}�A���O�i�H���ܰѼƪ���
//����ܼơA���O�P�@�ӰѦҭ�
void ref(int &a, int &b)
{
	int temp = a;

	a = b;

	b = temp;
}

void ptr(int *a, int *b)
{
	*a = 100;
	*b = 70;
}

void val(int a, int b)
{
	a = 50;
	b = 90;
}