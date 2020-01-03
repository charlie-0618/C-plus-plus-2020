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
		cout << "輸入職業類別:  w: waiter, p: programmer, t: programwaiter" << endl;
		cin >> choice;
		while (true) {
			const char *check = strchr(category, choice);
			if ( check == NULL) {
				cout << "輸入無效!!" << endl;
				cout << "輸入職業類別:  w: waiter, p: programmer, t: programwaiter" << endl;
				cin >> choice;
			}
			else {
				//const char *gg1 = "wpt";
				//cout << (gg1 + 1) - (gg1 + 0) << endl;   //下行的解釋
				cout << choice << "在第" << check - category + 1 << "位置" << endl;  //等同於(category + 1) - (category + 0) + 1 ,所以等於2
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

	cout << endl << "<員工資料>" << endl;
	for (int i = 0; i < 3; i++) {
		multi[i]->Show();
	}

	for (int i = 0; i < 3; i++) {
		delete multi[i];
	}


	cin.get();
	return 0;
}