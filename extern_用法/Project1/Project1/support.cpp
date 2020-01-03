#include <iostream>

using namespace std;

//static double a = 2.97;   //內部連接，跟下方比，會優先使用此a，只允許在此cpp內使用
extern double a;   // support.cpp為外部檔案, 所以要用到external.cpp 的 a 要 extern


void update(double x)
{
	cout << "In update function Global a: " << a << endl;

	a += x;

	cout << "In update function Global a+x : " << a << endl;
}

void local()
{
	double a = 9.66;   //當區域變數與全域變數相同名稱時，會遮蔽掉extern double a

	cout << "In local function Global a: " << a << endl;

	cout << "Real Global a is: " << ::a << endl;   // ::表示此變數的全域版本
}