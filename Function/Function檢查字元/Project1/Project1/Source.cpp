#include <iostream>

using namespace std;

int check_str(const char *str, char ch);

int main(void)
{
	char str[10] = "charlcie";

	const char *str1 = "jackssso";

	int num1 = check_str(str , 'c');
	int num2 = check_str(str1, 's');

	cout << num1 << endl;
	cout << num2 << endl;

	cin.get();

	return 0;
}

int check_str(const char *str, char ch)
{
	int num = 0;

	while (*str)    //«D ('\0'null¦r¤¸) ¬°true
	{
		if (*str == ch)
		{
			num++;
		}

		str++;
	}

	return num;
}