/*#include <iostream>
#include <vector>
#include <algorithm>

bool foo(int a) { return a % 3 == 0; }

int main()
{
	std::vector<int> v = { 6,9,3,1,2 };

	// find �� ���� generic �Ѱ�?
	// �־��� �������� ù��° ������ 3�� ����� ã�� �ʹ�.

	//auto p = find_if(begin(v), end(v), foo);
	auto p = find_if(begin(v), end(v), [](int a) {return a % 3 == 0; });

	std::cout << *p << std::endl;
}*/