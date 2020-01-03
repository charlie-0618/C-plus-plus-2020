#ifndef WORKER_H_
#define WORKER_H_
#include <string>

class Worker {
private:
	std::string name;
	long id;
public:
	//inline function
	Worker() : name("No Name"), id(0L) {};
	Worker(const std::string & s, long n) : name("s"), id(n) {};
	//inline function
	virtual ~Worker() = 0;
	virtual void Set() = 0;
	virtual void Show() = 0;
};

class Waiter : public Worker{
private:
	double tip;
public:
	Waiter() : Worker(), tip(0) {};
	Waiter(const std::string & s, long n, double t) : Worker(s, n), tip(t) {};
	virtual ~Waiter();
	virtual void Set();
	virtual void Show();
};

class Programmer : public Worker {
protected:
	enum language_type { C, Java, Python, C_plusplus  };
	enum num {n = 4};
private:
	int coding_year;
	int gg;
	static const char *language[num::n]; 
public:
	Programmer() : Worker(), coding_year(0) {};
	Programmer(const std::string & s, long n, int y, int language) : Worker(s, n), coding_year(y) , gg(language) {};
	Programmer(Worker & wk, int y) : Worker(wk), coding_year(y) {};
	virtual ~Programmer();
	virtual void Set();
	virtual void Show();
};

#endif // !WORKER_H_

