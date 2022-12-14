/*#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

int main()
{
	//std::list<int> s = { 1,2,3,4,5 };

	std::vector<int> s = { 1,2,3,4,5 };

	std::reverse(s.begin(), s.end());

	// 
	//for (int i = 0; i < s.size(); i++)
		//std::cout << s[i] << std::endl;

	//std::vector<int>::iterator p = s.begin();

	//while (p != s.end())
	//{
	//	std::cout << *p << std::endl;
	//	++p;
	//}

	for (auto& n : s)
		std::cout << n << std::endl;
}*/