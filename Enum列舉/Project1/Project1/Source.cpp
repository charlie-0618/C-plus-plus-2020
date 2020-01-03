#include <iostream>

using namespace std;

enum egg { small, large, xlarge };   //一般列舉

enum class cloth { small, large, xlarge };

enum class t_shirt { small, large, xlarge };  //範疇列舉，可以避免重複定義，但要做整數形態轉換int()

int main(void)
{

	egg gg = small;

	t_shirt gg1 = t_shirt::small;

	cloth gg2 = cloth::small;   //與 t_shirt 存取相同名稱 small 互不衝突

	int test = gg;

	//error:  int test1 = gg1;
	int test1 = int(gg1);   //整數形態轉換才能存取

	cin.get();
	return 0;
}