#include <iostream>

using namespace std;

char *buildstr(char ch, int time);

int main(void)
{
	char ch;

	int time;

	cin >> ch;

	while (!(cin >> time))
	{
		cin.clear();

		while (cin.get() != '\n')
			continue;
			
		cout << "輸入錯誤！" << endl;
	}

	char *ps = buildstr(ch, time);

	

	/*while (time-- > 0)
	{
		cout << *(ps + time);
	}*/

	cout << ps << endl;

	delete[] ps;

	system("pause");

	return 0;
}

char *buildstr(char ch, int time)
{
	char *ps = new char[time + 1];

	*(ps + time) = '\0';
	//等同於ps[time]

	while (time-- > 0)
	{
		*(ps + time) = ch;
	}

	return ps;
}