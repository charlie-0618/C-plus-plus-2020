#pragma once
#include <string>
#include <iostream>

class stock
{
private:
	double custom_deposit;   //�Ȥ�s��

	const char *id;   //�Ȥᨭ���Ҧr��

	void interest_rate()   //�Q�v�p��A���O�禡
	{
		std::cout << "��X���B: " << custom_deposit << std::endl;
		double total_deposit = custom_deposit * 0.1;
		std::cout << "�p��Q�v�᪺���B: " << total_deposit + custom_deposit << std::endl;
	}

public:
	void buy(const std::string & name, const char *idnum, double money);

	void sell(const char idnum[11], double money);
};