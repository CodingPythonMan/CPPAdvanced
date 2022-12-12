/*#include <iostream>
#include <boost\type_index.hpp>
using namespace std;
using namespace boost::typeindex;

// 함수 템플릿 인자가 값 타입 일때
template<typename T> void foo(T& a)
{
	cout << type_id_with_cvr<T>().pretty_name() << endl;
	cout << type_id_with_cvr<decltype(a)>().pretty_name() << endl;
}

template<typename T> void goo(const T& a)
{
	cout << type_id_with_cvr<T>().pretty_name() << endl;
	cout << type_id_with_cvr<decltype(a)>().pretty_name() << endl;
}

int main()
{
	int n = 0;
	int& r = n;
	const int c = n;
	const int& cr = c;

	goo(n);		// T : int,				a : const int&
	goo(c);		// T : int,				a : const int&
	goo(r);		// T : int,				a : const int&
	goo(cr);	// T : int,				a : const int&

	foo(n);		// T : int,				a : int&
	foo(c);		// T : const int,		a : const int&
	foo(r);		// T : int,				a : int&
	foo(cr);	// T : const int,		a : const int&
}*/