#include "Student.h"

using namespace std;

double Student::Average() const {
	if (ArrayGG::size() > 0) {
		return ArrayGG::sum() / ArrayGG::size();  //可以加ArrayGG::也可以不加，但是不加的前提是沒有與它同名的函式
	}
	else {
		return 0;
	}
}

std::string & Student::Name() {
	return (string &) *this;   //回傳物件本身的string值
}

/*void Student::sum() {   //不加ArrayGG::的sum會error
	cout << "fuck" << endl;
}*/

double & Student::operator[](int i) {
	cout << "hi ";
	return ArrayGG::operator[](i);  //不加ArrayGG::會無限呼叫自己，如果沒有Student::operator[](int i)，是可以不加ArrayGG::
}

/*double Student::operator[](int i) const {
return score[i];
}*/


//夥伴函數在私有繼承下，無法使用基礎類別的成員函數，像是 ArrayGG::operator[](i)
//只有繼承下的*成員函式*能使用基礎類別的*成員函數*
std::istream & operator>>(std::istream & is, Student & stu) {
	is >> (string &) stu;  //強制轉換，回傳stu物件儲存的string
	return is;
}

std::istream & getline(std::istream & is, Student & stu) {
	getline(is, (string &) stu);
	return is;
}

std::ostream & operator<<(std::ostream & os, Student & stu) {
	os << "學員: " << (string &) stu << "\n";
	stu.check_arr_out(os);
	return os;
}

std::ostream & Student::check_arr_out(std::ostream & os) {
	int i;
	int num = ArrayGG::size();
	if (num > 0) {
		for (i = 0; i < num; i++) {
			os << ArrayGG::operator[](i) << endl;
			if (i % num == 2) {
				os << "$$" << endl;
			}
		}
		if (i % num != 0)
			os << "@!@!" << endl;
	}
	else
		os << "arr empty!" << endl;

	return os;
}