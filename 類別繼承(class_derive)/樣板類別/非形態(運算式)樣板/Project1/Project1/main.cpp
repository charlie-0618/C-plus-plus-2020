#include <iostream>
#include "array_tp.h"

using namespace std;

int main() {

	ArrayTP<int, 10> sum;
	ArrayTP<double, 10> average;
	ArrayTP< ArrayTP<int, 5>, 10> arr_2d;

	for (int i = 0; i < 10; i++) {
		sum[i] = 0;   //�I�soperator�@��
		for (int j = 0; j < 5; j++) {
			arr_2d[i][j] = j + 1;   //�I�soperator�⦸
			sum[i] += arr_2d[i][j];   //�I�soperator�T��
		}
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr_2d[i][j] << " ";  //�I�soperator�⦸
		}
		cout << "�`�M:" << sum[i] << endl;
	}


	cin.get();
	return 0;
}