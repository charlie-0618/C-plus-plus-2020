//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++麻煩又奇怪的函數樣板多載+++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <iostream>

using namespace std;

struct job
{
	char name[50];
	double salary;
	int floor;
};

template<class T>
void Charlie(T &a, T &b);

template <> void Charlie<job>(job &, job &);   //特定實體化，表示自己獨立特定化產生實體
											   //explicit specialization

template void Charlie<char>(char &, char &);   //顯示實體化，表示自己定義函式產生類型，由Charlie()產生實體化
											   //explicit instantiation

template void Charlie<int>(int &, int &);  //2019/9/3新增，此樣板會搶到第一個樣板 template<class T>
																		      //void Charlie(T &a, T &b);

int main(void)
{
	//template void Charlie<char>(char &, char &);

	int i = 0, j = 1;

	Charlie(i, j);

	job gg1 = { "charlie", 213.467, 2 };
	job gg2 = { "jason", 587.643, 5 };
	Charlie(gg1, gg2);

	char g[2];
	char h[2];

	g[0] = 'a';
	h[0] = 'b';

	Charlie<char>(g[0], h[0]);

	cout << g[0] << " " << h[0] << endl;

	Charlie<int>(i, j);

	cin.get();

	return 0;
}

template<class T>
void Charlie(T &a, T &b)
{
	cout << "gg" << endl;
	a = a + b;
	cout << a << endl;
}

template <> void Charlie<job>(job &a, job &b)
{
	cout << a.floor << endl;
}

void Charlie<char>(char &a, char &b)
{
	cout << a << endl;
	a = b;
}

void Charlie<int>(int &a, int &b)
{
	cout << "hi " << endl;
	a = a + b;
	cout << a << endl;
}