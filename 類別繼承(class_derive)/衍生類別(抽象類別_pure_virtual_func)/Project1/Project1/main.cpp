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

	//client[0] = new Charlie_Bank("charlie", 2000, 0);   //���~�A���ಣ�ͩ�H��¦���O����

	for (int i = 0; i < 2; i++) {
		while (!(cin >> check) || (check != 1 && check != 2)) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "���s��J" << endl;
		}
		if (check == 1) {
			cout << "��J�|���m�W: ";
			cin >> inf.name;
			cout << "��J�|���s��: ";
			cin >> inf.cash;
			cout << "��J�|������: ";
			cin >> inf.balance;
			client[i] = new Charlie_Mem(inf.name, inf.cash, inf.balance);
		}
		else {
			cout << "��J�|���m�W: ";
			cin >> inf.name;
			cout << "��J�|���s��: ";
			cin >> inf.cash;
			cout << "��J�|������: ";
			cin >> inf.balance;
			cout << "��J�|���I��: ";
			cin >> inf_pro.point;
			cout << "��J�|���U��: ";
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