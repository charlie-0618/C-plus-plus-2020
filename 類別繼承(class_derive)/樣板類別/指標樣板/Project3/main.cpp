#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>
#include "template_stack.h"

using namespace std;

int main() {
	const char *t = "kevin";
	const char *& u = t;  //參考指標(reference to pointer)
	cout << u << endl;

	int b = 100, a = 0;

	srand(time(0));  //給rand()時間種子

	/*for(int i = 0; i < 100; i++)
		cout << 0 + rand() % 5 << endl;*/  //從0開始的隨機數，0+5的整數範圍
	
	int stacksize;
	cin >> stacksize;

	Stack<const char *> st = Stack<const char *>(stacksize);
	//Stack<const char *> st(stacksize);

	const char *name[4] = { "charlie", "jack", "marry", "kevin" };
	const char *name_out[4];

	int process = 0;
	int next = 0;

	while (process < 4 && next < 4) {
		if (st.isempty()) {
			cout << "<1>" << endl;
			st.push(name[next++]);
		}
		else if (st.isfull()) {
			cout << "<2>" << endl;
			st.pop(name_out[process++]);
		}
		else if (0 + rand() % 2 && next < 4) {
			cout << "<3>" << endl;
			st.push(name[next++]);
		}
		else {
			cout << "<4>" << endl;
			st.pop(name_out[process++]);
		}
		cout << next << endl;
	}
	cout << endl << endl;
	for(int i = 0; i < process; i++)
		cout << name_out[i] << endl;

	cin.get();
	cin.get();
	return 0;
}