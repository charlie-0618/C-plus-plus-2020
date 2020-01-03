#include <iostream>

using namespace std;

typedef int *(*ptrfuc)(int *);   //定義一個函式指標, 簡化後面的宣告

int *f1(int *);
int *f2(int *);
int *f3(int *);   //以上為函式原型 function prototype

inline void gg()
{
	cout << "gg" << endl;    //內嵌函式
}

int main(void)
{
	ptrfuc func[3] = {f1, f2, f3};

	ptrfuc (*f)[3] = &func;

	ptrfuc p = func[0];

	cout << &f1 << " " << func[0] << " " << &func[0] << " " << func << endl;

	gg();

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