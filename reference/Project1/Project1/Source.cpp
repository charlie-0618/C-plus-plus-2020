#include <iostream>

using namespace std;

struct job
{
	char name[50];
	double salary;
	int floor;
};

template<class T>
void Swap(T &a, T &b);   //樣板prototype, T會自動判斷變數類型

template <> void Swap<job>(job &, job &);   //同名的多載樣板傳遞struct

void gg(job &, job &);

int main(void)
{
	int i = 10;
	int j = 20;

	Swap(i, j);

	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);

	cout << i << " " << j << endl;

	cout << "----------------------------------------" << endl;

	job gg1 = {"charlie", 213.467, 2};
	job gg2 = { "jason", 587.643, 5 };
	Swap(gg1, gg2);

	cout << gg1.salary << " " << gg1.floor << endl;
	cout << gg2.salary << " " << gg2.floor << endl;
	cout << gg1.name << " " << gg2.name << endl;

	cout << "----------------------------------------" << endl;

	gg(gg1, gg2);

	cin.get();

	return 0;
}

template<class T>
void Swap(T &a, T &b)
{
	T temp = a * b;

	a = b;

	b = temp;
}

template <> void Swap<job>(job &a, job &b)
{
	for (int i = 0; i < 50; i++)
	{
		char tmp[2];
		tmp[0] = a.name[i];
		a.name[i] = b.name[i];
		b.name[i] = tmp[0];
	}  //交換名字

	double tmp1 = a.salary;
	a.salary = b.salary;
	b.salary = tmp1;  //交換薪水

	int tmp2 = a.floor;
	a.floor = b.floor;
	b.floor = tmp2;  //交換樓層
}


void gg(job &a, job &b)
{
	
}