#include <iostream>
#include "stack.h"

using namespace std;

int main(void)
{
	Stack st;
	char ch, m;
	item po;

	cout << "輸入A加入支出命令，P為取消命令，Q退出" << endl;

	while (cin >> ch && toupper(ch) != 'Q')
	{
		cout << ch << endl;

		while (cin.get() != '\n')   //把多餘輸入的get掉
			continue;

		if (!(isalpha(ch)))   //檢查是不是字符
		{
			cout << '\a';   //蜂鳴聲
			continue;
		}

		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "輸入你要的數字: ";
			cin >> po;
			if (st.isfull())
				cout << "數字已滿咯！\n";
			else
				st.push(po);
			break;

		case 'P':
		case 'p':
			if (st.isempty())
			{
				cout << "數字已經清空咯！\n";
				st.tt();
			}
			else {
				st.pop(po);
				cout << "清除: " << po << endl;
				st.tt();
			}
			break;
		}

		cout << "輸入A加入支出命令，P為取消命令，Q退出" << endl;
	}

	cin.get();
	return 0;
}