//---------------------------------------------------------------------------------------
//----------------------------------Shell Sort�ƺ��ƧǪk----------------------------------
//---------------------------------------------------------------------------------------
#include <iostream>
#include <time.h>

using namespace std;

int main(void)
{
	double start, end;

	start = clock();

	int arr[] = { 5, 10, 80, -9, 1 ,100, 3, -1, 20};

	int arr_length = sizeof(arr) / sizeof(*arr);

	int interval = arr_length / 2;

	while (true)
	{

		for (int i = 0; i < interval; i++)
		{
			for (int j = i + interval; j < arr_length; j = j + interval)
			{
				int insert_value = arr[j];   //���J���ƭ�

				int insert_index = j - interval;   //�e�@�Ӽƭ�

				while (insert_index >= 0 && insert_value < arr[insert_index])
				{
					arr[insert_index + interval] = arr[insert_index];
					insert_index = insert_index - interval;
				}

				arr[insert_index + interval] = insert_value;
			}
		}

		interval = interval / 2;

		if (interval < 1)
		{
			break;
		}
	}

	for (int j = 0; j < arr_length; j++)
	{
		cout << arr[j] << " ";
	}

	end = clock();

	cout << endl << "�i��B��Ҫ�O���ɶ��G" << (end - start) / CLOCKS_PER_SEC << " s" << endl;
	

	cin.get();

	return 0;
}