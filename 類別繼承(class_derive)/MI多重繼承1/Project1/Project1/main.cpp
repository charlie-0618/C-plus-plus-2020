#include <iostream>
#include <string>
#include "worker.h"

using namespace std;

int main() {

	Waiter jack("Jack", 5050084L, 30);
	Programmer charlie("Charlie", 5050634L, 2, 2);
	Waiter w_temp;
	Programmer p_temp;

	Worker *person[4] = { &jack, &charlie, &w_temp, &p_temp };  //屬於儲存區的常量不需額外delete
	Worker *test[2];  //基礎類別物件能point或reference衍生類別

	for (int i = 2; i < 4; i++) {
		person[i]->Set();
	}

	//-------------new指標測試---------------
	for (int i = 0; i < 2; i++) {
		if (i % 2 == 0) {
			test[i] = new Waiter("Queen", 200002L, 2);
		}
		else {
			test[i] = new Programmer("King", 500005L, 2, 4);
		}

	}
	//-------------new指標測試---------------

	for (int i = 0; i < 4; i++) {
		person[i]->Show();
		cout << endl;
	}

	//-------------new指標測試---------------
	for (int i = 0; i < 2; i++) {
		test[i]->Show();
		cout << endl;
	}
	for (int i = 0; i < 2; i++) {
		delete test[i];  //有new才用delete
	}
	//-------------new指標測試---------------


	cin.get();
	return 0;
}