/*#include <iostream>
using namespace std;

template<typename T> struct xremove_all_pointer
{
	typedef T type;
};

template<typename T> struct xremove_all_pointer<T*>
{
	typedef typename xremove_all_pointer<T>::type type;
};

int main()
{
	xremove_all_pointer<int*******>::type n;

	cout << typeid(n).name() << endl;
}*/