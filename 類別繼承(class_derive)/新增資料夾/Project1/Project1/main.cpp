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

	cout << endl << "�ǥͩm�W�C��: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << arr[i].Name() << endl;
	}

	cout << endl << "�έp���G: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << arr[i];
		cout << "������: " << arr[i].Average() << endl;
	}

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