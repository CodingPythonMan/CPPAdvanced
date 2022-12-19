/*#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto ret = std::find(rbegin(s), rend(s), 3);

	auto p1 = std::begin(s);
	auto p2 = std::end(s);

	std::reverse_iterator<std::list<int>::iterator > r1(p2);
	
	auto r2 = std::make_reverse_iterator(p2);
	
	// reverse_iterator<list<int>::iterator>
	auto r3 = s.rbegin();
	auto r4 = std::rbegin(s);

	std::cout << *r1 << std::endl;
	std::cout << *r2 << std::endl;
	std::cout << *r3 << std::endl;
	std::cout << *r4 << std::endl;
}*/