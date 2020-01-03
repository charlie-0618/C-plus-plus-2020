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
	cout << "��J�r��: " << input << endl << endl;
	result = version1(input, "***");
	cout << "�A��J���r��: " << result << endl;
	cout << "��l��J�r��: " << input << endl << endl;

	result = version2(input, "###");
	cout << "�A��J���r��: " << result << endl;
	cout << "��l��J�r��: " << input << endl;

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
const string & version3(string & s1, const string & s2)   //�|�o�Ϳ��~�A�]�����}��Ƹ̭����ܼƥͩR�g���N����
{
	string temp;

	temp = s2 + s1 + s2;
	
	return temp;  //�^�� const reference ���Otemp�ͩR�g�������A�x�s�ܼƪ��a�}�]�����C
}
*/
