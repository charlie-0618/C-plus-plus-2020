#include <iostream>

using namespace std;


int main(void)
{
	int i[] = {1,2,3,4,5,6};
	
	int *ptr = i;
	
	int d = 5;
	
	int *ptr1 = &d;
	
	cout << *ptr1 << endl;
	
	//ptr1 = 9;
	
	cout << ptr1 << endl;
	
	/* 
	*ptr = 11;
	
	ptr[1] = 130;  //使用阵列索引 
	
	*(ptr + 3) = 14;  //使用地址方式 
	*/
	
	for(int j = 0; j<6; j++)
	{
		i[j] += i[j + 1];  
		
		cout << i[j] << endl;
	}
	
	cout << "-------------------" << endl;
	
	for(int j = 0; j<6; j++)
	{
		*ptr++ *= 3;
		
		cout << i[j] << endl;
	}
	
	for(int j = 0; j<6; j++)
	{
		
		cout << i[j] << endl;
	}
	
	return 0;
}
