#include <iostream>
#include "mytime.h"

int main()
{
	using std::cout;
	using std::endl;

	Time plan;
	Time coding(40, 2);
	Time drinking(50, 5);
	Time total;

	cout << "plan: ";
	plan.show();
	cout << endl;

	cout << "coding: ";
	coding.show();
	cout << endl;

	cout << "drinking: ";
	drinking.show();
	cout << endl;

	total = coding.operator+(drinking);   //一種函式表示法，並非真的加

	cout << "total: ";
	total.show();
	cout << endl;

	Time eating(30, 1);

	total = eating + total;   //等同於 total = eating.operator+(total);
							  //~這樣表達的更淺顯易懂~
	cout << "eating + total: ";
	total.show();
	cout << endl;

	Time swimming(20, 4);
	
	total = swimming * 1.2;   //正常呼叫operator
	total = 1.2 * swimming;   //使用夥伴函數解決使用者輸入顛倒問題

	cout << "new total: ";
	total.show();
	cout << endl;

	std::cin.get();
	return 0;
}