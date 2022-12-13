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

template<size_t N, typename TP> struct xtuple_element;

// 요소의 타입을 구할 수 있도록 부분 특수화를 제공한다.
template<typename T, typename ... Types>
struct xtuple_element<0, xtuple<T, Types ...>>
{
	typedef T type;										// 0번째 요소의 타입
	typedef xtuple<T, Types...> tupleType;				// 0번째 요소를 저장하는 타입
};

template<size_t N, typename T, typename ... Types>
struct xtuple_element<N, xtuple<T, Types ...>>
{
	typedef typename xtuple_element<N-1, xtuple<Types...>>::type type;
	typedef typename xtuple_element<N-1, xtuple<Types...>>::tupleType tupleType;
};

template<size_t N, typename TP>
typename xtuple_element<N, TP>::type& xget(TP& tp)
{
	return static_cast<typename xtuple_element<N, TP>::tupleType&>(tp).value;
}

int main()
{
	xtuple<int, double, char> t3(1, 3.4, 'A');				// 0번째 요소의 타입			: int
															// 0번째 요소를 저장하는 타입	: xtuple<int, double, char>

	//xtuple_element<2, xtuple<int, double, char>>::type n;	// char
	//xtuple_element<2, xtuple<int, double, char>>::tupleType t;	// tuple<char>

	xget<1>(t3) = 1.1;

	cout << xget<1>(t3) << endl;	// 1.1
}*/