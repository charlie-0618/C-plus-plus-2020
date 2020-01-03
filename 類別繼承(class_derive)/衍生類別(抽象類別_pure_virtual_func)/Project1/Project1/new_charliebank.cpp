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

void Charlie_Bank::ViewMem() {  //�µ������
	cout << "�|���W: " << cus_name << endl;
	cout << "�|���{��: " << cus_cash << endl;
	cout << "�|������: " << cus_balance << endl;
}

void gg()
{
	cout << "hello" << endl;
}


//Charlie_Mem��k
//---------------------------------�l�����O��@��k---------------------------------
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
		cout << "�l�B���t!!" << endl;
	}
}
//---------------------------------�l�����O��@��k---------------------------------


//---------------------------------�l�����O��@��k---------------------------------
Charlie_Pro_Mem::Charlie_Pro_Mem(const std::string & name, double cash, double balance, int point, double withdraw) : Charlie_Bank(name, cash, balance) {
	cash_point = point;
	cash_withdraw = withdraw;
}
Charlie_Pro_Mem::~Charlie_Pro_Mem() {

}
void Charlie_Pro_Mem::ViewMem() {
	cout << "<Pro�|��>���O�I��: " << cash_point << endl;
	cout << "<Pro�|��>���O��Q: " << cash_withdraw * 100 << "%" << endl;
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
		cout << "�l�B���t!!" << endl;
		cout << "�|������: " << cus_balance << endl;
	}
	
}

void Charlie_Pro_Mem::Pro_deduct(int & cash_point) {

}
//---------------------------------�l�����O��@��k---------------------------------