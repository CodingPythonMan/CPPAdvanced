/*#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::list<int> s = { 1,2,3,4,5 };
	//std::vector<int> s = { 1,2,3,4,5 };

	//int s[5] = { 1,2,3,4,5 };

	//std::list<int>::iterator p = s.begin();

	//auto p1 = s.begin(); // error
	auto p1 = std::begin(s); // STL container ¿Í ¹è¿­

	int n = std::size(s);	// s.size();
	std::cout << n << std::endl;

	auto p2 = std::end(s);
	*p2 = 10; // runtime error
}*/