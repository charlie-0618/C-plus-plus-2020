#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
#include <valarray>

class Student : private std::string, private std::valarray<double>
{
private:
	typedef std::valarray<double> ArrayGG;   //�w�q valarray<double> �� ArrayGG
	//ArrayGG score;   //����
	//std::string name;   //�W�r
	std::ostream & check_arr_out(std::ostream & os);
public:
	using std::valarray<double>::min;
	using std::valarray<double>::max;  //��valarray�����禡�ܦ�Student���O�i�Ϊ������禡

	//inline function
	Student() : std::string("Null Student"), ArrayGG() {}  //�ثe�S�Ψ�
	explicit Student(const std::string & s) : std::string(s), ArrayGG() {}  //�ثe�S�Ψ�
	explicit Student(int i) : std::string("Charlie"), ArrayGG(i) { std::cout << "�I�s�غc�l~" << std::endl; }
	Student(const std::string & s, int n) : std::string(s), ArrayGG(n) {}
	Student(const Student & st) {}   //�ƻs�غc�l
	~Student() {}
	//inline function

	//���O�����禡
	double Average() const;   //�p�⥭��
	std::string & Name();   //�L�X�W�r
	//void sum();
	//���O�����禡

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


