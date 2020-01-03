#ifndef STACKTEMPLATE_H_
#define STACKTEMPLATE_H_

template<class Type>
class Stack {
private:
	//enum num { MAX = 10 };
	int stacksize;
	Type *items;
	int top;
public:
	explicit Stack(int ss = 10);
	Stack(const Stack & s);
	~Stack();
	bool isempty();
	bool isfull();
	bool push(const Type & save_item);
	bool pop(Type & rm_item);
};

template<class Type>
Stack<Type>::Stack(int ss) : stacksize(ss), top(0) {
	items = new Type[stacksize];
}

template<class Type>
Stack<Type>::Stack(const Stack & s) {
	stacksize = s.stacksize;
	top = s.top;
	items = new Type[stacksize];
	for (int i = 0; i < stacksize; i++)
		items[i] = s.items[i];
}

template<class Type>
Stack<Type>::~Stack() {
	cout << "bye" << endl;
	delete[] items;
}

template<class Type>
bool Stack<Type>::isempty() {
	return top == 0;
}

template<class Type>
bool Stack<Type>::isfull() {
	return top == stacksize;
}

template<class Type>
bool Stack<Type>::push(const Type & save_item) {
	cout << save_item << endl;
	if (top < stacksize) {
		cout << "ggggg" << "  " << save_item << endl;
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

