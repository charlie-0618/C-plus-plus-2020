#include <iostream>

using namespace std;

double a = 0.03;   // external linkage 外部連接 , 可以用在此檔案以外的.cpp檔 (全域變數)

static double b = 0.5;   // internal linkage 內部連接 , 只能使用在external.cpp檔裡 (靜態變數)

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