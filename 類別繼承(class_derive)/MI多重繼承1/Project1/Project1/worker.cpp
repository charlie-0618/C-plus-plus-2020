#include <iostream>
#include <string>
#include "worker.h"

using namespace std;

Worker::~Worker() { cout << "www" << endl; }

void Worker::Set() {
	cout << "���u�m�W: ";
	getline(cin, name);
	cout << "���uID: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void Worker::Show() {
	cout << "<��ܭ��u���>" << endl;
	cout << "==>�m�W: " << name;
	cout << "==>ID: " << id;
}


Waiter::~Waiter() { cout << "aaa" << endl; }

void Waiter::Set() {
	Worker::Set();
	cout << "�������O: ";
	cin >> tip;
	while (cin.get() != '\n')
		continue;
}
void Waiter::Show() {
	Worker::Show();
	cout << "==>���O: " << tip;
}


const char *Programmer::language[] = { "C", "Java", "Python", "C_plusplus" };

Programmer::~Programmer() { cout << "ppp" << endl; }

void Programmer::Set() {
	Worker::Set();

	cout << "�s�{�~��: ";
	cin >> coding_year;

	cout << "��ܧA�ݭn���{���y��: " << endl;
	for (int i = 0; i < num::n; i++) {
		cout << i + 1 << ". " << language[i] << endl;
	}

	while (cin >> gg && (gg <= 0 || gg >= 5))
		cout << "��J�d��L��!" << endl;

	while (cin.get() != '\n')
		continue;
}
void Programmer::Show(){
	Worker::Show();
	cout << "�s�{�~��: " << coding_year << endl;
	cout << "��ܻy��: " << language[gg - 1] << endl;
}