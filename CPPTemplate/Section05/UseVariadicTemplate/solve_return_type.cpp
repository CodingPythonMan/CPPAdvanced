/*#include <iostream>
using namespace std;

double hoo(short a, int b) { return 0; }

int goo() { return 0; }

template<typename T> struct result_type
{
	typedef T type;
};

template<typename R, typename ... Types> 
struct result_type < R(Types ...)>
{
	typedef R type;
};

template<typename T> void foo(const T& t)
{
	// T : double(short, int) �Լ� ���
	typename result_type<T>::type ret;

	cout << typeid(ret).name() << endl;
}
int main()
{
	foo(goo);
}*/