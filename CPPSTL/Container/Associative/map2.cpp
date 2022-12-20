/*#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<int, std::string> m;

	m[1] = "ONE";
	m[0] = "ZERO";
	m[2] = "TWO";

	auto p = begin(m); // p 는 pair 를 가리키는 포인터

	std::cout << p->first << std::endl;		// 0
	std::cout << p->second << std::endl;	// "ZERO"
	++p;
	std::cout << p->first << std::endl;		// 1
	std::cout << p->second << std::endl;	// "ONE"
}*/