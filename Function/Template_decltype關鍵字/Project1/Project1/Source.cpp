#include <iostream>

using namespace std;

template<class T1, class T2>
auto charlie(T1 &a, T2 &b) -> decltype(a + b);

int main(void)
{
	int x = 100;
	double y = 200.445;

	cout << charlie(x, y) << endl;

	cin.get();

	return 0;
}

template<class T1, class T2>
auto charlie(T1 &a, T2 &b) -> decltype(a + b)    //auto 透過 -> decltype(a + b) 自動追蹤回傳變數形態
{
	decltype(a + b) num = a + b;   //根據 a+b 最後結果來決定 num 的形態

	return num;
}