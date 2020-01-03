#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
#include <valarray>

class Student
{
private:
	typedef std::valarray<double> ArrayGG;   //�w�q valarray<double> �� ArrayGG
	ArrayGG score;   //����
	std::string name;   //�W�r
	std::ostream & check_arr_out(std::ostream & os);
public:
	//inline function
	Student() : name("Null Student"), score() {}
	explicit Student(const std::string & s) : name(s), score() {}
	explicit Student(int i) : name("Charlie"), score(i) { std::cout << "�I�s�غc�l~" << std::endl; }
	Student(const std::string & s, int n) : name(s), score(n){}
	Student(const Student & st){}   //�ƻs�غc�l
	~Student(){}
	//inline function

	double Average() const;   //�p�⥭��
	std::string & Name();   //�L�X�W�r
	//std::istream & getlinee(std::istream & is, Student & stu);

	//���O�����B��l
	double & operator[](int i);
	double operator[](int i) const;
	//���O�����B��l

	//�٦���
	friend std::istream & operator>>(std::istream & is, Student & stu);
	friend std::istream & getline(std::istream & is, Student & stu);
	friend std::ostream & operator<<(std::ostream & os, Student & stu);
	//�٦���
};

#endif // !STUDENT_H_

