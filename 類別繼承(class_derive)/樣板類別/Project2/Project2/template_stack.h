#ifndef STACKTEMPLATE_H_
#define STACKTEMPLATE_H_

template<class Type>
class Stack {
private:
	enum num{MAX = 10};
	Type items[num::MAX];
	int top;
public:
	Stack();
	~Stack();
	bool isempty();
	bool isfull();
	bool push(const Type & save_item);
	bool pop(Type & rm_item);
};

template<class Type>
Stack<Type>::Stack() { top = 0; }

template<class Type>
Stack<Type>::~Stack() { }

template<class Type>
bool Stack<Type>::isempty() {
	return top == 0;
}

template<class Type>
bool Stack<Type>::isfull() {
	return top == num::MAX;
}

template<class Type>
bool Stack<Type>::push(const Type & save_item) {
	if (top < num::MAX) {
		cout << "ggggg" << endl;
		items[top++] = save_item;
		return true;
	}
	else {
		return false;
	}
}

template<class Type>
bool Stack<Type>::pop(Type & rm_item) {
	if (top > 0) {
		cout << "fffff" << endl;
		rm_item = items[--top];
		cout << rm_item << endl;
		return true;
	}
	else {
		return false;
	}
}


#endif // !STACKTEMPLATE_H_

