#include <iostream>
#include "stack.h"

using namespace std;

int main(void)
{
	Stack st;
	char ch, m;
	item po;

	cout << "��JA�[�J��X�R�O�AP�������R�O�AQ�h�X" << endl;

	while (cin >> ch && toupper(ch) != 'Q')
	{
		cout << ch << endl;

		while (cin.get() != '\n')   //��h�l��J��get��
			continue;

		if (!(isalpha(ch)))   //�ˬd�O���O�r��
		{
			cout << '\a';   //�����n
			continue;
		}

		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "��J�A�n���Ʀr: ";
			cin >> po;
			if (st.isfull())
				cout << "�Ʀr�w�����I\n";
			else
				st.push(po);
			break;

		case 'P':
		case 'p':
			if (st.isempty())
			{
				cout << "�Ʀr�w�g�M�ū��I\n";
				st.tt();
			}
			else {
				st.pop(po);
				cout << "�M��: " << po << endl;
				st.tt();
			}
			break;
		}

		cout << "��JA�[�J��X�R�O�AP�������R�O�AQ�h�X" << endl;
	}

	cin.get();
	return 0;
}