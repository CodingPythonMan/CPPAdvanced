/*#include <iostream>
using namespace std;

template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;
};

// 부분 특수화
template<typename T, typename ... Types> 
struct xtuple<T, Types...>
{
	T value;

	xtuple() = default;
	xtuple(const T& v) : value(v) {}

	static constexpr int N = 1;
};

int main()
{
	xtuple<> t0;
	xtuple<int> t1(3);
	xtuple<int, double, char> t3;
}*/