/*#include <iostream>
#include <set>
#include <functional>

int main()
{
	//std::set<int> s;

	std::set<int, std::greater<int>> s;

	//s.push_front(10); //error
	s.insert(30);
	s.insert(40);	// < �������� ��, >
	s.insert(20);
	s.insert(10);
	s.insert(45);
	s.insert(25);

	// ���� �˻�...
	//auto p2 = find(begin(s), end(s), 10);
	//std::cout << *p2 << std::endl;

	// ���� �˻�
	auto p2 = s.find(10);
	std::cout << *p2 << std::endl;

	auto p = begin(s); // ���� ������ �ڽ�

	//*p = 10; //error
	while (p != end(s))
	{
		std::cout << *p << std::endl;
		++p;
	}
}*/