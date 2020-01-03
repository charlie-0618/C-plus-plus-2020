#include <iostream>
#include <new>

using namespace std;

struct test
{
	void *gg;
};

const int num = 512;   //等於static const int, 只能在此cpp檔案內用
const int n = 5;   //等於static const int, 只能在此cpp檔案內用

char buffer[num];   //全域變數

int main(void)
{
	//+++++++++++++++補充+++++++++++++++
	int a = 10;
	test t1;
	t1.gg = &a;

	cout << *((int *)t1.gg) << " " << (int *)t1.gg << " " << &a << endl << endl;
	//+++++++++++++++補充+++++++++++++++

	cout << (void *)buffer << " " << &buffer <<endl;   // 9月/2號

	double *p1, *p2;

	p1 = new double[n];   //配置出4*5位元組的記憶體位置

	p2 = new (buffer) double[n];   //將4*5大小的位元組存入buffer的記憶體位置 (placement new定址放置)

	cout << p1 << " " << p2 << " " << (void *)buffer << endl;   //(void *)buffer == (double *)buffer
												   //將回傳位置表示成任意形態指針
												   //**還未配置記憶體時, 用(void *)可以回傳記憶體位址**
	for (int i = 0; i < n; i++)
	{
		p1[i] = 1000.1 + i;
		p2[i] = 2020.2 + i;
	}

	for (int i = 0; i < n; i++)
	{
		cout << p1[i] << " at: " << &p1[i] << " | ";
		cout << p2[i] << " at: " << &p2[i] << endl;
	}

	cout << "*((double *)buffer + 2) : " << *((double *)buffer + 2) << endl << endl;   //告訴電腦形態為double指標, 並且地址移動2, 再顯示其值

	//--------------------------------------------------------
	//                        #範例2#
	//--------------------------------------------------------
	double *p3, *p4;

	p3 = new double[n];   //配置一個新的記憶體位置給p3

	p4 = new (buffer) double[n];   //overwrite會覆寫掉原本記憶體的內的值

	cout << p3 << " " << (void *)buffer << endl;   //(void *)buffer == (double *)buffer
												   //將回傳位置表示成任意形態指針
	for (int i = 0; i < n; i++)
	{
		p3[i] = 1000.1 + i;
		p4[i] = 2020.2 + i;
	}

	for (int i = 0; i < n; i++)
	{
		cout << p3[i] << " at: " << &p3[i] << " | ";
		cout << p4[i] << " at: " << &p4[i] << endl;
	}

	cout << endl << endl;

	//--------------------------------------------------------
	//                        #範例3#
	//--------------------------------------------------------
	delete[] p1;  //刪掉舊的記憶體位址

	p1 = new double[n];   //重新配一個位址

	p2 = new (buffer + 40) double[n];   //重置定址位址, 配一個 buffer + 40 的位置給 p2

	cout << p1 << " " << (void *)buffer << endl;

	for (int i = 0; i < n; i++)
	{
		*(p1 + i) = 400.40 + i;
		*(p2 + i) = 600.60 + i;
	}

	for (int i = 0; i < n; i++)
	{
		cout << *(p1 + i) << " at: " << p1 + i << " | ";
		cout << *(p2 + i) << " at: " << p2 + i << endl;
	}

	delete[] p1;
	delete[] p3;
	//delete[] p2;  不能對使用(buffer)指定記憶體作釋放

	cin.get();

	return 0;
}