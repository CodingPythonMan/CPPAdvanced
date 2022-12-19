/*#include <iostream>
#include <list>
#include <algorithm>

template<typename ITER> class Reverse_iterator
{
	ITER iter; // list의 일반 반복자.
public:
	Reverse_iterator(ITER i) { iter = i; --iter; }
	
	Reverse_iterator& operator++()
	{
		--iter;
		return *this;
	}

	typename ITER::value_type operator*()
	{
		return *iter;
	}
};

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p1 = std::end(s);

	Reverse_iterator<std::list<int>::iterator> p2(p1);

	++p2;
	++p2;

	std::cout << *p2 << std::endl;
}*/