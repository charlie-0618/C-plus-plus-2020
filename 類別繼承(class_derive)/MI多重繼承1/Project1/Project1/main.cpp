#include <iostream>
#include <string>
#include "worker.h"

using namespace std;

int main() {

	Waiter jack("Jack", 5050084L, 30);
	Programmer charlie("Charlie", 5050634L, 2, 2);
	Waiter w_temp;
	Programmer p_temp;

	Worker *person[4] = { &jack, &charlie, &w_temp, &p_temp };  //�ݩ��x�s�Ϫ��`�q�����B�~delete
	Worker *test[2];  //��¦���O�����point��reference�l�����O

	for (int i = 2; i < 4; i++) {
		person[i]->Set();
	}

	//-------------new���д���---------------
	for (int i = 0; i < 2; i++) {
		if (i % 2 == 0) {
			test[i] = new Waiter("Queen", 200002L, 2);
		}
		else {
			test[i] = new Programmer("King", 500005L, 2, 4);
		}

	}
	//-------------new���д���---------------

	for (int i = 0; i < 4; i++) {
		person[i]->Show();
		cout << endl;
	}

	//-------------new���д���---------------
	for (int i = 0; i < 2; i++) {
		test[i]->Show();
		cout << endl;
	}
	for (int i = 0; i < 2; i++) {
		delete test[i];  //��new�~��delete
	}
	//-------------new���д���---------------


	cin.get();
	return 0;
}