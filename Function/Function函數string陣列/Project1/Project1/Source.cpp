#include <iostream>
#include <string>

using namespace std;

void gg(string get_test[]);

int main(void)
{
	string test[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "½Ð¿é¤J: ";
		getline(cin, test[i]);
	}

	gg(test);

	cin.get();

	return 0;
}

void gg(string get_test[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << get_test[i] << endl;
	}
}