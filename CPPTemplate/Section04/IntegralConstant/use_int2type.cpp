/*#include <iostream>
using namespace std;

template<typename T> struct xis_pointer
{
	static constexpr bool value = false;
};

template<typename T> struct xis_pointer<T*>
{
	static constexpr bool value = true;
};

template<typename T> void printv(T v)
{
	if constexpr (is_pointer<T>::value)		// if ( false )
	{
		cout << v << " : " << *v << endl;
	}
	else
	{
		cout << v << endl;
	}
}

int main()
{
	int n = 3;
	printv(n);
	printv(&n);
}*/