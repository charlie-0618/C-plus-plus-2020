#include <iostream>

using namespace std;

//static double a = 2.97;   //�����s���A��U���A�|�u���ϥΦ�a�A�u���\�b��cpp���ϥ�
extern double a;   // support.cpp���~���ɮ�, �ҥH�n�Ψ�external.cpp �� a �n extern


void update(double x)
{
	cout << "In update function Global a: " << a << endl;

	a += x;

	cout << "In update function Global a+x : " << a << endl;
}

void local()
{
	double a = 9.66;   //��ϰ��ܼƻP�����ܼƬۦP�W�ٮɡA�|�B����extern double a

	cout << "In local function Global a: " << a << endl;

	cout << "Real Global a is: " << ::a << endl;   // ::��ܦ��ܼƪ����쪩��
}