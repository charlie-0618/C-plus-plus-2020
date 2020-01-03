#include <iostream>

using namespace std;

int *f1(int *);
int *f2(int *);
int *f3(int *);   //以上為函式原型 function prototype

int main(void)
{
	int test[3] = {100, 200, 500};

	int *(*p1)(int *) = f1;   //一般指向函數的指標 pointer to function

	int *(*p2[3])(int *) = {f1, f2, f3};   //指標指向多個函式 pionter to functions

	int *(**pp2)(int *) = p2 + 0;  //指標指向 p2+0 的第一個元素, pointer to the elements of p2

	cout << (*p2[1])(test) << endl;

	cout << *((**pp2)(test)) << endl;

	cout << "--------------------------------" << endl;

	cout << "*f1: " << *f1 << "   f1: " << f1 << "   &f1: " << &f1 << endl;
	cout <<"*p2[0]: " << *p2[0] << "   p2[0]: " << p2[0] << "   &p2[0]: " << &p2[0] << endl;
	cout << "**pp2: " << **pp2 << "   *pp2: " << *pp2 << "   pp2: " << pp2 << "   &pp2: " << &pp2 << endl;

	cin.get();

	return 0;
}

int *f1(int *ptr)
{
	return (ptr + 0);
}

int *f2(int *ptr)
{
	return (ptr + 1);
}

int *f3(int *ptr)
{
	return (ptr + 2);
}