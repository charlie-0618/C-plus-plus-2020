#include <iostream>
#include "name.h"

using namespace std;

int main() {

	Base_Sex test1("female", 20);
	Girl test2("wmale", 70);
	Man test3("male", 83);

	cout << test1 << endl;
	cout << test2 << endl;
	cout << test3 << endl;

	Girl test5(test2);
	cout << test5 << endl;

	Man test4(test3);
	cout << test4 << endl;

	Man test6; //= test3;   //編譯器會使用複製建構子
	//test6 = test3;   //編譯器會判定為指定運算子operator=(), 也可以理解為明確定義複製建構子
	cout << test6 << endl;

	cin.get();
	return 0;
}