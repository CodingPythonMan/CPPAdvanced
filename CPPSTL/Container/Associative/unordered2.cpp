/*#include <iostream>
#include <string>
#include <functional>
#include <unordered_set>

int main()
{
	std::unordered_set<int> s;

	s.insert(30);
	s.insert(40);	// set : < ���, unordered : hash �Լ�
	s.insert(20);
	s.insert(10);
	s.insert(45);
	s.insert(25);
	
	s.find(20);		// set : ��Ʈ ���� < ���, unordered : hash �Լ�

	// set : ��������, unordered : 
	for (auto n : s)
		std::cout << n << std::endl;
}*/