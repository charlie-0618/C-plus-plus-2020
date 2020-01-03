#ifndef CHARLIE_BANK_H_
#define CHARLIE_BANK_H_
#include <string>

class Charlie_Mem {
private:   //所有會員資料
	std::string cus_name;
	double cus_cash;
	double cus_balance;
public:
	Charlie_Mem(const std::string & name, double cash, double balance);
	virtual ~Charlie_Mem();
	virtual void ViewMem();
	virtual void Mem_Pay(double & paycash);
	void Pro_deduct(int & cash_point);
};

class Charlie_Pro_Mem : public Charlie_Mem {
private:   //超級會員特權
	int cash_point;   //消費點數
	double cash_withdraw;   //消費返利
public:
	Charlie_Pro_Mem(const std::string & name, double cash, double balance);
	virtual ~Charlie_Pro_Mem();
	virtual void ViewMem();
	virtual void Mem_Pay(double & paycash);
};


#endif // !CHARLIE_BANK_H_

