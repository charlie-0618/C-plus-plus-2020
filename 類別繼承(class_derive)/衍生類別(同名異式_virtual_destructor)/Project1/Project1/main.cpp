#include <iostream>
#include "charliebank.h"

using namespace std;

int main()
{
	Charlie_Mem *client[4];  //���Ъ���}�C

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
			cout << "���s��J: " << endl;
		}

		if (check == '1')
		{
			client[i] = new Charlie_Mem(name, cash, balance);  //��new�N�n��delete
		}
		else
		{
			client[i] = new Charlie_Pro_Mem(name, cash, balance);
		}
	}

	for (int i = 0; i < 4; i++) {
		client[i]->ViewMem();   //�P�W�����A�|�ھ����O�����P�өI�svirtual�禡
		cout << endl;
	}

	for (int i = 0; i < 4; i++) {
		delete client[i];   //����O����A�]���Ovirtual�Ѻc�l�A�ҥH�|�ھڪ����������P�h������
		cout << endl << endl;
	}

	Charlie_Mem *test = new Charlie_Pro_Mem("gg", 200, 0);   //��¦���Opoint�l�����O
	delete test;   //���I�s�l�����O�Ѻc�l�A�b�I�s��¦���O�Ѻc�l

	std::cin.get();
	std::cin.get();
	return 0;
}