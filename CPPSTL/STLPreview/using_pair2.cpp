/*#include <iostream>
#include <utility>

// pair 를 인자로 전달받는 함수
template<typename T> void foo(T p)
{
	std::cout << p.first << ", " << p.second << std::endl;
}

// 함수 템플릿
template<typename T1, typename T2>
std::pair<T1, T2> make_pair(const T1& a, const T2& b)
{
	return std::pair<T1, T2>(a, b);
}

int main()
{
	std::pair<int, double> p1(1, 3.4);

	foo(p1);

	foo(std::pair<int, int>(1, 1));
	
	foo(make_pair(1, 1));

	foo(std::pair(1, 1));
};*/