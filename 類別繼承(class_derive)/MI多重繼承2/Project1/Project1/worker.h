#ifndef WORKER_H_
#define WORKER_H_
#include <string>

class Worker {
private:
	std::string name;
	long id;
protected:
	//virtual void Data() = 0;
	virtual void Get() = 0;
public:
	//inline function
	Worker() : name("No Name"), id(0L) {};
	Worker(const std::string & s, long n) : name(s), id(n) {};
	//inline function
	virtual ~Worker() = 0;   //宣告為虛擬，這樣才可以對應到不同物件的解構子，使用delete時才不會出錯
	virtual void Set() = 0;
	virtual void Show() = 0;
};

class Waiter : virtual public Worker {
private:
	double tip;
protected:
	void Waiter_Data();
	void Get();
public:
	Waiter() : Worker(), tip(0) {};
	Waiter(const std::string & s, long n, double t) : Worker(s, n), tip(t) {};
	~Waiter();
	void Set();
	void Show();
};

class Programmer : virtual public Worker {
protected:
	enum language_type { C, Java, Python, C_plusplus };
	enum num { n = 4 };
	void Programmer_Data();
	void Get();
private:
	int coding_year;
	int gg;
	static const char *language[num::n];
public:
	Programmer() : Worker(), coding_year(0) {};
	Programmer(const std::string & s, long n, int y, int language) : Worker(s, n), coding_year(y), gg(language) {};
	Programmer(Worker & wk, int y) : Worker(wk), coding_year(y) {};
	~Programmer();
	void Set();
	void Show();
};

class ProgramWaiter : public Waiter, public Programmer{
protected:
	//void Data();
	void Get();
public:
	ProgramWaiter() {};
	ProgramWaiter(const std::string & s, long n, double t, int y, int language) : Worker(s, n), Waiter(s, n, t), Programmer(s, n, y, language) {};
	~ProgramWaiter();
	void Set();
	void Show();
};

#endif // !WORKER_H_


