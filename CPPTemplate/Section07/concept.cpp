/*struct Point
{
	int x, y;
	bool operator<(const Point*& p) { return true; }
};

// 1. concept ¸¸µé±â
template<typename T>
concept bool LessThanComparable = requires(T a, T b)
{
	{ a < b } -> bool;
};

template<typename T> requires LessThanComparable<T>
T Min(T x, T y)
{
	return y < x ? y : x;
}

int main()
{
	Point p1, p2;
	Min(p1, p2);
}*/