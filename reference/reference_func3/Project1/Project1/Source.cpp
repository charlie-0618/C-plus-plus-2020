#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream &os, const double *num);

int main()
{
	ofstream fout;

	const char *fn = "test.txt";

	cout << fn << " " << &fn[0] << endl;

	fout.open(fn);

	//-----------------------------------------------------------------
	double g = 120.3376;

	cout.setf(ios_base::scientific);  //�]�wconsole��X�y����ǰO���榡

	cout << g << endl;

	cout.unsetf(ios_base::scientific);  //�����]�wconsole��X�y����ǰO���榡

	cout << g << endl;
	//-----------------------------------------------------------------

	if (!fout.is_open())
	{
		cout << "�ɮ׶}�ҥ���!" << endl;
	}

	double num[2];

	for (int i = 0; i < 2; i++)
	{
		(cin >> num[i]).get();
	}

	file_it(fout, num);  //�g�J���ɮ׸�
	file_it(cout, num);  //��ܦbconsole�W

	//fout.setf(ios_base::fixed);   //�b�@��D�{���̳]�w ofstream ����g�J�榡

	system("pause");

	return 0;
}


void file_it(ostream &os, const double *num)   //�N ofstream ����ǤJ�禡���Ϊk
{
	ios_base::fmtflags initial;  //�ΨӰO���]�w�榡, ���ܼ� initial �x�s

	initial = os.setf(ios_base::fixed);   //ios_base::fixed ���`�覡���(�D��ǰO��)

	os.setf(ios_base::showpoint);  //ios_base::showpoint ��ܤp���I

	for (int i = 0; i < 2; i++)
	{
		os.width(10);   //����fout.width(10) , ��ܧA�n���e��(�]�t�Ʀr)
		os.precision(3);  //����fout.precision(2) , ��ܤp���I�k����ܴX��

		os << *(num + i);

		os.width(10);
		os << "hi" << endl;  //�g�J�ɮפ@�w�n�H \n �����A�@�������r���A��J���~�|��ܥX��
	}

	os.setf(initial);
}