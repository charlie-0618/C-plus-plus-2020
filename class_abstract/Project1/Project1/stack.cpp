#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
	top = 0;
}

bool Stack::isempty()
{
	return top == 0;
}

bool Stack::isfull()
{
	return top == 10;
}

bool Stack::push(item & gg)
{
	if (top < 10)
	{
		items[top++] = gg;
		return true;
	}
	else
		return false;
}

bool Stack::pop(item & gg)
{
	if (top > 0)
	{
		gg = items[--top];
		items[top] = 0;
		return true;
	}
	else
		return false;
}

void Stack::tt()
{
	for (int i = 0; i < max; i++)
	{
		cout << items[i] << " ";
	}
	cout << endl;
}