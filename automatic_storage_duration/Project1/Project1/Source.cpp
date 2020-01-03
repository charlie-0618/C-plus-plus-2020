#include <iostream>

using namespace std;

template<class T>
void oil(T a);

int main(void)
{

	int x = 10;

	cout << x << " " << &x << endl;

	oil(x);

	cin.get();

	return 0;
}

template<class T>
void oil(T a)
{
	cout << a << " " << &a << endl;

	{
		int a = 20;

		cout << a << " " << &a << endl;
	}
}