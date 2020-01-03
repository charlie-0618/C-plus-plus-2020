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
		//清除直接按下enter鍵
		char tep[80];
		cin.get(tep, 80);

		while (!(cin.get(tep, 80)))
		{
			if (tep[0] == '\0')
			{
				cout << "輸入空白!!" << endl;
				cin.clear();
				while (cin.get() != '\n')
				{
					cout << "清除多餘字元!!" << endl;
				}
				continue;
			}
		}

		cout << tep << endl;

		cout << "%%%%%" << endl;
		//清除直接按下enter鍵
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

			if (!cin || temp[0] == '\0')   //檢查輸入是否成功，失敗或輸入空白進入
			{
				cout << "++" << endl;
				break;
			}
			else
			{
				obj_array[i] = temp;  //多載=
			}
		}

		for (int i = 0; i < 3; i++)
		{
			cout << obj_array[i][i] << ": " << obj_array[i] << "\n\n";  //兩個多載<< , []
		}

		//找最短字串
		Charlie *shortest = &obj_array[0];   //指向現有物件
		for (int i = 1; i < 3; i++){
			if (obj_array[i].length() < shortest->length()){
				shortest = &obj_array[i];
			}
		}
		
		cout << "最短字元: " << *shortest << endl;


		Charlie *favorite = new Charlie(obj_array[1]);   //用new，並使用*複製建構子*初始化物件
		cout << *favorite << endl;
		delete favorite;

	}

	system("pause");
	return 0;
}