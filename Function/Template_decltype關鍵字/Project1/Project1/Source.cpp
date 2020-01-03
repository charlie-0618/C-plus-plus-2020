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
auto charlie(T1 &a, T2 &b) -> decltype(a + b)    //auto �z�L -> decltype(a + b) �۰ʰl�ܦ^���ܼƧκA
{
	decltype(a + b) num = a + b;   //�ھ� a+b �̫ᵲ�G�ӨM�w num ���κA

	return num;
}