#include <iostream>

using namespace std;

enum egg { small, large, xlarge };   //�@��C�|

enum class cloth { small, large, xlarge };

enum class t_shirt { small, large, xlarge };  //�då�C�|�A�i�H�קK���Ʃw�q�A���n����ƧκA�ഫint()

int main(void)
{

	egg gg = small;

	t_shirt gg1 = t_shirt::small;

	cloth gg2 = cloth::small;   //�P t_shirt �s���ۦP�W�� small �����Ĭ�

	int test = gg;

	//error:  int test1 = gg1;
	int test1 = int(gg1);   //��ƧκA�ഫ�~��s��

	cin.get();
	return 0;
}