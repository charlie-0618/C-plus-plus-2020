#pragma once
#include <string>
#include <iostream>

class stock
{
private:
	double custom_deposit;   //客戶存款

	const char *id;   //客戶身份證字號

	void interest_rate()   //利率計算，內嵌函式
	{
		std::cout << "賣出金額: " << custom_deposit << std::endl;
		double total_deposit = custom_deposit * 0.1;
		std::cout << "計算利率後的金額: " << total_deposit + custom_deposit << std::endl;
	}

public:
	stock();   //建構函式

	stock(const std::string &co);  //其它建構函式

	~stock();  //解構函式

	void buy(const std::string & name, const char *idnum, double money);

	void sell(const char idnum[11], double money);

	void gg() const;
};