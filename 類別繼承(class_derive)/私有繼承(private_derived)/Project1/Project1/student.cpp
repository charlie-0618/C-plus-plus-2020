#include "Student.h"

using namespace std;

double Student::Average() const {
	if (ArrayGG::size() > 0) {
		return ArrayGG::sum() / ArrayGG::size();  //�i�H�[ArrayGG::�]�i�H���[�A���O���[���e���O�S���P���P�W���禡
	}
	else {
		return 0;
	}
}

std::string & Student::Name() {
	return (string &) *this;   //�^�Ǫ��󥻨���string��
}

/*void Student::sum() {   //���[ArrayGG::��sum�|error
	cout << "fuck" << endl;
}*/

double & Student::operator[](int i) {
	cout << "hi ";
	return ArrayGG::operator[](i);  //���[ArrayGG::�|�L���I�s�ۤv�A�p�G�S��Student::operator[](int i)�A�O�i�H���[ArrayGG::
}

/*double Student::operator[](int i) const {
return score[i];
}*/


//�٦��Ʀb�p���~�ӤU�A�L�k�ϥΰ�¦���O��������ơA���O ArrayGG::operator[](i)
//�u���~�ӤU��*�����禡*��ϥΰ�¦���O��*�������*
std::istream & operator>>(std::istream & is, Student & stu) {
	is >> (string &) stu;  //�j���ഫ�A�^��stu�����x�s��string
	return is;
}

std::istream & getline(std::istream & is, Student & stu) {
	getline(is, (string &) stu);
	return is;
}

std::ostream & operator<<(std::ostream & os, Student & stu) {
	os << "�ǭ�: " << (string &) stu << "\n";
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