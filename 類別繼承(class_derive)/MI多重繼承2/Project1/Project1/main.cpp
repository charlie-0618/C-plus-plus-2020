#include <iostream>
#include <cstring>
#include "worker.h"

using namespace std;

int main() {

	ProgramWaiter test("charlie", 1234L, 12, 5, 2);

	test.Show();

	Worker *multi[3];

	for (int i = 0; i < 3; i++) {
		const char *category = "wpt";
		char choice;
		cout << "��J¾�~���O:  w: waiter, p: programmer, t: programwaiter" << endl;
		cin >> choice;
		while (true) {
			const char *check = strchr(category, choice);
			if ( check == NULL) {
				cout << "��J�L��!!" << endl;
				cout << "��J¾�~���O:  w: waiter, p: programmer, t: programwaiter" << endl;
				cin >> choice;
			}
			else {
				//const char *gg1 = "wpt";
				//cout << (gg1 + 1) - (gg1 + 0) << endl;   //�U�檺����
				cout << choice << "�b��" << check - category + 1 << "��m" << endl;  //���P��(category + 1) - (category + 0) + 1 ,�ҥH����2
				cin.get();
				break;
			}
		}

		switch (choice)
		{
		case 'w':
			multi[i] = new Waiter();
			break;
		case 'p':
			multi[i] = new Programmer();
			break;
		case 't':
			multi[i] = new ProgramWaiter();
			break;
		}
		multi[i]->Set();
		cout << endl;
	}

	cout << endl << "<���u���>" << endl;
	for (int i = 0; i < 3; i++) {
		multi[i]->Show();
	}

	for (int i = 0; i < 3; i++) {
		delete multi[i];
	}


	cin.get();
	return 0;
}