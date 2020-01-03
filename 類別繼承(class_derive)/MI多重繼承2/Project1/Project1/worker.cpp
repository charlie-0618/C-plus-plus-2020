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
	//cout << "<顯示員工資料>" << endl;
	cout << "==>姓名: " << name;
	cout << "  ==>ID: " << id;
}


Waiter::~Waiter() { cout << "aaa" << endl; }

void Waiter::Set() {
	cout << "<輸入Waiter資料> " << endl;
	Worker::Set();
	Get();
}
void Waiter::Show() {
	Worker::Show();
	Waiter_Data();
}
void Waiter::Get() {
	cout << "給予消費: ";
	cin >> tip;
	while (cin.get() != '\n')
		continue;
}
void Waiter::Waiter_Data() {
	cout << "  ==>消費: " << tip;
}


const char *Programmer::language[] = { "C", "Java", "Python", "C_plusplus" };

Programmer::~Programmer() { cout << "ppp" << endl; }

void Programmer::Set() {
	cout << "<輸入Programmer資料> " << endl;
	Worker::Set();
	Get();
}
void Programmer::Show() {
	Worker::Show();
	Programmer_Data();
}
void Programmer::Get() {
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
void Programmer::Programmer_Data() {
	cout << "  編程年齡: " << coding_year;
	cout << "  選擇語言: " << language[gg - 1] << endl;
}


ProgramWaiter::~ProgramWaiter() { cout << "pwpwpw" << endl; }

void ProgramWaiter::Set() {
	cout << "<輸入ProgramWaiter資料> " << endl;
	Worker::Set();
	Get();
}
void ProgramWaiter::Get() {
	Waiter::Get();
	Programmer::Get();
}
void ProgramWaiter::Show() {
	Worker::Show();
	Waiter::Waiter_Data();
	Programmer::Programmer_Data();
}