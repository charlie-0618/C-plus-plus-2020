#ifndef CHARLIE_BANK_H_
#define CHARLIE_BANK_H_
#include <string>

//****************************************************************************
//*****���P���O�������ۦ�����k�ɡA�i�H�إߩ�H��¦���O�@���j�a�@�P�֦�����k******
//****************************************************************************


//---------------------------------��H��¦���O---------------------------------
class Charlie_Bank {
private:   //�u�������O��������i�s��
	std::string cus_name;   //�Ҧ��|�����
	double cus_cash;
	double cus_balance;
protected:   //�u���l�����O��s���A�䥦���O������L�k�s��
	std::string & fullname();
	double & fullcash();
	double & fullbalance();
public:
	Charlie_Bank(const std::string name = "no", double cash = 100, double balance = 0);
	virtual ~Charlie_Bank();
	virtual void ViewMem() = 0;   //�µ������( = 0 ��ܳo�����O�O��H��¦���O�A�i�H��@����ơA�]�i�H����@)
	virtual void Mem_Pay(double & paycash) = 0;   //�µ������
	void gg();
};
//---------------------------------��H��¦���O---------------------------------


//---------------------------------�l�����O---------------------------------
class Charlie_Mem : public Charlie_Bank {
public:
	Charlie_Mem(const std::string & name, double cash, double balance);
	virtual ~Charlie_Mem();
	virtual void ViewMem();
	virtual void Mem_Pay(double & paycash);
};
//---------------------------------�l�����O---------------------------------


//---------------------------------�l�����O---------------------------------
class Charlie_Pro_Mem : public Charlie_Bank {
private:   //�W�ŷ|���S�v
	int cash_point;   //���O�I��
	double cash_withdraw;   //���O��Q
public:
	Charlie_Pro_Mem(const std::string & name, double cash, double balance, int point, double withdraw);
	virtual ~Charlie_Pro_Mem();
	virtual void ViewMem();
	virtual void Mem_Pay(double & paycash);
	void Pro_deduct(int & cash_point);
};
//---------------------------------�l�����O---------------------------------
#endif // !CHARLIE_BANK_H_


