#include <iostream>
#include "Student.h"

using namespace std;

void set(Student & st, int n);

int main() {
	static int ii = 99;
	ii -= 9;
	cout << ii << endl;

	Student arr[3] = { Student(3), Student(3), Student(3) };

	//valarray���եΪk
	std::valarray<double> test = {1,2};
	std::valarray<double> test1 = {5,2};
	std::valarray<double> test2(2);
	cout << test.size() << endl;
	test2 = test1 + test;
	cout << test2[0] << endl;
	//valarray���եΪk
	

	for (int i = 0; i < 3; i++) {
		set(arr[i], 3);
	}

	cout << endl << "�ǥͩm�W�C��: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << arr[i].Name() << endl;
	}

	cout << endl << "�έp���G: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << arr[i];
		cout << "������: " << arr[i].Average() << endl;
	}

	//ii -= 9;
	cout << arr[0][0] << endl;  //�B��l�h��[]�A�|�����B��l�A��cout
	cout << endl << arr[0].max() << endl;
	

	cin.get();
	return 0;
}

void set(Student & st, int n) {
	cout << "��J�ǥͩm�W: ";
	getline(cin, st);   //�٦���getline()
	cout << "��J�ǥͦ��Z: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> st[i];   //�٦�B��l�h��[]
	}
	cin.get();
}