#include <iostream>
#include "stringbad.h"

using namespace std;

void callme1(StringBad  gg);
void callme2(StringBad  gg);

int main()
{
	{
		/*StringBad sayings[3];
		for (int i = 0; i < 3; i++)
		{
			char temp[50];
			cin.get(temp, 50);

			while (cin && cin.get() != '\n')  //while (cin && cin.get() != '\n')
				continue;

			if (!cin || temp[0] == '\0')
				break;
			else
				sayings[i] = temp;
		}*/


		StringBad line1 = "i love u so much";
		StringBad line2 = "charlie is here";

		cout << "line1: " << line1 << endl;
		cout << "line2: " << line2 << endl << endl;

		callme1(line1);
		cout << "object line1: " << line1 << endl << endl;
		callme2(line2);
		cout << "object line2: " << line2 << endl << endl;

		StringBad test = line2;   //等於StringBad test(line2)
		cout << "test: " << test << endl;

		cout << "離開範疇" << endl << endl;;
	}

	cin.get();
	return 0;
}

void callme1(StringBad  gg)   //等於StringBad  gg = line1 , 呼叫複製建構子
{
	cout << "string passed by reference: " << gg << endl;
}//離開此範疇會呼叫解構子~

void callme2(StringBad  gg)
{
	cout << "string passed by value: " << gg << endl;
}//離開此範疇會呼叫解構子~