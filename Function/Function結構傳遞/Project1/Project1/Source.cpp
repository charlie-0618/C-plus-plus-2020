#include <iostream>

struct test
{
	int min;
	int hour;
};

void gg(test *time);

using namespace std;

int main(void)
{
	test time = {50, 3};

	gg(&time);

	cin.get();

	return 0;
}

void gg(test *time)
{
	cout << time->hour << endl;   //使用指標struct時，取值用"->"  //一般struct取值用"."
	cout << time->min << endl;
}