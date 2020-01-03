#include <iostream>
#include <windows.h>

using namespace std;

//char * __stdcall  GetCommandLine();
void gg(double (*arm)[6]);
void gg1(double **arm);

int * test(int *p)
{
	cout << *p << " " << p << " " << &p << endl;

	*p = 20;

	return p;
}

int main(void)
{
	int *p1 = new int(42);

	int *p2 = test(p1);

	cout << *p1 << " " << p1 << " " << &p1 << endl;

	delete p1;

	cout << *p2 << " " << p2 << " " << &p2 << endl;

	double arm[20][6] = { { 2,3,6,7,1,2 },{ 10,50,20,4,5,3 } };  //二維陣列也是一種雙重指標

	cout << &arm << " " << arm << " " << *arm << *(arm + 0) << *(*(arm + 1) + 2) << endl;

	gg(arm);

	//cout << arm << " " << &arm[0] << endl;
	//cout << arm[0] << " " << &arm[0][0] << endl;

	int arr[3] = {1,2,3};
	cout << &arr << " " << arr << " " << &arr[0];

	system("pause");

	return 0;
}

void gg(double (*arm)[6])
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << *(*(arm + i) + j) << endl;;
			
		}
	}
}
