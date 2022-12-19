/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include "ecourse_st1.h"

//void foo(int a)
//{
	//std::cout << a << std::endl;
	//a = a * 2;
//}

struct Show
{
	std::string sep;
	std::ostream& os;

	Show(std::ostream& o = std::cout, std::string s = "\n")
		:os(o), sep(s) {}
	
	void operator()(int a) const
	{
		os << a << sep;
	}
};

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	//for_each(begin(v), end(v), foo);

	Show s(std::cout, "\t");
	for_each(begin(v), end(v), s);

	show(v);
}*/