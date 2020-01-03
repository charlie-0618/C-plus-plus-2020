#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
#include <string>

namespace MY_VECTOR
{
	class Vector
	{
	public:
		int n;
		std::string txt;
		std::string txt1;
	public:
		Vector();
		Vector(double test);   //加入 explicit 就不能使用 MY_VECTOR::Vector gg = 19.6;
		~Vector();
		//operator
		void operator<<(std::ostream & os);
		//friend
		friend std::ostream & operator<<(std::ostream & os, Vector & str);

	};
}

#endif // !VECTOR_H_

