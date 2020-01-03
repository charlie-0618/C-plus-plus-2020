#ifndef CHARLIE_BANK_H_
#define CHARLIE_BANK_H_
#include <string>

//****************************************************************************
//*****當不同類別之間有相似的方法時，可以建立抽象基礎類別作為大家共同擁有的方法******
//****************************************************************************


//---------------------------------抽象基礎類別---------------------------------
class Charlie_Bank {
private:   //只有此類別內的物件可存取
	std::string cus_name;   //所有會員資料
	double cus_cash;
	double cus_balance;
protected:   //只有衍生類別能存取，其它類別的物件無法存取
	std::string & fullname();
	double & fullcash();
	double & fullbalance();
public:
	Charlie_Bank(const std::string name = "no", double cash = 100, double balance = 0);
	virtual ~Charlie_Bank();
	virtual void ViewMem() = 0;   //純虛擬函數( = 0 表示這個類別是抽象基礎類別，可以實作此函數，也可以不實作)
	virtual void Mem_Pay(double & paycash) = 0;   //純虛擬函數
	void gg();
};
//---------------------------------抽象基礎類別---------------------------------


//---------------------------------衍生類別---------------------------------
class Charlie_Mem : public Charlie_Bank {
public:
	Charlie_Mem(const std::string & name, double cash, double balance);
	virtual ~Charlie_Mem();
	virtual void ViewMem();
	virtual void Mem_Pay(double & paycash);
};
//---------------------------------衍生類別---------------------------------


//---------------------------------衍生類別---------------------------------
class Charlie_Pro_Mem : public Charlie_Bank {
private:   //超級會員特權
	int cash_point;   //消費點數
	double cash_withdraw;   //消費返利
public:
	Charlie_Pro_Mem(const std::string & name, double cash, double balance, int point, double withdraw);
	virtual ~Charlie_Pro_Mem();
	virtual void ViewMem();
	virtual void Mem_Pay(double & paycash);
	void Pro_deduct(int & cash_point);
};
//---------------------------------衍生類別---------------------------------
#endif // !CHARLIE_BANK_H_


