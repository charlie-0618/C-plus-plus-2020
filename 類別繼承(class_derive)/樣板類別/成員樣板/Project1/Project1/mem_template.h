#ifndef MEM_TEMPLATE_H_
#define MEM_TEMPLATE_H_
#include <iostream>

//----------------------成員樣板----------------------

template<typename T>
class beta {

private:
	template<typename V>   //巢狀成員樣板(nested template member)
	class mega {
	private:
		V val;
	public:
		mega(V num = 0);
		void show();
		V value();
	};
	mega<T> test1;   //私有物件
	mega<int> test2;   //私有物件

public:
	beta(T t, int i);
	template<typename U>   //樣板方法(template method)
	U blab(U u, T t);
	void show();
};


template<typename T>
template<typename V>
beta<T>::mega<V>::mega(V num) : val(num) { }

template<typename T>
template<typename V>
void beta<T>::mega<V>::show() {
	cout << val << endl;
}

template<typename T>
template<typename V>
V beta<T>::mega<V>::mega::value() {
	return val;
}

//--------------------------------------------------

template<typename T>
beta<T>::beta(T t, int i) : test1(t), test2(i) { };

template<typename T>
template<typename U>
U beta<T>::blab(U u, T t) {
	return (test1.value() + test2.value())*u / t;
}

template<typename T>
void beta<T>::show() {
	test1.show();
	test2.show();
}

#endif // !MEM_TEMPLATE_H_