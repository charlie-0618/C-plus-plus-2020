// strquote.cpp  -- different designs
#include <iostream>
#include <string>

using namespace std;

string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);  // has side effect
//const string & version3(string & s1, const string & s2);  // bad design

int main()
{
	string input;
	string copy;
	string result;

	cout << "Enter a string: ";
	getline(cin, input);
	copy = input;
	cout << "輸入字串: " << input << endl << endl;
	result = version1(input, "***");
	cout << "你輸入的字串: " << result << endl;
	cout << "原始輸入字串: " << input << endl << endl;

	result = version2(input, "###");
	cout << "你輸入的字串: " << result << endl;
	cout << "原始輸入字串: " << input << endl;

	/*cout << "Resetting original string.\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;
	*/
	cin.get();
	// cin.get();
	return 0;
}

string version1(const string & s1, const string & s2)
{
	string temp;

	temp = s2 + s1 + s2;
	return temp;
}

const string & version2(string & s1, const string & s2)   // has side effect
{
	s1 = s2 + s1 + s2;
	// safe to return reference passed to function
	return s1;
}

/*
const string & version3(string & s1, const string & s2)   //會發生錯誤，因為離開函數裡面的變數生命週期就消失
{
	string temp;

	temp = s2 + s1 + s2;
	
	return temp;  //回傳 const reference 但是temp生命週期結束，儲存變數的地址也消失。
}
*/
