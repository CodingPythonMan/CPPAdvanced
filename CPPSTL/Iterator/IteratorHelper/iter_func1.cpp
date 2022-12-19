/*#include <iostream>
#include <iterator>
#include <forward_list>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	std::forward_list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	auto p1 = std::next(begin(s));

	std::advance(p1, 3);

	std::cout << *p1 << std::endl;

	std::cout << std::distance(begin(s), p1) << std::endl;

	std::iter_swap(p1, begin(s));

	std::cout << *p1 << std::endl;
}*/