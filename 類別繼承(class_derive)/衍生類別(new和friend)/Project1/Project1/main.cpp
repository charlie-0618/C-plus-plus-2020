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

	Man test6; //= test3;   //�sĶ���|�ϥνƻs�غc�l
	//test6 = test3;   //�sĶ���|�P�w�����w�B��loperator=(), �]�i�H�z�Ѭ����T�w�q�ƻs�غc�l
	cout << test6 << endl;

	cin.get();
	return 0;
}