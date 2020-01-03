#include <iostream>

using namespace std;

int *f1(int *);
int *f2(int *);
int *f3(int *);   //以上為函式原型 function prototype

int main(void)
{
	int test[3] = { 100, 200, 500 };

	int *(*p2[3])(int *) = { f1, f2, f3 };   //指標指向多個函式 pionter to functions

	int *(*p3[3])(int *) = { f1, f2, f3 };

	int *(*(*pd)[3])(int *) = &p2;  //(*(*pd)[3])代表這個pd指向的一維數組，裡面包含3個二維元素，並且都為函數指針

	int *(**pp2)(int *) = &p2[0];

	int a[3] = {1,2,3};
	int data[3][2] = { {110,200}, {300,400}, {500,600} };   //data代表一維數組(陣列)的第一個元素的地址 == &data[0]
															//data[0] 是 {110, 220} 的數組名, 也是第一個元素的地址 == &data[0][0]
	int *(*(*p)[3])(int *) = &p2;

	int (*f)[2] = &data[0];    //data代表一維數組(陣列)的第一個元素的地址 data == &data[0]

	//-------新增-------
	int (*g)[3][2] = &data;

	int test1[3] = { 1,2,3 };
	int *h = test1;  //== &test[0]
	int (*t)[3] = &test1;
	//-------新增-------

	cout << p2 << " " << &p2[0] << endl;

	cout << &f1 << endl;

	cout << p2 << " " << &p2 <<  " " << *(*(pd + 0) + 0) << endl;

	/*cout << "**pp2: " << **pp2 << "   *pp2: " << *pp2 << "   pp2: " << pp2 << "   &pp2: " << &pp2 << endl;
	cout << "*p2[0]: " << *p2[0] << "   p2[0]: " << p2[0] << "   &p2[0]: " << &p2[0] << endl;
	cout << **pd << " " << *pd << " " << pd << " "<< &pd << endl;*/

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