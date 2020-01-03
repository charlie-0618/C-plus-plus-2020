#include <iostream>
#include "Student.h"

using namespace std;

void set(Student & st, int n);

int main() {

	Student arr[3] = {Student(3), Student(3), Student(3)};

	std::valarray<double> test;
	cout << test.size() << endl;

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