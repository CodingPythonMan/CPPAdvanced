/*#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string, std::string> m;

	// 1. pair 만들어서 insert
	std::pair<std::string, std::string> p1("월요일", "mon");
	m.insert(p1);

	// 2. make_pair
	m.insert(std::make_pair("화요일", "tue"));

	// 3. [] 연산
	m["수요일"] = "wed";

	std::cout << m["월요일"] << std::endl; // "mon"
	std::cout << m["토요일"] << std::endl; // make_pair("토요일", ""); 항목 추가

	auto ret = m.find("일요일");
	if (ret == m.end())
		std::cout << "fail" << std::endl;
}*/