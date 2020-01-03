#include <iostream>
#include "charlie_bank.h"

using std::cout;
using std::endl;

Charlie_Mem::Charlie_Mem(const std::string & name, double cash, double balance)
{
	cus_name = name;
	cus_cash = cash;
	cus_balance = balance;
}

Charlie_Mem::~Charlie_Mem()
{

}

void Charlie_Mem::ViewMem()
{
	cout << "�|���W: " << cus_name << endl;
	cout << "�|���{��: " << cus_cash << endl;
	cout << "�|������: " << cus_balance << endl;
}

void Charlie_Mem::Mem_Pay(double & paycash)
{
	if (cus_cash >= 0) {
		cus_balance += paycash*(-1);
		cus_cash -= paycash;
		ViewMem();
	}
	else {
		cus_balance += paycash * (-1);
		cout << "�l�B���t!!" << endl;
	}
}

void Charlie_Mem::Pro_deduct(int & cash_point)
{
	if (cash_point > 0)
	{
		cus_balance += cash_point * 10;
		cus_cash += cash_point * 10;
		cash_point = 0;
		cout << "�覩��|���{��: " << cus_cash << endl;
	}
	else {
		cout << "�|������: " << cus_balance << endl;
	}
}


Charlie_Pro_Mem::Charlie_Pro_Mem(const std::string & name, double cash, double balance) : Charlie_Mem(name, cash, balance)
{
	cash_point = 10;
	cash_withdraw = 0.1;
}

void Charlie_Pro_Mem::ViewMem()
{
	cout << "<Pro�|��>���O�I��: " << cash_point << endl;
	cout << "<Pro�|��>���O��Q: " << cash_withdraw * 100 << "%" << endl;
	Charlie_Mem::ViewMem();

}

void Charlie_Pro_Mem::Mem_Pay(double & paycash)
{
	Charlie_Mem::Mem_Pay(paycash);

	if (cash_point > 0) {
		cout << "�ϥή��O�I�覩..." << endl;
		Pro_deduct(cash_point);
	}
	else {
		cout << "���O�I����! " << endl;
		Pro_deduct(cash_point);
	}

}