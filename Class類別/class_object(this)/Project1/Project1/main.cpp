#include <iostream>
#include "charlie.h"

using namespace std;

int main(void)
{
	
	Charlie dd;   //�I�s�w�]�غc�l
	Charlie ff;   //�I�s�w�]�غc�l
	Charlie *ww = new Charlie;  //�Хߪ�����СA�éI�s�w�]�غc�l


	Charlie test[3] = {
		Charlie("F129522107", 20, 2000),
		Charlie("G293742190", 30, 7000),
		Charlie("H294506112", 10, 500),
	};

	for (int i = 0; i < 3; i++)
		test[i].show();

	Charlie *ptr = &test[0];
	//Charlie ptr = test[0];

	for (int i = 0; i < 3; i++)
		ptr = &(ptr->topval(test[i]));
		//ptr = ptr.topval(test[i]);

	/*for (int i = 0; i < 3; i++)
		ptr = ptr->topval(test[i]);*/

	cout << "\n\n";
	
	ptr->show();
	//ptr.show();

	cin.get();

	return 0;
}