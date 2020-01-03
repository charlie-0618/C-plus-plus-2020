#include <iostream>

using namespace std;

int main(void)
{
	int arr[] = {4, 1, 1, 10, 3};
	
	int count = 0;

	for (int i = 0; ; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];

				arr[j + 1] = arr[j];

				arr[j] = temp;
			}
			else if(arr[j] < arr[j + 1])
			{
				count++;
			}
		}
		if (count <= 4)
			break;

		count = 0;
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	cin.get();

	return 0;
}