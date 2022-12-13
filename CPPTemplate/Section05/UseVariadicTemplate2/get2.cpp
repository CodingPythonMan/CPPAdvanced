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

//template<size_t N, typename TP> // TP 는 튜플
//튜플TP의 N 번째 요소의 타입 xget(TP& tp)
//{
	//return static_cast<TP 의 N 번째 기반 클래스&>(tp).value;
//}

int main()
{
	xtuple<int, double, char> t3(1, 3.4, 'A');

	cout << t3.value << endl;	// 1
	cout << static_cast<xtuple<double, char>&>(t3).value << endl;	// 3.4 를 출력하고 싶으면...
	cout << static_cast<xtuple<char>&>(t3).value << endl;	// 'A' 를 출력하고 싶으면...

	//char c = xget<2>(t3);
}*/