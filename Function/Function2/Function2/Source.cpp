// Function1.cpp: �w�q�D���x���ε{�����i�J�I�C
//
#include <iostream>

using namespace std;

void arrtest(const int *ptr);

int main()
{
	int arr[] = { 1,2,3,4,5 };

	arrtest(arr);

	char ee[4];
	char ss[4];

	cin.get(ee, 4);
	cin.get();

	cout << ee << endl;
	cout << "--------------" << endl;

	cin.get(ss, 4);

	cout << ss << endl;

	int gg;

	while (!(cin >> gg))
	{
		cin.clear();  //�^���J���Ĥ@�줸��

		while (true)
		{
			char ff = cin.get();
			cout << ff << endl;
			cout << "-------------" << endl;
			if (ff == '\n')
			{
				cout << "byebye" << endl;
				break;
			}
		}
	}

	cin.get();
	cin.get();

	return 0;
}

void arrtest(const int *ptr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr + i) << "  " << ptr[i] << endl;
	}

}

