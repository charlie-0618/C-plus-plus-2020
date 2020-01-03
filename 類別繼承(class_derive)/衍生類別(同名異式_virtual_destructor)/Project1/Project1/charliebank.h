#ifndef CHARLIE_BANK_H_
#define CHARLIE_BANK_H_
#include <string>

class Charlie_Mem {
private:   //�Ҧ��|�����
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
private:   //�W�ŷ|���S�v
	int cash_point;   //���O�I��
	double cash_withdraw;   //���O��Q
public:
	Charlie_Pro_Mem(const std::string & name, double cash, double balance);
	virtual ~Charlie_Pro_Mem();
	virtual void ViewMem();
	virtual void Mem_Pay(double & paycash);
};


#endif // !CHARLIE_BANK_H_

