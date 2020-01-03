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
	cout << "會員名: " << cus_name << endl;
	cout << "會員現金: " << cus_cash << endl;
	cout << "會員收支: " << cus_balance << endl;
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
		cout << "餘額為負!!" << endl;
	}
}

void Charlie_Mem::Pro_deduct(int & cash_point)
{
	if (cash_point > 0)
	{
		cus_balance += cash_point * 10;
		cus_cash += cash_point * 10;
		cash_point = 0;
		cout << "抵扣後會員現金: " << cus_cash << endl;
	}
	else {
		cout << "會員收支: " << cus_balance << endl;
	}
}


Charlie_Pro_Mem::Charlie_Pro_Mem(const std::string & name, double cash, double balance) : Charlie_Mem(name, cash, balance)
{
	cash_point = 10;
	cash_withdraw = 0.1;
}

void Charlie_Pro_Mem::ViewMem()
{
	cout << "<Pro會員>消費點數: " << cash_point << endl;
	cout << "<Pro會員>消費返利: " << cash_withdraw * 100 << "%" << endl;
	Charlie_Mem::ViewMem();

}

void Charlie_Pro_Mem::Mem_Pay(double & paycash)
{
	Charlie_Mem::Mem_Pay(paycash);

	if (cash_point > 0) {
		cout << "使用消費點抵扣..." << endl;
		Pro_deduct(cash_point);
	}
	else {
		cout << "消費點不足! " << endl;
		Pro_deduct(cash_point);
	}

}