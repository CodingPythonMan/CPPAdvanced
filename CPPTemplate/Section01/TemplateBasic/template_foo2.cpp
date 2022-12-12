/*#include <iostream>
#include <boost\type_index.hpp>
using namespace std;
using namespace boost::typeindex;

// 함수 템플릿 인자가 값 타입 일때
template<typename T> void foo(T a)
{
	cout << type_id_with_cvr<T>().pretty_name() << endl;
}

int main()
{
	int n = 0;
	int& r = n;
	const int c = n;
	const int& cr = c;

	foo(n);		// int
	foo(c);		// int
	foo(r);		// int
	foo(cr);	// int

	const char* s1 = "hello";		// s1 을 따라가면 const
	foo(s1);

	const char* const s2 = "hello";
	foo(s2);
}*/