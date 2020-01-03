#include <iostream>

using namespace std;

void val(int, int);
void ptr(int *, int *);
void ref(int &, int &);//以上為函式原型 function prototype

int main(void)
{
	int num1 = 10;

	int num2 = 20;

	cout << num1 << " " << num2 << endl;

	ref(num1, num2);
	//ref(num1 + 1, num2);  //錯誤, num1 + 1不是變數

	double && test_ref = 36.05;  //rvalue reference 要用 && 直接設變數

	cout << num1 << " " << num2 << endl;

	ptr(&num1, &num2);

	cout << num1 << " " << num2 << endl;

	val(num1, num2);

	cout << num1 << " " << num2 << endl;

	cin.get();

	return 0;
}

//reference相當於ex: int * const ptr , 不可以改變地址，但是可以改變參數的值
//兩種變數，但是同一個參考值
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