/*#include <iostream>
using namespace std;

template<int N> struct int2Type
{
	enum {value = N};
};

template<typename T> struct xis_pointer
{
	static constexpr bool value = false;
};

template<typename T> struct xis_pointer<T*>
{
	static constexpr bool value = true;
};

template <typename T> void printv_imp(T v, int2Type<1>)
{
	cout << v << " : " << *v << endl;
}

template <typename T> void printv_imp(T v, int2Type<0>)
{
	cout << v << endl;
}

template<typename T> void printv(T v)
{
	printv_imp(v, int2Type<xis_pointer<T>::value>());
					// 포인터 : 1
					// 포인터 아님 : 0
}

int main()
{
	int n = 3;
	printv(n);
	printv(&n);
}*/