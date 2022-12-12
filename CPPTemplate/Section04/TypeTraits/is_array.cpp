/*#include <iostream>
using namespace std;

template<typename T> struct xis_array
{
	static constexpr bool value = false;
};

template<typename T, size_t N> 
struct xis_array<T[N]>
{
	static constexpr bool value = true;
};

template<typename T>
struct xis_array<T[]>
{
	static constexpr bool value = true;
};

template<typename T> void foo(T& a)
{
	if (xis_array<T>::value)
	{
		cout << "array" << endl;
	}
	else
	{
		cout << "not array" << endl;
	}
}

int main()
{
	int x[3] = { 1,2,3 };
	foo(x);
}*/