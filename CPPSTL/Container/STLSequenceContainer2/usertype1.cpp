/*#include <iostream>
#include <vector>
#include <algorithm>

class Point
{
public:
	int x, y;
	// ����Ʈ �����ڰ� ����.
	Point(int a, int b) : x(a), y(b) {}

	// < �� == �� �����Ѵ�.
	bool operator<(const Point& p) const
	{
		return x < p.x;
	}

	bool operator==(const Point& p) const
	{
		return x == p.x;
	}
};

int main()
{
	std::vector<Point> v1;
	std::vector<Point> v2(10, Point(0,0));
	v2.resize(20, Point(0,0));

	sort(begin(v2), end(v2)); // ũ�� ��?

	//sort(begin(v2), end(v2)); // ũ�� ��?
	//sort(begin(v2), end(v2),
		//[](const Point& p1, const Point& p2) {return p1.x > p2.y; });

}*/