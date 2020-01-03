#include <iostream>
#include <string>
#include "new_charliebank.h"

using namespace std;

struct Charlie_Memmm {
	string name;
	double cash;
	double balance;
};

struct Charlie_Pro_Memmm {
	int point;
	double withdraw;
};

int main()
{
	
	Charlie_Bank *client[2];
	int check;
	
	Charlie_Memmm inf;
	Charlie_Pro_Memmm inf_pro;

	//client[0] = new Charlie_Bank("charlie", 2000, 0);   //錯誤，不能產生抽象基礎類別物件

	for (int i = 0; i < 2; i++) {
		while (!(cin >> check) || (check != 1 && check != 2)) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "重新輸入" << endl;
		}
		if (check == 1) {
			cout << "輸入會員姓名: ";
			cin >> inf.name;
			cout << "輸入會員存款: ";
			cin >> inf.cash;
			cout << "輸入會員收支: ";
			cin >> inf.balance;
			client[i] = new Charlie_Mem(inf.name, inf.cash, inf.balance);
		}
		else {
			cout << "輸入會員姓名: ";
			cin >> inf.name;
			cout << "輸入會員存款: ";
			cin >> inf.cash;
			cout << "輸入會員收支: ";
			cin >> inf.balance;
			cout << "輸入會員點數: ";
			cin >> inf_pro.point;
			cout << "輸入會員貸款: ";
			cin >> inf_pro.withdraw;
			client[i] = new Charlie_Pro_Mem(inf.name, inf.cash, inf.balance, inf_pro.point, inf_pro.withdraw);
		}

		
	}

	for (int i = 0; i < 2; i++)
		client[i]->ViewMem();

	double gg;
	for (int i = 0; i < 2; i++) {
		cin >> gg;
		client[i]->Mem_Pay(gg);
	}

	cin.get();
	cin.get();
	return 0;
}