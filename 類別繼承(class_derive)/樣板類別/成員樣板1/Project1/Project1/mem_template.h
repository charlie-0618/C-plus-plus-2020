#ifndef MEM_TEMPLATE_H_
#define MEM_TEMPLATE_H_
#include <iostream>

template<typename T>
class Beta {
private:
	template<typename G>  //Mega類別樣板
	class Mega;   //在原本類別內再宣告一個類別
	Mega<T> test1;   //宣告類別物件，並且是Beta的私有成員
	Mega<int> test2;
public:
	Beta(T t, int i);
	~Beta() {};

	template<typename U>
	U blab(U u, T t);

	void show();
};

//--------------------------------定義Mega--------------------------------
template<typename T>
template<typename G>
class Beta<T>::Mega {   //在外面定義類別，並且需要用範疇(scope)來表示所屬原類別
private:
	G val;
public:
	Mega(G num = 0);   //建構子
	~Mega() {};
	void show();
	G value();
};
//--------------------------------定義Mega--------------------------------

//--------------------------------實作Mega--------------------------------
template<typename T>
template<typename G>
Beta<T>::Mega<G>::Mega(G num) : val(num){}

template<typename T>
template<typename G>
void Beta<T>::Mega<G>::show() {
	cout << val << endl;
}

template<typename T>
template<typename G>
G Beta<T>::Mega<G>::value() {
	return val;
}
//--------------------------------實作Mega--------------------------------

//--------------------------------實作Beta--------------------------------
template<typename T>
Beta<T>::Beta(T t, int i) : test1(t), test2(i){ }

template<typename T>
template<typename U>
U Beta<T>::blab(U u, T t) {
	return (test1.value() + test2.value());
}

template<typename T>
void Beta<T>::show() {
	test1.show();
	test2.show();
}
//--------------------------------Beta--------------------------------
#endif // !MEM_TEMPLATE_H_