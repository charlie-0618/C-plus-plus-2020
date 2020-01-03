#include <iostream>
#include <string>
#include "worker.h"

using namespace std;

Worker::~Worker() { cout << "www" << endl; }

void Worker::Set() {
	cout << "員工姓名: ";
	getline(cin, name);
	cout << "員工ID: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void Worker::Show() {
	cout << "<顯示員工資料>" << endl;
	cout << "==>姓名: " << name;
	cout << "==>ID: " << id;
}


Waiter::~Waiter() { cout << "aaa" << endl; }

void Waiter::Set() {
	Worker::Set();
	cout << "給予消費: ";
	cin >> tip;
	while (cin.get() != '\n')
		continue;
}
void Waiter::Show() {
	Worker::Show();
	cout << "==>消費: " << tip;
}


const char *Programmer::language[] = { "C", "Java", "Python", "C_plusplus" };

Programmer::~Programmer() { cout << "ppp" << endl; }

void Programmer::Set() {
	Worker::Set();

	cout << "編程年齡: ";
	cin >> coding_year;

	cout << "選擇你需要的程式語言: " << endl;
	for (int i = 0; i < num::n; i++) {
		cout << i + 1 << ". " << language[i] << endl;
	}

	while (cin >> gg && (gg <= 0 || gg >= 5))
		cout << "輸入範圍無效!" << endl;

	while (cin.get() != '\n')
		continue;
}
void Programmer::Show(){
	Worker::Show();
	cout << "編程年齡: " << coding_year << endl;
	cout << "選擇語言: " << language[gg - 1] << endl;
}