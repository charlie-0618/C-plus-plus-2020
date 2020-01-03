#ifndef MYSTACK_H_
#define MYSTACK_H_
#include <iostream>

template<typename M>
class MyStack {
private:
	enum num{max = 10};
	M item[num::max];
	int top;
public:
	MyStack();
	~MyStack() { }
	bool push(M & m);
	bool pop(M & m);
	bool isempty();
	bool isfull();
};

template<typename M>
MyStack<M>::MyStack() {
	top = 0;
}

template<typename M>
bool MyStack<M>::push(M & m) {
	if (top < num::max) {
		item[top++] = m;
		return true;
	}
	else
		return false;
}

template<typename M>
bool MyStack<M>::pop(M & m) {
	if (top > 0) {
		m = item[--top];
		cout << "²¾°£" << m << endl;
		return true;
	}
	else
		return false;
}

template<typename M>
bool MyStack<M>::isempty() {
	return top == 0;
}

template<typename M>
bool MyStack<M>::isfull() {
	return top == 10;
}

#endif // !STACK_H_
