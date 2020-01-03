#include <iostream>
#include "charliebank.h"

using namespace std;

int main()
{
	Charlie_Mem *client[4];  //指標物件陣列

	char check;
	string name;
	double cash;
	double balance;

	for (int i = 0; i < 4; i++) {
		cin >> name;
		cin >> cash;
		cin >> balance;
		while (cin >> check && (check != '1' && check != '2')) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "重新輸入: " << endl;
		}

		if (check == '1')
		{
			client[i] = new Charlie_Mem(name, cash, balance);  //有new就要有delete
		}
		else
		{
			client[i] = new Charlie_Pro_Mem(name, cash, balance);
		}
	}

	for (int i = 0; i < 4; i++) {
		client[i]->ViewMem();   //同名異式，會根據類別的不同而呼叫virtual函式
		cout << endl;
	}

	for (int i = 0; i < 4; i++) {
		delete client[i];   //釋放記憶體，因為是virtual解構子，所以會根據物件類型不同去做釋放
		cout << endl << endl;
	}

	Charlie_Mem *test = new Charlie_Pro_Mem("gg", 200, 0);   //基礎類別point衍生類別
	delete test;   //先呼叫衍生類別解構子，在呼叫基礎類別解構子

	std::cin.get();
	std::cin.get();
	return 0;
}