#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
#include <valarray>

class Student
{
private:
	typedef std::valarray<double> ArrayGG;   //定義 valarray<double> 為 ArrayGG
	ArrayGG score;   //分數
	std::string name;   //名字
	std::ostream & check_arr_out(std::ostream & os);
public:
	//inline function
	Student() : name("Null Student"), score() {}
	explicit Student(const std::string & s) : name(s), score() {}
	explicit Student(int i) : name("Charlie"), score(i) { std::cout << "呼叫建構子~" << std::endl; }
	Student(const std::string & s, int n) : name(s), score(n){}
	Student(const Student & st){}   //複製建構子
	~Student(){}
	//inline function

	double Average() const;   //計算平均
	std::string & Name();   //印出名字
	//std::istream & getlinee(std::istream & is, Student & stu);

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

