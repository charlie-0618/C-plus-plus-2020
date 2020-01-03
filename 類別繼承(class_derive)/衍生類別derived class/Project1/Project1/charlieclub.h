#pragma once
#ifndef CHARLIE_CLUB_H_
#define CHARLIE_CLUB_H_
#include <string>

using std::string;

class Charlie_Club {
private:
	string firstname;
	string lastname;
	bool club_member;
public:
	Charlie_Club(const string & fn = "none", const string & lt = "none", bool club_m = false);
	Charlie_Club(const Charlie_Club & cc);
	//Charlie_Club(const Charlie_Club_Gold & cc);  //不存在，因為義衍生類別未定義
	void Name();
	bool Club_Memeber(bool m);
};

//繼承
class Charlie_Club_Gold : public Charlie_Club {
private:
	int gold_star;
public:
	Charlie_Club_Gold(int gs = 0, const string & fnn = "none", const string & ltt = "none", bool club_mm = false);
	Charlie_Club_Gold(int gs, const Charlie_Club & tp);
};

#endif // !CHARLIE_CLUB_H_
