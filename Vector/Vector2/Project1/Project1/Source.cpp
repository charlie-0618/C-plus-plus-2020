#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

int main(void)
{


	vector<int> p1[4];
	vector<int> p2{5,8,10,6,4};
	//vector<int> p2(6);

	p1[0].push_back(11);
	p1[0].push_back(3);
	p1[0].push_back(8);

	p1[1].push_back(11);
	p1[1].push_back(9);
	p1[1].push_back(6);

	for (int j = 0; j < p2.size(); j++)
	{
		cout << p2.at(j) << endl;  //讀取Vector每個陣列裡的個別元素
	}

	cout << "------------------" << endl;

	for (int j = 0; j < 3; j++)
	{
		cout << p1[0].at(j) << endl;  //讀取Vector每個陣列裡的個別元素
	}

	cout << "------------------" << endl;

	for (int j = 0; j < 6; j++)
	{
		cout << "=>";  

		if (j == 5)
			cout << endl;

		Sleep(500);
	}

	vector<int>::iterator iter = p1[0].begin();

	for (int i = 0; iter != p1[0].end(); iter++, i++)
	{
		cout << *iter << endl;
	}

	vector<int>::iterator iter1 = p1[1].begin();

	for (int i = 0; iter1 != p1[1].end(); iter1++, i++)
	{
		cout << *iter1 << endl;
	}


	system("pause");

	return 0;
}