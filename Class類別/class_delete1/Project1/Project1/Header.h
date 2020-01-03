#pragma once
#include <iostream>

using namespace std;

class IK
{
private:
	enum {month = 10};   //列舉屬於類別範疇
	static const int gg = 10;   //若無宣告static則會error, 不能直接帶入常數
	double cost[gg];   //double cost[month]

	int fuss;

public:
	IK();
	IK(int f);

	void Viewik();
};