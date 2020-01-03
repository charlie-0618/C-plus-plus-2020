#include <iostream>

using namespace std;

void strcount(const char * str);

int main(void)
{
	char input_str[5];

	char next;

	char test[5];

	int i = 0, j = 0;

	cout << "enter a line: \n";

	//+++++++++++++++補充+++++++++++++++
	cin >> test;
	cin.get();   //讀入佇列裡的'\n', 以免下次輸入錯誤讀到'\n'

	while (true)
	{
		cout << test[j] << "+";
		if (test[j] == '\0')
			break;
		j++;
	}
	cout << endl;
	//+++++++++++++++補充+++++++++++++++

	cin.get(input_str, 5);   //按下Enter會產生('\0'null字元)在字串末端裡取代('\n'換行字元)，並留下('\n'換行字元)在佇列裡
	//cin.get(input_str, 10).get();

	while (cin)   //有輸入值就是true，空白就是false
	{
		cin.get(next);   //會接收到在佇列留下的'\n', 或超過輸入數目的多餘字母
		cout << ">>>" << next << endl;
		while (next != '\n')
		{
			cin.get(next);
			cout << ">>>" << next << endl;
			i++;
		}
		cout << "超過幾個字母: " << i << endl;

		strcount(input_str);

		cout << "enter next line(輸入空白退出): \n";
		cin.get(input_str, 5);
	}

	cout << "++" << input_str << "++" << endl;

	cout << "bye" << endl;

	system("pause");

	return 0;
}

void strcount(const char * str)
{
	static int total = 0;   //***程式執行時就會產生，並且不會因為離開函式因而消失，會一直保存著***

	int count = 0;

	cout << str << endl;

	while (*(str++))
	{
		count++;
	}

	total += count;

	cout << "total: " << total << endl;
}