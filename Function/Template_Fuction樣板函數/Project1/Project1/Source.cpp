#include <iostream>

using namespace std;

template <class T>
void Swap(T &a, T &b);

template <class T>
void Swap(T *c, T *d, int n);

const int num = 3;

int main(void)
{
	int i = 10;
	int j = 20;

	int a1[] = { 2, 4, 5 };
	int a2[] = { 8, 1, 2 };

	Swap(i,j);

	cout << i << " " << j << endl;

	Swap(a1, a2, num);

	for (int i = 0; i < num; i++)
	{
		cout << a1[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < num; i++)
	{
		cout << a2[i] << " ";
	}

	cin.get();

	return 0;
}

template <class T>
void Swap(T &a, T &b)
{
	T temp = a * b;

	a = b;

	b = temp;
}

template <class T>
void Swap(T *c, T *d, int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = *(c + i);
		*(c + i) = *(d + i);
		*(d + i) = temp;
	}
}