/*#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string, std::string> m;

	// 1. pair ���� insert
	std::pair<std::string, std::string> p1("������", "mon");
	m.insert(p1);

	// 2. make_pair
	m.insert(std::make_pair("ȭ����", "tue"));

	// 3. [] ����
	m["������"] = "wed";

	std::cout << m["������"] << std::endl; // "mon"
	std::cout << m["�����"] << std::endl; // make_pair("�����", ""); �׸� �߰�

	auto ret = m.find("�Ͽ���");
	if (ret == m.end())
		std::cout << "fail" << std::endl;
}*/