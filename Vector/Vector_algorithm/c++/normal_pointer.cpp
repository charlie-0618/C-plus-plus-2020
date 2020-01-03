#include <iostream>

using namespace std;

int main(void)
{

int gg = 3;

int *const ptr = &gg;  //常量指针，指针为常量所以地址不可更改，但可以更改其指向变数的值，同理也可以直接透过变数修改值。 

//const int *ptr = &gg;  //指向常量 的 指针，不能透过 *ptr 去对变数的值去做修改，因为再指标看来变数为常量不可更改，所以只能透过变数本身去做修改 

//*ptr = 9;

gg = 4;

cout << gg << " " << *ptr << endl;

cout << &gg << " " << ptr << " " << &ptr <<endl;

return 0;

}
