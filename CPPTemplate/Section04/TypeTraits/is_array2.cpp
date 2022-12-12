/*#include <iostream>
using namespace std;

template<typename T> struct xis_array
{
	static constexpr bool value = false;
	static constexpr size_t size = -1;
};

template<typename T, size_t N>
struct xis_array<T[N]>
{
	static constexpr bool value = true;
	static constexpr size_t size = N;
};

template<typename T> void foo(T& a)
{
	if (xis_array<T>::value)
		cout << "배열 크기 : " << xis_array<T>::size << endl;
}

int main()
{
	int x[3] = { 1,2,3 };
	foo(x);
}*/