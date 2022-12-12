/*#include <iostream>
#include <type_traits>
using namespace std;

template<typename T> void foo(T a)
{
	bool b = is_pointer<T>::value;

	typename remove_pointer<T>::type t;

	cout << typeid(t).name() << endl;
}

int main()
{
	int n = 10;
	foo(n);
	foo(&n);
}*/