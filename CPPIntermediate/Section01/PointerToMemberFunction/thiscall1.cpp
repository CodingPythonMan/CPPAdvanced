/*class Point
{
	int x{ 0 };
	int y{ 0 };
public:
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	static void foo(int a)
	{
		//x = a;	// this->x = a �� �Ǿ���ϴµ�
				// this �� ����.
				// error
	}
};

int main()
{
	Point pt1;
	Point pt2;

	pt1.set(10, 20);
	pt2.set(10, 20);

	Point::foo(10);
	pt1.foo(10);
}*/