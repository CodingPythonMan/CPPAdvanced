/*#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "ecourse_st1.h"

int foo(int a, int b) { return a + b; }

int main()
{
	std::list<int> s1 = { 1,2,3,4,5 };
	std::list<int> s2 = { 1,2,3,4,5 };
	std::list<int> s3 = { 0,0,0,0,0 };

	//std::transform(begin(s1), end(s1), begin(s2), foo);
	//std::transform(begin(s1), end(s1), begin(s2), begin(s3), foo);
	//std::transform(begin(s1), end(s1), begin(s2), begin(s3),std::multiplies<int>());
	std::transform(begin(s1), end(s1), begin(s2), begin(s3), [](int a, int b) {return a + b; });

	show(s3);
}*/