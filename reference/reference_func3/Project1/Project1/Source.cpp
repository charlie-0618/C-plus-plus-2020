#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream &os, const double *num);

int main()
{
	ofstream fout;

	const char *fn = "test.txt";

	cout << fn << " " << &fn[0] << endl;

	fout.open(fn);

	//-----------------------------------------------------------------
	double g = 120.3376;

	cout.setf(ios_base::scientific);  //設定console輸出流為科學記號格式

	cout << g << endl;

	cout.unsetf(ios_base::scientific);  //取消設定console輸出流為科學記號格式

	cout << g << endl;
	//-----------------------------------------------------------------

	if (!fout.is_open())
	{
		cout << "檔案開啟失敗!" << endl;
	}

	double num[2];

	for (int i = 0; i < 2; i++)
	{
		(cin >> num[i]).get();
	}

	file_it(fout, num);  //寫入至檔案裡
	file_it(cout, num);  //顯示在console上

	//fout.setf(ios_base::fixed);   //在一般主程式裡設定 ofstream 物件寫入格式

	system("pause");

	return 0;
}


void file_it(ostream &os, const double *num)   //將 ofstream 物件傳入函式的用法
{
	ios_base::fmtflags initial;  //用來記錄設定格式, 用變數 initial 儲存

	initial = os.setf(ios_base::fixed);   //ios_base::fixed 正常方式顯示(非科學記號)

	os.setf(ios_base::showpoint);  //ios_base::showpoint 顯示小數點

	for (int i = 0; i < 2; i++)
	{
		os.width(10);   //等於fout.width(10) , 表示你要的寬度(包含數字)
		os.precision(3);  //等於fout.precision(2) , 表示小數點右邊顯示幾位

		os << *(num + i);

		os.width(10);
		os << "hi" << endl;  //寫入檔案一定要以 \n 結尾，作為結束字元，輸入的才會顯示出來
	}

	os.setf(initial);
}