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

	if (!num.is_open())   //�ɮצ��\�}�Ҧ^��0
	{
		cout << num.is_open() << endl;

		cout << "�}���ɮץ���!!" << endl;

		//exit(EXIT_FAILURE);
	}

	//num >> i;
	cout << sizeof(i) << endl;

	while (num.get(i,50))  //��r�ɤ����ťզ�2�줸�j�p�A\n���@�줸
	{
		//num.get();  //�|�Y���@�Ӧr
		cout << i << endl;
		num.get();  //�|�Y���@�Ӧr

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