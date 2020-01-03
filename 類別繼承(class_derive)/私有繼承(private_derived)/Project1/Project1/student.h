#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
#include <valarray>

class Student : private std::string, private std::valarray<double>
{
private:
	typedef std::valarray<double> ArrayGG;   //定義 valarray<double> 為 ArrayGG
	//ArrayGG score;   //分數
	//std::string name;   //名字
	std::ostream & check_arr_out(std::ostream & os);
public:
	using std::valarray<double>::min;
	using std::valarray<double>::max;  //使valarray成員函式變成Student類別可用的成員函式

	//inline function
	Student() : std::string("Null Student"), ArrayGG() {}  //目前沒用到
	explicit Student(const std::string & s) : std::string(s), ArrayGG() {}  //目前沒用到
	explicit Student(int i) : std::string("Charlie"), ArrayGG(i) { std::cout << "呼叫建構子~" << std::endl; }
	Student(const std::string & s, int n) : std::string(s), ArrayGG(n) {}
	Student(const Student & st) {}   //複製建構子
	~Student() {}
	//inline function

	//類別成員函式
	double Average() const;   //計算平均
	std::string & Name();   //印出名字
	//void sum();
	//類別成員函式

	//類別成員運算子
	double & operator[](int i);
	double operator[](int i) const;
	//類別成員運算子

	//夥伴函數
	friend std::istream & operator>>(std::istream & is, Student & stu);
	friend std::istream & getline(std::istream & is, Student & stu);
	friend std::ostream & operator<<(std::ostream & os, Student & stu);
	//夥伴函數
};

#endif // !STUDENT_H_


