/*#include <iostream>
#include <set>

int main()
{
	//std::set<int> s;
	std::multiset<int> s;

	s.insert(30);
	s.insert(40);
	s.insert(20);
	s.insert(10);
	s.insert(45);
	s.insert(25);

	// set : pair
	// multiset : iterator
	auto ret = s.insert(20);
	//std::pair<std::set<int>::iterator, bool> ret = s.insert(20);

	//if (ret.second == false)
		//std::cout << "fail" << std::endl;

	for (auto n : s)
	{
		std::cout << n << std::endl;
	}
}*/