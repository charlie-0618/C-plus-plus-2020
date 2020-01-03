#include <iostream>
#include "stock.h"

int main(void)
{
	stock charlie;

	charlie.buy("charlie", "F129522107", 100.252);

	charlie.sell("F129522107", 200.252);

	std::cin.get();

	return 0;
}