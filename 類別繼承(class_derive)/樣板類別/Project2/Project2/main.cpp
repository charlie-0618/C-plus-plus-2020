#include <iostream>
#include <string>
#include <cctype>
#include "template_stack.h"

using namespace std;

int main() {

	Stack<string> st;
	char ch;
	string po;

	cout << "��Ja��A�[�J�r��A��Jp��P�R���r��" << endl;

	while (cin >> ch) {
		while (cin.get() != '\n')  //����h��J�A�åB��cin��J���d�b��C������r��'\n'�Y��
			continue;
		if (!(isalpha(ch))) {   //�ˬd��J�O�_���r�šA�O�r�ŶǦ^�D�s
			cout << "��J���O�r�šA���s��J!!" << endl;
			continue;
		}

		switch (ch) {
		case 'a':
		case 'A':
			cout << "��J�[�J���r��: ";
			cin >> po;
			cout << po << endl;
			if (st.isfull()) {
				cout << "���F!!" << endl;
			}
			else {
				st.push(po);
				break;
			}
		case 'p':
		case 'P':
			cout << "�R���r��: ";
			if (st.isempty()) {
				cout << "�ŤF!!" << endl;
			}
			else {
				st.pop(po);
				cout << "����" << po << endl;
				break;
			}
		}
		cout << "��Ja��A�[�J�r��A��Jp��P�R���r��" << endl;
	}


	cin.get();
	return 0;
}