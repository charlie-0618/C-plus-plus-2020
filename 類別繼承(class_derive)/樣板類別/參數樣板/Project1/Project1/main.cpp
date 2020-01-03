#include <iostream>
#include "stack.h"
#include "test.h"
#include "template.h"

using namespace std;

int main() {

	int i;

	Crab<MyStack, Beta> test;

	while (cin >> i && i > 0) {
		if (!test.push(i)) {
			break;
		}
	}

	while (test.pop(i)) {
		cout << "# " << i << endl;
	}
	
	cout << "End" << endl;

	cin.get();
	cin.get();
	return 0;
}