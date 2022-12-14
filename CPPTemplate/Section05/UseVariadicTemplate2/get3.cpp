/*#include <iostream>
using namespace std;

template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;
};

template<typename T, typename ... Types>
struct xtuple<T, Types...> : public xtuple<Types...>
{
	T value;

	xtuple() = default;

	xtuple(const T& v, const Types ... args)
		: value(v), xtuple<Types...>(args...) {}

	static constexpr int N = xtuple<Types...>::N + 1;
};

template<size_t N, typename TP> struct xtuple_element
{
	typedef TP type;
};
// ����� Ÿ���� ���� �� �ֵ��� �κ� Ư��ȭ�� �����Ѵ�.
template<typename T, typename ... Types> 
struct xtuple_element<0, xtuple<T, Types ...>>
{
	typedef T type;
};

int main()
{
	xtuple_element<0, xtuple<int, double, char>>::type n;

	cout << typeid(n).name() << endl;
}*/