/*#include <iostream>
using namespace std;

double hoo(short a, int b) { return 0; }

template<typename T> struct result_type
{
	typedef T type;
};

template<typename R, typename A1, typename A2> 
struct result_type<R(A1, A2)>
{
	// T : double(short, int)
	typedef R type;
};

template<typename T> void foo(T& t)
{
	typename result_type<T>::type ret;
	//result_type<int>::type ret;

	cout << typeid(ret).name() << endl;
}

int main()
{
	foo(hoo);
}*/