#include "charlieclub.h"
#include <iostream>

using std::string;

Charlie_Club::Charlie_Club(const string & fn, const string & lt, bool club_m) : firstname(fn), lastname(lt), club_member(club_m) //成員初始化列表語法
{
	//等同於成員初始化列表語法
	/*firstname = fn;
	lastname = lt;
	club_member = club_m;*/
}

Charlie_Club::Charlie_Club(const Charlie_Club & cc)
{
	std::cout << "hi" << std::endl;
	firstname = cc.firstname;
	lastname = cc.lastname + " *Love*";
	club_member = cc.club_member;
}

//錯誤示範，衍生類別未定義
/*Charlie_Club::Charlie_Club(const Charlie_Club_Gold & cc)
{
	std::cout << "fuck" << std::endl;
}*/

void Charlie_Club::Name()
{
	std::cout << firstname << " " << lastname << std::endl;
}

bool Charlie_Club::Club_Memeber(bool m)
{
	return club_member;
}

Charlie_Club_Gold::Charlie_Club_Gold(int gs, const string & fnn, const string & ltt, bool club_mm) : Charlie_Club(fnn, ltt, club_mm) //, gold_star(gs)
{
	gold_star = gs;   //等同於初始化列表
}
Charlie_Club_Gold::Charlie_Club_Gold(int gs, const Charlie_Club & tp) : Charlie_Club(tp), gold_star(gs)
{
	
	this->Name();
}