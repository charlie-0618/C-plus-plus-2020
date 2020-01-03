#ifndef _NAME_H_
#define _NAME_H_
#include <iostream>

class Base_Sex {
private:
	char *sex;
	double weight;
public:
	Base_Sex(const char *s = "male", double weightt = 70);
	Base_Sex(const Base_Sex & b);
	virtual ~Base_Sex();
	Base_Sex & operator=(Base_Sex & b);
	friend std::ostream & operator<<(std::ostream & os, Base_Sex & b);
};


class Girl : public Base_Sex {
private:
	double cup_size;
public:
	Girl(const char *s = "female", double weight = 45);
	Girl(const char *c, const Base_Sex & ss);
	Girl(const Girl & g);
	friend std::ostream & operator<<(std::ostream & os, Girl & g);
};

class Man : public Base_Sex {
private:
	double chest_size;
public:
	Man(const char *s = "man", double weight = 80);
	Man(const char *c, const Base_Sex & ss);
	Man(const Man & m);
	~Man();
	Man & operator=(Man & m);
	friend std::ostream & operator<<(std::ostream & os, Man & m);
};

#endif // !_NAME_H_

