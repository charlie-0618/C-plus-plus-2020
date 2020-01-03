#include <iostream>

using namespace std;

int main(void)
{
	int arr[] = {5, 10, 3, 7, 1};

	int num_place = 1, temp = 0, count = 0, flag = 0;

	for (int j = 0; j < 5; j++)
	{
		int min = arr[j];

		flag = 0;

		for (int i = num_place; i < 5; i++)
		{
			if (min > arr[i])
			{
				min = arr[i];
				count = i;
				flag = 1;
			}
		}
		cout << count << "_";
		cout << endl;

		num_place++;

		if (flag == 1)
		{
			temp = arr[j];

			arr[j] = arr[count];

			arr[count] = temp;
		}
	}

	for (int j = 0; j < 5; j++)
	{
		cout << arr[j] << " ";
	}


	cin.get();

	return 0;
}