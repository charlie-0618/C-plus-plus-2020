#include <iostream>
#include "charlieclub.h"

using namespace std;

int main()
{
	Charlie_Club test1("chen", "yifeng", false);
	Charlie_Club_Gold test2(2, "lin", "zhenyue", true);

	Charlie_Club_Gold test7(10, "zhang", "jiahe", true);
	std::cout << "********" << std::endl;
	Charlie_Club_Gold test8(test7);
	Charlie_Club test9(test7);
	std::cout << "********" << std::endl;
	test8.Name();

	cout << "---------------------" << endl;
	//基礎類別能 指向(point)和參考(reference) 衍生類別的物件，呼叫基礎類別成員函數
	//但是不能呼叫衍生類別的成員函數！！
	Charlie_Club *test4 = &test2;   
	Charlie_Club & test5 = test2;
	test4->Name();
	test5.Name();
	//----------------------------------
	cout << "---------------------" << endl;

	//Charlie_Club_Gold & test6 = test1;  //衍生類別不能 參考和指向 基礎類別

	test2.Name();
	
	Charlie_Club_Gold test3(4, test1);
	test3.Name();

	std::cin.get();
	return 0;
}