/*#include <iostream>
#include <vector>
#include "ecourse_st1.h"

int main()
{
	// vector ����
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 3);
	std::vector<int> v4(v3);

	std::vector<int> v5 = { 1,2,3,4 };
	std::vector<int> v6{ 1,2,3,4 };

	std::vector<int> v7(10, 0); // 10 ���� 0���� �ʱ�ȭ
	std::vector<int> v8{ 10, 0 }; // 2 ���� 10, 0���� �ʱ�ȭ

	// --------------------------------
	// v.push_front(10); // error
	v1.push_back(10);
	v1.push_back(20);
	//v.insert(��ġ, 30);

	v1.insert(begin(v1) + 1, 30); // 10 30 20

	// ��� ������
	int n = v1.front();
	int n1 = v1[0];

	int x[5] = { 1,2,3,4,5 };
	v1.assign(x, x + 5);

	show(v1);
}*/