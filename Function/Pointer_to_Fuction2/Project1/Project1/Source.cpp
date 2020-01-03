#include <iostream>

using namespace std;

double * f1(double *arr, int n);
double * f2(double *arr, int n);
double * f3(double *arr, int n);

int main(void)
{
	double gg[3] = {120.003, 100.450, 200.305};

	double *(*p1)(double *, int) = f1;   //ミ夹ㄧ计, (*p1)单f1, 虏虫ㄓ弧碞琌 f1 传Θ *p1 ㄤ緇常妓

	auto p2 = f2;     //单 double *(*p2)(double *, int) = f2;

	double *(*pa[3])(double *, int) = {f1, f2, f3};

	auto pb = pa;    //单 double *(**pb)(double *, int) = pa;
					 //**pb 单 *pa[3],

	
	cout << p1 << ": " << *p1 << ": " << &p1 << endl;

	cout << (*p1)(gg, 5) << ": " << *((*p1)(gg, 5) + 1) << endl;

	cout << (*pa[0])(gg, 5) << ": " << *(*pa[0])(gg, 5) << endl;  //单︽(23︽)

	cout << (*pa[2])(gg, 5) << ": " << *(*pa[2])(gg, 5) << endl;

	cout << "---------------------------" << endl;

	for (int i = 0; i < 3; i++)
		cout << *pb[i](gg, 5) << endl;;

	cin.get();

	return 0;
}


double * f1(double *arr, int n)
{
	return arr;
}

double * f2(double *arr, int n)
{
	return arr+1;
}

double * f3(double *arr, int n)
{
	return arr+2;
}