#include <iostream>

using namespace std;

int ptr_to_fuc(int i);
void charlie(int i, int(*pf)(int));

int main(void)
{
	int i, j;

	(cin >> i).get();
	(cin >> j).get();

	charlie(i, ptr_to_fuc);

	cin.get();

	return 0;
}

int ptr_to_fuc(int i)
{
	return ++i;
}

void charlie(int i, int (*pf)(int))
{
	cout << "�A��J: " << i << endl;

	cout << "�B�z��: " << (*pf)(i) << endl;
}

