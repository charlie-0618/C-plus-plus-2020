#include <iostream>

using namespace std;

struct job
{
	char name[50];
	int salary;
};

//template<class T>
//void showarr(T *arr[]);

template<class T>
void showarr(T arr[]);

int main(void)
{
	int *ptr[2];

	job mr_e[2] = { {"charlie", 200}, {"jason", 300} };

	for (int i = 0; i < 2; i++)
	{
		ptr[i] = &mr_e[i].salary;
	}

	cout << &ptr[0] << " " << ptr[0] << endl;
	cout << &ptr[1] << " " << ptr[1] << endl;

	//++++++++++++++++++++++++++++++++++
	// ptr == &pd[0]
	// ptr[0] == &mr_e[i].salary
	// *ptr[0] == mr_e[i].salary
	// arr == ptr
	//++++++++++++++++++++++++++++++++++

	showarr(ptr);

	showarr(ptr);

	cin.get();

	return 0;
}

template<class T>
void showarr(T *arr[])    //�o�� T ��� double
{

	for (int i = 0; i < 2; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void showarr(T arr[])    //�P�W�� T *arr[] �@�˷N��A�u�O�o�� T ��� double *
{
	for (int i = 0; i < 2; i++)
	{
		cout << *arr[i] << " ";
	}
	cout << endl;
}