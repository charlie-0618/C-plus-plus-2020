#include <iostream>

using namespace std;

int main(void)
{

int gg = 3;

int *const ptr = &gg;  //����ָ�룬ָ��Ϊ�������Ե�ַ���ɸ��ģ������Ը�����ָ�������ֵ��ͬ��Ҳ����ֱ��͸�������޸�ֵ�� 

//const int *ptr = &gg;  //ָ���� �� ָ�룬����͸�� *ptr ȥ�Ա�����ֵȥ���޸ģ���Ϊ��ָ�꿴������Ϊ�������ɸ��ģ�����ֻ��͸����������ȥ���޸� 

//*ptr = 9;

gg = 4;

cout << gg << " " << *ptr << endl;

cout << &gg << " " << ptr << " " << &ptr <<endl;

return 0;

}
