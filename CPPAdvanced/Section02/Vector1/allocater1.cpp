/*#include <iostream>
#include "Point.h"

int main()
{
	Point* p1 = new Point(1, 2);

	delete p1;

	std::allocator<Point> ax;
	//MyAlloc<Point> ax;

	Point* p2 = ax.allocate(1);

	ax.deallocate(p2, 1);
}*/