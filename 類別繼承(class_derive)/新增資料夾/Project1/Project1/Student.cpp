#include "Student.h"

using namespace std;

double Student::Average() const {
	if (score.size() > 0) {
		return score.sum() / score.size();
	}
	else {
		return 0;
	}
}

std::string & Student::Name() {
	return name;
}

double & Student::operator[](int i) {
	cout << "hi";
	return score[i];
}

/*double Student::operator[](int i) const {
	return score[i];
}*/

std::istream & operator>>(std::istream & is, Student & stu) {
	is >> stu.name;
	return is;
}

std::istream & getline(std::istream & is, Student & stu) {
	getline(is, stu.name);
	return is;
}

std::ostream & operator<<(std::ostream & os, Student & stu) {
	os << "¾Ç­û: " << stu.name << "\n";
	stu.check_arr_out(os);
	return os;
}

std::ostream & Student::check_arr_out(std::ostream & os) {
	int i;
	int num = score.size();
	if (num > 0) {
		for (i = 0; i < num; i++) {
			os << score[i] << endl;
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