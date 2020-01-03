#include <iostream>
#include <stdio.h> 
#include <windows.h>

using namespace std;

int main(void)
{


	

		char * l_EnvStr;
	l_EnvStr = GetEnvironmentStrings¡]¡^;

	LPTSTR l_str = l_EnvStr;

	int count = 0;
	while¡]true¡^
	{
		if¡]* l_str == 0¡^break;
	while¡]* l_str¡I = 0¡^l_str++;
	l_str++;
	­p¼Æ++;
	}

	for¡]int i = 0; i <count; i ++¡^
	{
		printf¡]¡§¢Hsn¡¨¡Al_EnvStr¡^;
	while¡]* l_EnvStr¡I = ¡§¡^
		l_EnvStr++;
	l_EnvStr++;
	}

	FreeEnvironmentStrings¡]l_EnvStr¡^;
	
	

	system("pause");

	return 0;
}