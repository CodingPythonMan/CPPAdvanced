/*#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
	int x[5] = { 1,2,3,4,5 };
	std::list<int> s = { 0,0,0,0,0 };

	// 5,4,3,2,1,0,0,0,0,0
	// 0,1,2,3,4,5,0,0,0,0

	//back_insert_iterator<list<int>> p(s);
	//front_insert_iterator<list<int>> p(s);
	//insert_iterator<list<int>> p(s, s.begin());

	//std::copy(x, x + 5, back_inserter(s));
	//std::copy(x, x + 5, front_inserter(s));
	std::copy(x, x + 5, inserter(s, ++s.begin()));

	for (auto& n : s)
		std::cout << n << std::endl;
}*/