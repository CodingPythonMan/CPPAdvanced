/*#include <iostream>
using namespace std;

template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;
};

// 부분 특수화
template<typename T, typename ... Types>
struct xtuple<T, Types...> : public xtuple<Types...>
{
	T value;

	xtuple() = default;

	xtuple(const T& v, const Types ... args) 
		: value(v), xtuple<Types...>(args...) {}

	static constexpr int N = xtuple<Types...>::N + 1;
};

int main()
{
	xtuple<int, double, char> t3(1, 3.4, 'A');
	xtuple<double, char> t2;
	xtuple<char> t1;
}*/