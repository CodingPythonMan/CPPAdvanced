/*#include <iostream>
#include <vector>
#include <algorithm>

class Point
{
public:
	int x, y;
	// 디폴트 생성자가 없다.
	Point(int a, int b) : x(a), y(b) {}

	// < 와 == 를 제공한다.
	bool operator<(const Point& p) const{return x < p.x;}
	bool operator==(const Point& p) const{return x == p.x;}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	p1 == p2;
	p1 < p2;

	//p1 > p2;
	//p1 != p2;
}*/