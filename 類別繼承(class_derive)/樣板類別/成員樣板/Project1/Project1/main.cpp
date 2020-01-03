#include <iostream>
#include "mem_template.h"

using namespace std;

int main() {

	beta<double> gg(3.5, 3);

	gg.show();

	cout << "###########" << endl;

	int i = gg.blab(10, 2.3);
	cout << i << endl;

	cout << "###########" << endl;

	double ii = gg.blab(10.0, 2.3);
	cout << ii << endl;

	cin.get();
	return 0;
}