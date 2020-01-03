#include "new_charliebank.h"
#include <string>
#include <iostream>

using namespace std;

Charlie_Bank::Charlie_Bank(const std::string name, double cash, double balance) {
	cus_name = name;
	cus_cash = cash;
	cus_balance = balance;
}
Charlie_Bank::~Charlie_Bank() {

}
std::string & Charlie_Bank::fullname() {
	return cus_name;
}
double & Charlie_Bank::fullcash() {
	return cus_cash;
}
double & Charlie_Bank::fullbalance(){
	return cus_balance;
}

void Charlie_Bank::ViewMem() {  //純虛擬函數
	cout << "會員名: " << cus_name << endl;
	cout << "會員現金: " << cus_cash << endl;
	cout << "會員收支: " << cus_balance << endl;
}

void gg()
{
	cout << "hello" << endl;
}


//Charlie_Mem方法
//---------------------------------衍生類別實作方法---------------------------------
Charlie_Mem::Charlie_Mem(const std::string & name, double cash, double balance) : Charlie_Bank(name, cash, balance){

}
Charlie_Mem::~Charlie_Mem() {

}
void Charlie_Mem::ViewMem() {
	Charlie_Bank::ViewMem();
}
void Charlie_Mem::Mem_Pay(double & paycash){

	double & cus_cash = fullcash();
	double & cus_balance = fullbalance();

	if (cus_cash >= 0) {
		cus_balance += paycash * (-1);
		cus_cash -= paycash;
		Charlie_Bank::ViewMem();
	}
	else {
		cus_balance += paycash * (-1);
		cout << "餘額為負!!" << endl;
	}
}
//---------------------------------衍生類別實作方法---------------------------------


//---------------------------------衍生類別實作方法---------------------------------
Charlie_Pro_Mem::Charlie_Pro_Mem(const std::string & name, double cash, double balance, int point, double withdraw) : Charlie_Bank(name, cash, balance) {
	cash_point = point;
	cash_withdraw = withdraw;
}
Charlie_Pro_Mem::~Charlie_Pro_Mem() {

}
void Charlie_Pro_Mem::ViewMem() {
	cout << "<Pro會員>消費點數: " << cash_point << endl;
	cout << "<Pro會員>消費返利: " << cash_withdraw * 100 << "%" << endl;
	Charlie_Bank::ViewMem();
}
void Charlie_Pro_Mem::Mem_Pay(double & paycash) {

	double & cus_cash = fullcash();
	double & cus_balance = fullbalance();

	if (cash_point > 0 && cus_cash >= 0)
	{
		cus_balance += cash_point * 10 + paycash * (-1);
		cus_cash += cash_point * 10 - paycash;
		cash_point = 0;
		Charlie_Bank::ViewMem();
	}
	else {
		cus_balance += paycash * (-1);
		cout << "餘額為負!!" << endl;
		cout << "會員收支: " << cus_balance << endl;
	}
	
}

void Charlie_Pro_Mem::Pro_deduct(int & cash_point) {

}
//---------------------------------衍生類別實作方法---------------------------------