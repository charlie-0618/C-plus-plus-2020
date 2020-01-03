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

	Charlie *pveg = new Charlie("uuuuu");  //�|�I�sCharlie(const char * s);

	std::cout << "-----------" << std::endl << std::endl;
	//--------------------------------------------------------
	//                        #�d��1#
	//--------------------------------------------------------
	char *buffer = new char[512];

	Charlie *pc1, *pc2;
	pc1 = new (buffer) Charlie;
	pc2 = new Charlie("gggg", 20);

	cout << "Memory: " << (void *)buffer << "  pc1:" << &pc1[0] << " pc2:" << pc2 << endl;
	pc1->show();
	pc2->show();

	Charlie *pc3, *pc4;
	pc3 = new (buffer) Charlie("jack", 70);   //�|�мg�쥻��pc1�����e
	pc4 = new Charlie("alice", 45);

	cout << "Memory: " << (void *)buffer << "  pc3:" << pc3 << " pc4:" << pc4 << endl;
	pc3->show();
	pc4->show();

	delete pc2;
	delete pc4;
	//pc3->~Charlie();
	//pc1->~Charlie();
	delete[] buffer;   //�ä��|�I�spc1�Mpc3�����c���
	//--------------------------------------------------------
	//                        #�d��1#
	//--------------------------------------------------------

	//--------------------------------------------------------
	//                        #�d��2#
	//--------------------------------------------------------
	char *buffer1 = new char[512];

	Charlie *pc5, *pc6;
	pc5 = new (buffer1) Charlie;
	pc6 = new (buffer1 + sizeof(Charlie)) Charlie("peter", 100);   //���|�мgpc5�����e�A�]���x�s��m�����@�Ӫ����}�j�p
	pc5->show();
	pc6->show();

	pc6->~Charlie();  //�w�}��m(placement new)�Ѻc�ɭn�ۤ϶��ǸѺc
	pc5->~Charlie();
	delete[] buffer1;
	//--------------------------------------------------------
	//                        #�d��2#
	//--------------------------------------------------------

	cin.get();
	return 0;
}