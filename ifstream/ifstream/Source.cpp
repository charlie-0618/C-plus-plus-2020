#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
	char i[50];

	string word[10];

	int p = 0;

	ifstream num;

	num.open("test.txt");

	if (!num.is_open())   //檔案成功開啟回傳0
	{
		cout << num.is_open() << endl;

		cout << "開啟檔案失敗!!" << endl;

		//exit(EXIT_FAILURE);
	}

	//num >> i;
	cout << sizeof(i) << endl;

	while (num.get(i,50))  //文字檔中的空白佔2位元大小，\n佔一位元
	{
		//num.get();  //會吃掉一個字
		cout << i << endl;
		num.get();  //會吃掉一個字

		/*word[p] = i;
		cout << word[p] << endl;
		p++;

		num >> i;*/
	}

	if (num.eof())
		cout << "End of file reached.\n";
	else if (num.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";
	

	num.close();

	system("pause");

	return 0;
}