#include <iostream>
#include "stock.h"

int main(void)
{
	{
		stock charlie;   //產生物件時會呼叫建構子，結束時呼叫解構子

		charlie.buy("charlie", "F129522107", 100.252);

		charlie.sell("F129522107", 200.252);

		stock test = stock();  //產生物件時會呼叫建構子，結束時呼叫解構子

		stock test1 = stock("Jack");   //等於stock test1("Jack");  產生物件時會呼叫建構子，結束時呼叫解構子

		const stock test2 = stock("Marry");  //產生物件時會呼叫建構子，結束時呼叫解構子

		test2.gg();

		test1 = stock("Peter");  //產生物件時會呼叫建構子，結束時呼叫解構子
	}

	std::cin.get();

	return 0;
}