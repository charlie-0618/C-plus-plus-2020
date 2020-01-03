#include <iostream>
#include "charlie_bank.h"

int main()
{
	Charlie_Mem kevin("Kevin", 200, 0.0);
	Charlie_Pro_Mem charlie("Charlie", 1000, 0.0);

	kevin.ViewMem();
	std::cout << std::endl;
	charlie.ViewMem();
	std::cout << std::endl;


	double mem_pay, pro_mem_pay;
	char check;
	std::cin >> mem_pay;

	kevin.Mem_Pay(mem_pay);

	while (true) {
		while(!(std::cin >> pro_mem_pay)) {
			std::cin.clear();
			while (std::cin.get() != '\n') {
				continue;
			}
			std::cout << "重新輸入: " << std::endl;
		}

		charlie.Mem_Pay(pro_mem_pay);

		std::cout << "退出扣款請按 q 或 Q : ";
		std::cin >> check;
		if (check == 'q' || check == 'Q')
			break;
		else
			std::cout << "*繼續交易*" << std::endl;
	}

	std::cout << "結束交易" << std::endl;
	std::cin.get();
	std::cin.get();
	return 0;
}