/*#include <iostream>
#include <memory>
#include <vector>
#include "Point.h"

int main()
{
	//Point* p = new Point[2];

	std::allocator<Point> a;

	Point* p = a.allocate(2); // operator new()

	//a.construct(p); // 
	//a.construct(p+1, 1, 2); // 

	//a.destroy(p); // 소멸자 호출
	//a.destroy(p + 1);

	a.deallocate(p, 2);

	//------------------------
	std::vector<Point> v; // vector<Point, allocator<Point>>

	if (v.get_allocator() == a)
	{
		std::cout << "same" << std::endl;
	}
}*/