#ifndef MYTEMPLATE_H_
#define MYTEMPLATE_H_
#include <iostream>
#include "stack.h"
#include "test.h"

int aa = 5;
int bb = 5;

template<template <typename T> class Thing, template <typename P> class Test>   //���O�˪O �M�� �䥦���O���˪O�榡�A�˪O<�˪O<>>
class Crab {
private:
	Thing<int> s1;
	Test<int> s2 = Test<int>(aa, bb);
public:
	Crab() { }
	bool push(int a);
	bool pop(int a);
};

template<template <typename T> typename Thing, template <typename P> typename Test>
bool Crab<Thing, Test>::push(int a) {
	return s1.push(a);
}

template<template <typename T> typename Thing, template <typename P> typename Test>
bool Crab<Thing, Test>::pop(int a) {
	return s1.pop(a);
}

#endif // !MYTEMPLATE_H_