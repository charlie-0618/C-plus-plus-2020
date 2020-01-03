#include <iostream>
#include "mytime.h"

int main()
{
	using std::cout;
	using std::endl;

	Time plan;
	Time coding(40, 2);
	Time drinking(50, 5);
	Time total;

	cout << "plan: ";
	plan.show();
	cout << endl;

	cout << "coding: ";
	coding.show();
	cout << endl;

	cout << "drinking: ";
	drinking.show();
	cout << endl;

	total = coding.operator+(drinking);   //�@�ب禡��ܪk�A�ëD�u���[

	cout << "total: ";
	total.show();
	cout << endl;

	Time eating(30, 1);

	total = eating + total;   //���P�� total = eating.operator+(total);
							  //~�o�˪�F����L�����~
	cout << "eating + total: ";
	total.show();
	cout << endl;

	Time swimming(20, 4);
	
	total = swimming * 1.2;   //���`�I�soperator
	total = 1.2 * swimming;   //�ϥι٦��ƸѨM�ϥΪ̿�J�A�˰��D

	cout << "new total: ";
	total.show();
	cout << endl;

	std::cin.get();
	return 0;
}