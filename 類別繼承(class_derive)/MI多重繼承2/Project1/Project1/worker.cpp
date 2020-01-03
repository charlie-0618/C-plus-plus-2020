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
	//cout << "<��ܭ��u���>" << endl;
	cout << "==>�m�W: " << name;
	cout << "  ==>ID: " << id;
}


Waiter::~Waiter() { cout << "aaa" << endl; }

void Waiter::Set() {
	cout << "<��JWaiter���> " << endl;
	Worker::Set();
	Get();
}
void Waiter::Show() {
	Worker::Show();
	Waiter_Data();
}
void Waiter::Get() {
	cout << "�������O: ";
	cin >> tip;
	while (cin.get() != '\n')
		continue;
}
void Waiter::Waiter_Data() {
	cout << "  ==>���O: " << tip;
}


const char *Programmer::language[] = { "C", "Java", "Python", "C_plusplus" };

Programmer::~Programmer() { cout << "ppp" << endl; }

void Programmer::Set() {
	cout << "<��JProgrammer���> " << endl;
	Worker::Set();
	Get();
}
void Programmer::Show() {
	Worker::Show();
	Programmer_Data();
}
void Programmer::Get() {
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
void Programmer::Programmer_Data() {
	cout << "  �s�{�~��: " << coding_year;
	cout << "  ��ܻy��: " << language[gg - 1] << endl;
}


ProgramWaiter::~ProgramWaiter() { cout << "pwpwpw" << endl; }

void ProgramWaiter::Set() {
	cout << "<��JProgramWaiter���> " << endl;
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