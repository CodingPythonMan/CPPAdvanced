/*#include <iostream>
using namespace std;

template<typename T> struct xremove_pointer
{
	typedef T type;
};

template<typename T> struct xremove_pointer<T*>
{
	typedef T type;
};

template<typename T> void foo(T a)
{
	// <int *>::type
	typename xremove_pointer<T>::type t;

	cout << typeid(t).name() << endl;
}

int main()
{
	int n = 10;
	foo(&n);
}*/