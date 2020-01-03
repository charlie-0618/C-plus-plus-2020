#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <tuple>

using namespace std;

typedef tuple<string, int> name_year;  //預先定義 tuple<string, int> 之後相關的都用 name_year 代替 ， 但原本的 tuple<string, int> 還是可以照樣使用，不受影響
typedef vector<tuple<string, int>> test_year1;

using test_year2 = vector<tuple<string, int>>;  //預先定義,與 typedef 語法一樣  

int main(void)
{
	vector<tuple<string, int>> p1;

	vector<name_year> p5;

	test_year1 p6;

	p1.push_back(make_tuple("charlie", 1997));
	p1.push_back(make_tuple("jack", 2000));

	p5.push_back(make_tuple("peggy", 1990));
	p5.push_back(make_tuple("alice", 2008));

	cout << "p1:" << endl;

	for (tuple<string, int> gg : p1)
	{
		cout << get<0>(gg) << " " << get<1>(gg) << endl;
	}

	for (auto gg1 : p1)   //auto 等同於上面的 tuple<string, int>
	{
		cout << get<0>(gg1) << " " << get<1>(gg1) << endl;
	}

	cout << "p5:" << endl;

	for (name_year gg2 : p5)
	{
		cout << get<0>(gg2) << " " << get<1>(gg2) << endl;
	}



	cout << "------------------" << endl;


	//二維陣列的另外用法
	vector<vector<int>> p2;

	vector<int> p3{ 1,2,3,4,5 };
	vector<int> p4{ 1,2,3,4,5 };

	p2.push_back(p3);
	p2.push_back(p4);

	for (int j = 0; j < p2.size(); j++)
	{
		for (int i = 0; i < p2[j].size(); i++)
		{
			cout << p2[j].at(i);
		}

		cout << endl;
	}

	system("pause");

	return 0;
}