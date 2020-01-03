#include <iostream>
#include "array_tp.h"

using namespace std;

int main() {

	ArrayTP<int, 10> sum;
	ArrayTP<double, 10> average;
	ArrayTP< ArrayTP<int, 5>, 10> arr_2d;

	for (int i = 0; i < 10; i++) {
		sum[i] = 0;   //呼叫operator一次
		for (int j = 0; j < 5; j++) {
			arr_2d[i][j] = j + 1;   //呼叫operator兩次
			sum[i] += arr_2d[i][j];   //呼叫operator三次
		}
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr_2d[i][j] << " ";  //呼叫operator兩次
		}
		cout << "總和:" << sum[i] << endl;
	}


	cin.get();
	return 0;
}