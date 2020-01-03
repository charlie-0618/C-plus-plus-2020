#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

char * left(const char *sample, int n = 1);

int main()
{
	char str[50];

	(cin.get(str, 50)).get();

	char *ps = left(str, 4);

	cout << ps << endl;

	delete [] ps;

	ps = left(str);

	cout << ps << endl;

	delete[] ps;

	cin.get();

	return 0;
}

char * left(const char *sample, int n)
{
	char *p = new char[n + 1];

	int i;

	for (i = 0; i < n && sample[i]; i++)
	{
		//p[i] = sample[i];
		*(p + i) = *(sample + i);
	}
	
	//p[n + 1] = '\0';

	*(p + i) = '\0';

	return p;
}