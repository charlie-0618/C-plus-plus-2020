#include <iostream>

using namespace std;

double * f1(double *arr, int n);
double * f2(double *arr, int n);
double * f3(double *arr, int n);

int main(void)
{
	double gg[3] = {120.003, 100.450, 200.305};

	double *(*p1)(double *, int) = f1;   //�إ߫��Ш��, (*p1)����f1, ²��ӻ��N�O f1 ���� *p1 ��l���@��

	auto p2 = f2;     //���� double *(*p2)(double *, int) = f2;

	double *(*pa[3])(double *, int) = {f1, f2, f3};

	auto pb = pa;    //���� double *(**pb)(double *, int) = pa;
					 //**pb ���� *pa[3],

	
	cout << p1 << ": " << *p1 << ": " << &p1 << endl;

	cout << (*p1)(gg, 5) << ": " << *((*p1)(gg, 5) + 1) << endl;

	cout << (*pa[0])(gg, 5) << ": " << *(*pa[0])(gg, 5) << endl;  //���P��W�@��(23��)

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