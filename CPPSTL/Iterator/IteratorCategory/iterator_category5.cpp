/*#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 1, 2 ������ �ּ� �䱸 ����? - �Է� �ݺ���
	auto p = std::find(begin(v), end(v), 5);

	std::reverse(begin(v), end(v)); // �����.

	std::sort(begin(v), end(v)); // quick sort

	std::forward_list<int> s = { 1,2,3 };
	//std::reverse(begin(s), end(s)); // error

	std::list<int> s2 = { 1,2,3 };
	//std::sort(begin(s2), end(s2));

	s2.sort();

	std::vector<int> v = { 1,2,3 };
	// v.sort(); // ��� �Լ� sort() �� ������?
	// ����. �Ϲ��Լ� (�˰���)
	// sort() �� ����ϸ� �ȴ�.

	for (auto& n : v)
	{
		std::cout << n << ", ";
	}
}*/