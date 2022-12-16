/*#include <iostream>
#include <vector>
#include <list>
#include <iterator>

template<typename T> 
void eadvance(T& p, int n)
{
	//p = p + 5;
	while (n--)
	{
		++p;
	}
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::begin(s);

	// 반복자를 p를 5칸 전진하고 싶다.
	// p = p + 5;
	eadvance(p, 5);

	std::cout << *p << std::endl;
}*/