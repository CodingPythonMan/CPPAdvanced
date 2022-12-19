/*#include <iostream>
#include <vector>
#include <algorithm>
#include "ecourse_st1.h"

int foo(int a) { return a + 10; }

int main()
{
	std::list<int> s1 = { 1,2,3,4,5 };
	std::list<int> s2 = { 0,0,0,0,0 };

	//std::transform(begin(s1), end(s1), begin(s2), foo);
	std::transform(begin(s1), end(s1), back_inserter(s2), foo);

	show(s2);
}*/