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

	//+++++++++++++++�ɥR+++++++++++++++
	cin >> test;
	cin.get();   //Ū�J��C�̪�'\n', �H�K�U����J���~Ū��'\n'

	while (true)
	{
		cout << test[j] << "+";
		if (test[j] == '\0')
			break;
		j++;
	}
	cout << endl;
	//+++++++++++++++�ɥR+++++++++++++++

	cin.get(input_str, 5);   //���UEnter�|����('\0'null�r��)�b�r�꥽�ݸ̨��N('\n'����r��)�A�ïd�U('\n'����r��)�b��C��
	//cin.get(input_str, 10).get();

	while (cin)   //����J�ȴN�Otrue�A�ťմN�Ofalse
	{
		cin.get(next);   //�|������b��C�d�U��'\n', �ζW�L��J�ƥت��h�l�r��
		cout << ">>>" << next << endl;
		while (next != '\n')
		{
			cin.get(next);
			cout << ">>>" << next << endl;
			i++;
		}
		cout << "�W�L�X�Ӧr��: " << i << endl;

		strcount(input_str);

		cout << "enter next line(��J�ťհh�X): \n";
		cin.get(input_str, 5);
	}

	cout << "++" << input_str << "++" << endl;

	cout << "bye" << endl;

	system("pause");

	return 0;
}

void strcount(const char * str)
{
	static int total = 0;   //***�{������ɴN�|���͡A�åB���|�]�����}�禡�]�Ӯ����A�|�@���O�s��***

	int count = 0;

	cout << str << endl;

	while (*(str++))
	{
		count++;
	}

	total += count;

	cout << "total: " << total << endl;
}