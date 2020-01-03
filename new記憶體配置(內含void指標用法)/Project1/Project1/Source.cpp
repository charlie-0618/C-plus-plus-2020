#include <iostream>
#include <new>

using namespace std;

struct test
{
	void *gg;
};

const int num = 512;   //����static const int, �u��b��cpp�ɮפ���
const int n = 5;   //����static const int, �u��b��cpp�ɮפ���

char buffer[num];   //�����ܼ�

int main(void)
{
	//+++++++++++++++�ɥR+++++++++++++++
	int a = 10;
	test t1;
	t1.gg = &a;

	cout << *((int *)t1.gg) << " " << (int *)t1.gg << " " << &a << endl << endl;
	//+++++++++++++++�ɥR+++++++++++++++

	cout << (void *)buffer << " " << &buffer <<endl;   // 9��/2��

	double *p1, *p2;

	p1 = new double[n];   //�t�m�X4*5�줸�ժ��O�����m

	p2 = new (buffer) double[n];   //�N4*5�j�p���줸�զs�Jbuffer���O�����m (placement new�w�}��m)

	cout << p1 << " " << p2 << " " << (void *)buffer << endl;   //(void *)buffer == (double *)buffer
												   //�N�^�Ǧ�m��ܦ����N�κA���w
												   //**�٥��t�m�O�����, ��(void *)�i�H�^�ǰO�����}**
	for (int i = 0; i < n; i++)
	{
		p1[i] = 1000.1 + i;
		p2[i] = 2020.2 + i;
	}

	for (int i = 0; i < n; i++)
	{
		cout << p1[i] << " at: " << &p1[i] << " | ";
		cout << p2[i] << " at: " << &p2[i] << endl;
	}

	cout << "*((double *)buffer + 2) : " << *((double *)buffer + 2) << endl << endl;   //�i�D�q���κA��double����, �åB�a�}����2, �A��ܨ��

	//--------------------------------------------------------
	//                        #�d��2#
	//--------------------------------------------------------
	double *p3, *p4;

	p3 = new double[n];   //�t�m�@�ӷs���O�����m��p3

	p4 = new (buffer) double[n];   //overwrite�|�мg���쥻�O���骺������

	cout << p3 << " " << (void *)buffer << endl;   //(void *)buffer == (double *)buffer
												   //�N�^�Ǧ�m��ܦ����N�κA���w
	for (int i = 0; i < n; i++)
	{
		p3[i] = 1000.1 + i;
		p4[i] = 2020.2 + i;
	}

	for (int i = 0; i < n; i++)
	{
		cout << p3[i] << " at: " << &p3[i] << " | ";
		cout << p4[i] << " at: " << &p4[i] << endl;
	}

	cout << endl << endl;

	//--------------------------------------------------------
	//                        #�d��3#
	//--------------------------------------------------------
	delete[] p1;  //�R���ª��O�����}

	p1 = new double[n];   //���s�t�@�Ӧ�}

	p2 = new (buffer + 40) double[n];   //���m�w�}��}, �t�@�� buffer + 40 ����m�� p2

	cout << p1 << " " << (void *)buffer << endl;

	for (int i = 0; i < n; i++)
	{
		*(p1 + i) = 400.40 + i;
		*(p2 + i) = 600.60 + i;
	}

	for (int i = 0; i < n; i++)
	{
		cout << *(p1 + i) << " at: " << p1 + i << " | ";
		cout << *(p2 + i) << " at: " << p2 + i << endl;
	}

	delete[] p1;
	delete[] p3;
	//delete[] p2;  �����ϥ�(buffer)���w�O����@����

	cin.get();

	return 0;
}