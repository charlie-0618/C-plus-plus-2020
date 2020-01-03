#ifndef MEM_TEMPLATE_H_
#define MEM_TEMPLATE_H_
#include <iostream>

template<typename T>
class Beta {
private:
	template<typename G>  //Mega���O�˪O
	class Mega;   //�b�쥻���O���A�ŧi�@�����O
	Mega<T> test1;   //�ŧi���O����A�åB�OBeta���p������
	Mega<int> test2;
public:
	Beta(T t, int i);
	~Beta() {};

	template<typename U>
	U blab(U u, T t);

	void show();
};

//--------------------------------�w�qMega--------------------------------
template<typename T>
template<typename G>
class Beta<T>::Mega {   //�b�~���w�q���O�A�åB�ݭn�νdå(scope)�Ӫ�ܩ��ݭ����O
private:
	G val;
public:
	Mega(G num = 0);   //�غc�l
	~Mega() {};
	void show();
	G value();
};
//--------------------------------�w�qMega--------------------------------

//--------------------------------��@Mega--------------------------------
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
//--------------------------------��@Mega--------------------------------

//--------------------------------��@Beta--------------------------------
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