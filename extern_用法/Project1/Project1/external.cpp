#include <iostream>

using namespace std;

double a = 0.03;   // external linkage �~���s�� , �i�H�Φb���ɮץH�~��.cpp�� (�����ܼ�)

static double b = 0.5;   // internal linkage �����s�� , �u��ϥΦbexternal.cpp�ɸ� (�R�A�ܼ�)

void update(double);

void local();

int main(void)
{
	cout << "Global a: " << a << endl;

	update(a);

	local();

	cin.get();

	return 0;
}