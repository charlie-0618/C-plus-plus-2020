#pragma warning( disable : 4996 )
#include "name.h"

Base_Sex::Base_Sex(const char *s, double weightt) {
	sex = new char(strlen(s) + 1);
	std::strcpy(sex, s);
	weight = weightt;
}
Base_Sex::Base_Sex(const Base_Sex & b) {
	std::cout << "Base_Sex�غc�l" << std::endl;
	sex = new char(strlen(b.sex) + 1);
	std::strcpy(sex, b.sex);
	weight = b.weight;
}
Base_Sex::~Base_Sex() {
	std::cout << "Base_Sex bye!" << std::endl;
}
Base_Sex & Base_Sex::operator=(Base_Sex & b) {
	if (this == &b)
		return *this;
	//delete[] sex;
	sex = new char(strlen(b.sex) + 1);
	std::strcpy(sex, b.sex);
	weight = b.weight;
	return *this;
}
std::ostream & operator<<(std::ostream & os, Base_Sex & b) {   //�٦���
	os << "�ʧO: " << b.sex << std::endl;
	os << "�魫: " << b.weight << std::endl;
	
	return os;
}


Girl::Girl(const char *s, double weight) : Base_Sex(s, weight){
	cup_size = 32;
}
Girl::Girl(const char *c, const Base_Sex & ss) : Base_Sex(ss){
	std::cout << "Girl~~~~~" << std::endl;
}
Girl::Girl(const Girl & g) : Base_Sex(g){
	std::cout << "Girl�ƻs�غc�l" << std::endl;
}
std::ostream & operator<<(std::ostream & os, Girl & g) {
	os << (Base_Sex &) g;   //�j���ഫ��Base_Sex����A�]���٦��ƫD��¦���O�����A����ΰ�¦���O��point�Mreference�h�B�z
	os << "�n�M�j�p: " << g.cup_size << std::endl;

	return os;
}


Man::Man(const char *s, double weight) : Base_Sex(s, weight){
	chest_size = 105;
}
Man::Man(const char *c, const Base_Sex & ss) : Base_Sex(ss){
	std::cout << "Man~~~~~" << std::endl;
}
Man::Man(const Man & m) : Base_Sex(m){
	std::cout << "Man�ƻs�غc�l" << std::endl;
}
Man::~Man() {
}
Man & Man::operator=(Man & m) {
	std::cout << "���w�B��l" << std::endl;
	if (this == &m) {   //�p�G��ӰO�����m�۵��i�J�A²�Ө����A�⪫��@��
		std::cout << this << "  " << &m << std::endl;
		return *this;
	}
	Base_Sex::operator=(m);
	return *this;
}
std::ostream & operator<<(std::ostream & os, Man & m) {
	os << (Base_Sex &)m;   //�j���ഫ����¦���O�κA�A�]���٦��ƨëD���O�����A�����ۦP���s���v��
	os << "�ݳ�: " << m.chest_size << std::endl;
	return os;
}