/*#include <iostream>

struct Resource1
{
	Resource1() { std::cout << "Resource1()" << std::endl; }
	~Resource1() { std::cout << "~Resource1()" << std::endl; }
};

struct Resource2
{
	Resource2() { std::cout << "Resource2()" << std::endl; }
	~Resource2() { std::cout << "~Resource2()" << std::endl; }
};


//struct Test
//{
//	Resource1 res1;
//	static Resource2 res2;
//};
//Resource2 Test::res2; // 1. 持失切


template<typename T> struct Test
{
	Resource1 res1;
	static Resource2 res2;
};
template<typename T> Resource2 Test<T>::res2; // 1. 持失切

int main()
{
	std::cout << "main" << std::endl; // 2.

	Test<int> t; // 3. Resource1 持失切
	t.res2;
}*/