#include <iostream>
#include <cstdlib>
#include <ctime>
#include "charlie.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	{
		/*
		//�M���������Uenter��
		char tep[80];
		cin.get(tep, 80);

		while (!(cin.get(tep, 80)))
		{
			if (tep[0] == '\0')
			{
				cout << "��J�ť�!!" << endl;
				cin.clear();
				while (cin.get() != '\n')
				{
					cout << "�M���h�l�r��!!" << endl;
				}
				continue;
			}
		}

		cout << tep << endl;

		cout << "%%%%%" << endl;
		//�M���������Uenter��
		*/
		Charlie user_name;

		cin >> user_name;

		cout << user_name << endl;

		Charlie obj_array[3];
		
		for (int i = 0; i < 3; i++)
		{
			char temp[80];
			cin.get(temp, 80);
			
			while (cin && cin.get() != '\n')
				continue;

			if (!cin || temp[0] == '\0')   //�ˬd��J�O�_���\�A���ѩο�J�ťնi�J
			{
				cout << "++" << endl;
				break;
			}
			else
			{
				obj_array[i] = temp;  //�h��=
			}
		}

		for (int i = 0; i < 3; i++)
		{
			cout << obj_array[i][i] << ": " << obj_array[i] << "\n\n";  //��Ӧh��<< , []
		}

		//��̵u�r��
		Charlie *shortest = &obj_array[0];   //���V�{������
		for (int i = 1; i < 3; i++){
			if (obj_array[i].length() < shortest->length()){
				shortest = &obj_array[i];
			}
		}
		
		cout << "�̵u�r��: " << *shortest << endl;


		Charlie *favorite = new Charlie(obj_array[1]);   //��new�A�èϥ�*�ƻs�غc�l*��l�ƪ���
		cout << *favorite << endl;
		delete favorite;

	}

	system("pause");
	return 0;
}