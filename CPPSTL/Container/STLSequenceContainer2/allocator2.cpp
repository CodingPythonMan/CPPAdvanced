/*#include <iostream>
#include <memory>
#include <vector>
#include "Point.h"
#include "MyAlloc2.h"

int main()
{
	std::vector<Point, MyAlloc<Point>> v;
	v.emplace_back(0,0);

	//std::allocator<Point> a;
	MyAlloc<Point> a;

	Point* p = a.allocate(1);
	//a.constructor		// ������ ȣ��
	//a.destroy			// �Ҹ��� ȣ��
	
	std::allocator_traits<decltype(a)>::construct(a, p, 1, 2);
	std::allocator_traits<decltype(a)>::destroy(a, p);

	a.deallocate(p, 1);	// �޸� ����
}*/