#include <iostream>
#include "Student.h"

using namespace std;

void set(Student & st, int n);

int main() {
	static int ii = 99;
	ii -= 9;
	cout << ii << endl;

	Student arr[3] = { Student(3), Student(3), Student(3) };

	//valarray測試用法
	std::valarray<double> test = {1,2};
	std::valarray<double> test1 = {5,2};
	std::valarray<double> test2(2);
	cout << test.size() << endl;
	test2 = test1 + test;
	cout << test2[0] << endl;
	//valarray測試用法
	

	for (int i = 0; i < 3; i++) {
		set(arr[i], 3);
	}

	cout << endl << "學生姓名列表: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << arr[i].Name() << endl;
	}

	cout << endl << "統計結果: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << arr[i];
		cout << "平均數: " << arr[i].Average() << endl;
	}

	//ii -= 9;
	cout << arr[0][0] << endl;  //運算子多載[]，會先做運算子再做cout
	cout << endl << arr[0].max() << endl;
	

	cin.get();
	return 0;
}

void set(Student & st, int n) {
	cout << "輸入學生姓名: ";
	getline(cin, st);   //夥伴函數getline()
	cout << "輸入學生成績: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> st[i];   //夥伴運算子多載[]
	}
	cin.get();
}