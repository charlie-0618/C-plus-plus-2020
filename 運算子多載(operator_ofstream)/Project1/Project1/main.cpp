#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
#include "vect.h"

void display(MY_VECTOR::Vector &st);

int main()
{
	{
		using std::cout;
		using std::endl;
		using std::cin;

		MY_VECTOR::Vector write_in;

		MY_VECTOR::Vector gg = 19.6;   //***�|�۰ʰt���@�Ӥ޼ƫغc�禡***

		int gg = 20;

		display(gg);

		std::ofstream fout;

		fout.open(write_in.txt);

		write_in << fout;

		fout.close();

		//-----------------------------------------

		std::ofstream fout1;

		MY_VECTOR::Vector write_in1;

		std::string str = "xtxt.txt";
		std::string txt = ".txt";
		//char *ch = new char[9];    //��ʰt�m�O����A�����ɰO�odelete[] ch �R��
		//std::string ch;
		//char ch[9];

		cout << "��J�A�����W: ";

		while(true)
		{
			char *ch = new char[50];

			while (!(cin >> ch))
			{
				cin.clear();

				char m = cin.get();

				cout << m << "+" << endl;

				if(m == '\n')
				{ 
					break;
				}
			}

			if (ch != str)
			{
				delete[] ch;
				cout << "�S���ŦX��.txt" << endl << endl;
				cout << "���s��J�ɮצW: ";
			}
			else
			{ 
				cout << ch;

				fout1.open(ch);

				fout1 << write_in1 << "+++";

				fout1.close();

				delete[] ch;

				break;
			}
			
		}

		
	}

	system("pause");
	//std::cin.get();
	return 0;
}

void display(MY_VECTOR::Vector &st)   //�|�۰ʴM��Vector���O�̪��غc���
{
	std::cout << st.n << std::endl;
}