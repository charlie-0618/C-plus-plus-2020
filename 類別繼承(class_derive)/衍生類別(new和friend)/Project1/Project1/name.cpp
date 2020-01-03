#pragma warning( disable : 4996 )
#include "name.h"

Base_Sex::Base_Sex(const char *s, double weightt) {
	sex = new char(strlen(s) + 1);
	std::strcpy(sex, s);
	weight = weightt;
}
Base_Sex::Base_Sex(const Base_Sex & b) {
	std::cout << "Base_Sex建構子" << std::endl;
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
std::ostream & operator<<(std::ostream & os, Base_Sex & b) {   //夥伴函數
	os << "性別: " << b.sex << std::endl;
	os << "體重: " << b.weight << std::endl;
	
	return os;
}


Girl::Girl(const char *s, double weight) : Base_Sex(s, weight){
	cup_size = 32;
}
Girl::Girl(const char *c, const Base_Sex & ss) : Base_Sex(ss){
	std::cout << "Girl~~~~~" << std::endl;
}
Girl::Girl(const Girl & g) : Base_Sex(g){
	std::cout << "Girl複製建構子" << std::endl;
}
std::ostream & operator<<(std::ostream & os, Girl & g) {
	os << (Base_Sex &) g;   //強制轉換為Base_Sex物件，因為夥伴函數非基礎類別成員，不能用基礎類別的point和reference去處理
	os << "罩杯大小: " << g.cup_size << std::endl;

	return os;
}


Man::Man(const char *s, double weight) : Base_Sex(s, weight){
	chest_size = 105;
}
Man::Man(const char *c, const Base_Sex & ss) : Base_Sex(ss){
	std::cout << "Man~~~~~" << std::endl;
}
Man::Man(const Man & m) : Base_Sex(m){
	std::cout << "Man複製建構子" << std::endl;
}
Man::~Man() {
}
Man & Man::operator=(Man & m) {
	std::cout << "指定運算子" << std::endl;
	if (this == &m) {   //如果兩個記憶體位置相等進入，簡而言之，兩物件一樣
		std::cout << this << "  " << &m << std::endl;
		return *this;
	}
	Base_Sex::operator=(m);
	return *this;
}
std::ostream & operator<<(std::ostream & os, Man & m) {
	os << (Base_Sex &)m;   //強制轉換為基礎類別形態，因為夥伴函數並非類別成員，但有相同的存取權限
	os << "胸圍: " << m.chest_size << std::endl;
	return os;
}