#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <tuple>

using namespace std;

typedef tuple<string, int> name_year;  //�w���w�q tuple<string, int> ������������� name_year �N�� �A ���쥻�� tuple<string, int> �٬O�i�H�Ӽ˨ϥΡA�����v�T
typedef vector<tuple<string, int>> test_year1;

using test_year2 = vector<tuple<string, int>>;  //�w���w�q,�P typedef �y�k�@��  

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

	for (auto gg1 : p1)   //auto ���P��W���� tuple<string, int>
	{
		cout << get<0>(gg1) << " " << get<1>(gg1) << endl;
	}

	cout << "p5:" << endl;

	for (name_year gg2 : p5)
	{
		cout << get<0>(gg2) << " " << get<1>(gg2) << endl;
	}



	cout << "------------------" << endl;


	//�G���}�C���t�~�Ϊk
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