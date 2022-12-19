/*#include <iostream>
#include <iterator>

int* foo()
{
	static int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	return x;
}

int main()
{
	//++foo();
	auto p2 = std::next(foo());

	std::cout << *p2 << std::endl;
}*/