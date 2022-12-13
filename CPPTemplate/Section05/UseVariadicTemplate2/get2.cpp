/*#include <iostream>
using namespace std;

template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;
};

// �κ� Ư��ȭ
template<typename T, typename ... Types>
struct xtuple<T, Types...> : public xtuple<Types...>
{
	T value;

	xtuple() = default;

	xtuple(const T& v, const Types ... args)
		: value(v), xtuple<Types...>(args...) {}

	static constexpr int N = xtuple<Types...>::N + 1;
};

//template<size_t N, typename TP> // TP �� Ʃ��
//Ʃ��TP�� N ��° ����� Ÿ�� xget(TP& tp)
//{
	//return static_cast<TP �� N ��° ��� Ŭ����&>(tp).value;
//}

int main()
{
	xtuple<int, double, char> t3(1, 3.4, 'A');

	cout << t3.value << endl;	// 1
	cout << static_cast<xtuple<double, char>&>(t3).value << endl;	// 3.4 �� ����ϰ� ������...
	cout << static_cast<xtuple<char>&>(t3).value << endl;	// 'A' �� ����ϰ� ������...

	//char c = xget<2>(t3);
}*/