#include <iostream>
#include <string>
#include <cctype>
#include "template_stack.h"

using namespace std;

int main() {

	Stack<string> st;
	char ch;
	string po;

	cout << "輸入a或A加入字串，輸入p或P刪除字串" << endl;

	while (cin >> ch) {
		while (cin.get() != '\n')  //防止多輸入，並且把cin輸入完留在佇列的換行字元'\n'吃掉
			continue;
		if (!(isalpha(ch))) {   //檢查輸入是否為字符，是字符傳回非零
			cout << "輸入不是字符，重新輸入!!" << endl;
			continue;
		}

		switch (ch) {
		case 'a':
		case 'A':
			cout << "輸入加入的字串: ";
			cin >> po;
			cout << po << endl;
			if (st.isfull()) {
				cout << "滿了!!" << endl;
			}
			else {
				st.push(po);
				break;
			}
		case 'p':
		case 'P':
			cout << "刪除字串: ";
			if (st.isempty()) {
				cout << "空了!!" << endl;
			}
			else {
				st.pop(po);
				cout << "移除" << po << endl;
				break;
			}
		}
		cout << "輸入a或A加入字串，輸入p或P刪除字串" << endl;
	}


	cin.get();
	return 0;
}