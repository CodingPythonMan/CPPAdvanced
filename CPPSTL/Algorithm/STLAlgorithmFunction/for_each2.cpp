/*#include <iostream>
#include <vector>
#include <algorithm>
#include "ecourse_st1.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. �Ϲ� �Լ� ����.
	//for_each(begin(v), end(v), foo);

	// 2. �Լ� ��ü ����
	//Show s(std::cout, "\t");
	//for_each(begin(v), end(v), s);

	// 3. ���� ǥ����
	for_each(begin(v), end(v), [](int a) {std::cout << a << std::endl; });
}*/