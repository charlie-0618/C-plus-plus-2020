#include <iostream>
#include <time.h>

using namespace std;

int main(void)
{
	double start, end;

	start = clock();

	int arr[] = { 5, 10, 80, -9, 1 };

	/*int num;

	for (int i = 1; i < 5; i++)
	{
		num = i - 1;
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[num])
			{
				int temp = arr[num];

				arr[num] = arr[j];

				arr[j] = temp;
			}
			num--;
		}
	}*/

	for (int i = 1; i < 5; i++)
	{
		int insert_value = arr[i];   //���J���ƭ�

		int insert_index = i - 1;   //�e�@�Ӽƭ�

		while (insert_index >= 0 && insert_value < arr[insert_index])
		{
			arr[insert_index + 1] = arr[insert_index];
			insert_index--;
		}

		arr[insert_index + 1] = insert_value;

	}

	for (int j = 0; j < 5; j++)
	{
		cout << arr[j] << " ";
	}

	end = clock();

	cout << endl << "�i��B��Ҫ�O���ɶ��G" << (end - start) / CLOCKS_PER_SEC << " s" << endl;

	cin.get();
	return 0;
}