#include <iostream>

using namespace std;

int *f1(int *);
int *f2(int *);
int *f3(int *);   //�H�W���禡�쫬 function prototype

int main(void)
{
	int test[3] = { 100, 200, 500 };

	int *(*p2[3])(int *) = { f1, f2, f3 };   //���Ы��V�h�Ө禡 pionter to functions

	int *(*p3[3])(int *) = { f1, f2, f3 };

	int *(*(*pd)[3])(int *) = &p2;  //(*(*pd)[3])�N��o��pd���V���@���ƲաA�̭��]�t3�ӤG�������A�åB������ƫ��w

	int *(**pp2)(int *) = &p2[0];

	int a[3] = {1,2,3};
	int data[3][2] = { {110,200}, {300,400}, {500,600} };   //data�N��@���Ʋ�(�}�C)���Ĥ@�Ӥ������a�} == &data[0]
															//data[0] �O {110, 220} ���ƲզW, �]�O�Ĥ@�Ӥ������a�} == &data[0][0]
	int *(*(*p)[3])(int *) = &p2;

	int (*f)[2] = &data[0];    //data�N��@���Ʋ�(�}�C)���Ĥ@�Ӥ������a�} data == &data[0]

	//-------�s�W-------
	int (*g)[3][2] = &data;

	int test1[3] = { 1,2,3 };
	int *h = test1;  //== &test[0]
	int (*t)[3] = &test1;
	//-------�s�W-------

	cout << p2 << " " << &p2[0] << endl;

	cout << &f1 << endl;

	cout << p2 << " " << &p2 <<  " " << *(*(pd + 0) + 0) << endl;

	/*cout << "**pp2: " << **pp2 << "   *pp2: " << *pp2 << "   pp2: " << pp2 << "   &pp2: " << &pp2 << endl;
	cout << "*p2[0]: " << *p2[0] << "   p2[0]: " << p2[0] << "   &p2[0]: " << &p2[0] << endl;
	cout << **pd << " " << *pd << " " << pd << " "<< &pd << endl;*/

	cin.get();

	return 0;
}

int *f1(int *ptr)
{
	return (ptr + 0);
}

int *f2(int *ptr)
{
	return (ptr + 1);
}

int *f3(int *ptr)
{
	return (ptr + 2);
}