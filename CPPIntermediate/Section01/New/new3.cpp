/*#include <iostream>
#include <new>
#include <memory>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x{ a }, y{ b } { };
	~Point() { };
};

int main()
{
	Point* p1 = new Point(0, 0);

	// Point 객체 3개를 힙에
	// 연속적으로 생성하고 싶다.
	//Point* p2 = new Point[3];
	//Point* p2 = new Point[3]{ {0,0},{0,0}, {0,0} };
	
	Point* p2 = static_cast<Point*>(operator new(sizeof(Point) * 3));

	for (int i = 0; i < 3; i++)
	{
		new(&p2[i]) Point(0, 0);
		//std::construct_at(&p2[i], 0, 0);
	}

	for (int i = 0; i < 3; i++)
	{
		p2[i].~Point();
		//std::destroy_at(&p2[i]);
	}

	operator delete(p2);
}*/