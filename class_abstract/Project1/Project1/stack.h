#pragma once
typedef unsigned long item;

class Stack
{
private:
	enum {max = 10};
	item items[max];
	int top;
public:
	//int i = 9;
	Stack();
	bool isempty();
	bool isfull();
	bool push(item & gg);
	bool pop(item & gg);
	void tt();
};