#ifndef ARRAY_TP_H_
#define ARRAY_TP_H_
#include <iostream>

template<class T, int n>
class ArrayTP {
private:
	T arr[n];  //�x�s�}�C
public:
	ArrayTP();
	~ArrayTP();
	explicit ArrayTP(const T & v);
	T & operator[](int i);
	T operator[](int i) const;
};

template<class T, int n>
ArrayTP<T,n>::ArrayTP() {
}

template<class T, int n>
ArrayTP<T, n>::~ArrayTP() {
}

template<class T, int n>
ArrayTP<T, n>::ArrayTP(const T & v) {
}

template<class T, int n>
T & ArrayTP<T, n>::operator[](int i) {
	//std::cout << "#";
	if (i < 0 || i >= n) {
		std::cout << "�W�X�}�C�j�p" << std::endl;
	}
	return arr[i];
}

template<class T, int n>
T ArrayTP<T, n>::operator[](int i) const {
	std::cout << "22" << std::endl;
	if (i < 0 || i >= n) {
		std::cout << "�W�X�}�C�j�p" << std::endl;
	}
	return arr[i];
}

#endif // !ARRAY_TP_H_

