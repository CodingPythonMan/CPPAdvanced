/*#include <iostream>
#include <vector>
#include <algorithm>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) { std::cout << "Point()" << std::endl; }

	~Point(){ std::cout << "~Point()" << std::endl; }
	
	Point(const Point&){ std::cout << "Point(const Point&)" << std::endl; }
};

int main()
{
	std::vector<Point> v;
	
	// 1.
	//Point p1(10, 20);
	//v.push_back(p1);

	// 2. �ӽ� ��ü�� �ֱ�
	//v.push_back(Point(10, 20));

	// 3. ��ü ��ü�� vector �� ����� �Ѵ�.
	// ��ü�� �������� ����, ������ ���ڸ� �����Ѵ�.
	//v.emplace_back(10, 20); // emplace_front()
							// insert => emplace

	Point p1(10, 20); // ��ü ����
	// p1 ���...

	//v.push_back(p1);
	v.push_back(std::move(p1));
	// p1�� ���� �ʿ� ����.

	std::cout << "-----------" << std::endl;
}*/