/*#include <iostream>
#include <set>
#include <unordered_set>

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

// Point �� �ؽ� �Լ� ��ü
struct PointHash
{
	size_t operator()(const Point& p) const
	{
		std::hash<int> hi;
		return hi(p.x) + hi(p.y);
	}
};

struct PointEqual
{
	bool operator()(const Point& p1, const Point& p2) const
	{
		return p1.x == p2.x && p1.y == p2.y;
	}
};

int main()
{
	std::unordered_set<Point, PointHash, PointEqual> s; // hash<int>, hash<Point>

	s.insert(Point(1, 1));	// hash �Լ��� ����
	s.insert(Point(2, 2));	// == �� �ʿ��ϴ�.
	s.insert(Point(3, 4));	// 

	s.find(Point(1, 1));
}*/