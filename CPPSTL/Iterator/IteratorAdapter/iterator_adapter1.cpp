/*#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p1 = std::begin(s);
	auto p2 = std::end(s);

	// p3 와 p2 는 다른 객체
	std::reverse_iterator<std::list<int>::iterator > p3(p2);
	
	std::reverse_iterator<std::list<int>::iterator > p4(p1);

	auto ret1 = std::find(p1, p2, 3);
	auto ret2 = std::find(p3, p4, 3);
	//++p3;

	std::cout << *p3 << std::endl; // 10
	++p3;
	std::cout << *p3 << std::endl; // 9
	++p3;
	std::cout << *p3 << std::endl; // 8
	--p2;
	std::cout << *p2 << std::endl; // 10
}*/