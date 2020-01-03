#include <iostream>
#include <string>
#include <new>
#include <cstdlib>
#include "charlie.h"

using namespace std;

int main()
{
	int r1 = 2 + rand() * 6 / (RAND_MAX + 1);
	int r2 = 2 + rand() * 6 / (RAND_MAX + 1);
	int r3 = 2 + rand() * 6 / (RAND_MAX + 1);
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;
	std::cout << r3 << std::endl;

	Charlie *pveg = new Charlie("uuuuu");  //會呼叫Charlie(const char * s);

	std::cout << "-----------" << std::endl << std::endl;
	//--------------------------------------------------------
	//                        #範例1#
	//--------------------------------------------------------
	char *buffer = new char[512];

	Charlie *pc1, *pc2;
	pc1 = new (buffer) Charlie;
	pc2 = new Charlie("gggg", 20);

	cout << "Memory: " << (void *)buffer << "  pc1:" << &pc1[0] << " pc2:" << pc2 << endl;
	pc1->show();
	pc2->show();

	Charlie *pc3, *pc4;
	pc3 = new (buffer) Charlie("jack", 70);   //會覆寫原本的pc1的內容
	pc4 = new Charlie("alice", 45);

	cout << "Memory: " << (void *)buffer << "  pc3:" << pc3 << " pc4:" << pc4 << endl;
	pc3->show();
	pc4->show();

	delete pc2;
	delete pc4;
	//pc3->~Charlie();
	//pc1->~Charlie();
	delete[] buffer;   //並不會呼叫pc1和pc3的結構函數
	//--------------------------------------------------------
	//                        #範例1#
	//--------------------------------------------------------

	//--------------------------------------------------------
	//                        #範例2#
	//--------------------------------------------------------
	char *buffer1 = new char[512];

	Charlie *pc5, *pc6;
	pc5 = new (buffer1) Charlie;
	pc6 = new (buffer1 + sizeof(Charlie)) Charlie("peter", 100);   //不會覆寫pc5的內容，因為儲存位置偏移一個物件位址大小
	pc5->show();
	pc6->show();

	pc6->~Charlie();  //定址放置(placement new)解構時要相反順序解構
	pc5->~Charlie();
	delete[] buffer1;
	//--------------------------------------------------------
	//                        #範例2#
	//--------------------------------------------------------

	cin.get();
	return 0;
}