#pragma once
#include <iostream>

using namespace std;

class IK
{
private:
	enum {month = 10};   //�C�|�ݩ����O�då
	static const int gg = 10;   //�Y�L�ŧistatic�h�|error, ���ઽ���a�J�`��
	double cost[gg];   //double cost[month]

	int fuss;

public:
	IK();
	IK(int f);

	void Viewik();
};