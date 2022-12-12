/*#include <iostream>
using namespace std;

template<typename T> class Point
{
	T x, y;
public:
	Point(T a = 0, T b = 0) : x(a), y(b) {}

	friend ostream& operator<<(ostream& os, const Point<T>& p);
};

template<typename T>
ostream& operator<<(ostream& os, const Point<T>& p)
{
	return os << p.x << ", " << p.y;
}

int main()
{
	Point<int> p(1, 2);

	cout << p << endl;
}*/