#include <iostream>
#include "stock.h"

int main(void)
{
	{
		stock charlie;   //���ͪ���ɷ|�I�s�غc�l�A�����ɩI�s�Ѻc�l

		charlie.buy("charlie", "F129522107", 100.252);

		charlie.sell("F129522107", 200.252);

		stock test = stock();  //���ͪ���ɷ|�I�s�غc�l�A�����ɩI�s�Ѻc�l

		stock test1 = stock("Jack");   //����stock test1("Jack");  ���ͪ���ɷ|�I�s�غc�l�A�����ɩI�s�Ѻc�l

		const stock test2 = stock("Marry");  //���ͪ���ɷ|�I�s�غc�l�A�����ɩI�s�Ѻc�l

		test2.gg();

		test1 = stock("Peter");  //���ͪ���ɷ|�I�s�غc�l�A�����ɩI�s�Ѻc�l
	}

	std::cin.get();

	return 0;
}