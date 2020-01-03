#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(void)
{
	//建立一個vector
	vector<string> jason(4);

	char line2[100];

	fstream fin2;

	fin2.open(R"(D:/suger.txt)", ios::in);

	int num1 = 0;
	
	while (fin2.get(line2, sizeof(line2))) {   //fin2.getline(line2, sizeof(line2), '\n')
		//std::cout << line2 << endl;  //輸出記事本内容
		fin2.get();

		if(num1 == 0)
		{
			jason.at(num1) = line2;
		}
		if (num1 == 1)
		{
			jason.at(num1) = line2;
		}
		if (num1 == 2)
		{
			jason.at(num1) = line2;
		}
		if (num1 == 3)
		{
			jason.at(num1) = line2;
		}
		num1++;
	}

	//jason.at(num1) = line2;

	fin2.close();

	for (string jason_string : jason)
	{
		cout << jason_string << endl;
	}

	for (int i = 0; i < jason.size(); i++)
	{
		cout << jason.at(i) << endl;
	}

	cout << "------------------" << endl;

	vector<string>::iterator iter2 = jason.begin();

	for (int i = 0; iter2 != jason.end(); iter2++, i++)
	{
		cout << *iter2 << endl;
	}

	cout << "------------------" << endl;


	//建立4個vector, 每個vector可以當陣列存取
	vector<string> charlie[4];

	char line1[100];

	fstream fin1;

	fin1.open(R"(D:/suger.txt)", ios::in);

	int num = 0;

	while (fin1.getline(line1, sizeof(line1), '\n')) {
		std::cout << line1 << endl;  //輸出記事本内容
		
		charlie[0].push_back(line1);

		charlie[1].push_back(line1);
		
		/*if(num == 0)
		{
			charlie.at(num) = line1;
		}
		if (num == 1)
		{
			charlie.at(num) = line1;
		}
		if (num == 2)
		{
			charlie.at(num) = line1;
		}
		if (num == 3)
		{
			charlie.at(num) = line1;
		}*/
		num++;
	}

	fin1.close();

	

	cout << "------------------" << endl;


	vector<string>::iterator iter = charlie[0].begin();

	for (int i = 0; iter != charlie[0].end(); iter++, i++)
	{
		cout << *iter << endl;
	}

	iter = iter - 4; //iter重新回到第一個元素的位址

	vector<string>::iterator iter1 = charlie[1].begin();

	for (int i = 0; iter1 != charlie[1].end(); iter1++, i++)
	{
		cout << *iter1 << endl;
	}

	cout << "------------------" << endl;

	//vector二維陣列的用法:
	vector< vector<int> > test;

	for (int j = 0; j < 6; j++)
	{
		vector<int> yoyo1;

		for (int g = 0; g < 6; g++)
		{
			yoyo1.push_back(g);
		}

		test.push_back(yoyo1);
	}

	for (int j = 0; j < test.size(); j++)
	{
		for (int g = 0; g < test[j].size(); g++)
		{
			cout << test[j][g] << endl;
		}
	}

	

	system("pause");

	return 0;
}