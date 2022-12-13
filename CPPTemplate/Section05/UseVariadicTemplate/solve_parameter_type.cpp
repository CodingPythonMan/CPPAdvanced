/*#include <iostream>
using namespace std;

double hoo(short a, int b, char c) { return 0; }

template<size_t N, typename T> struct argument_type
{
	typedef T type;
};

template<typename R, typename A1, typename ... Types> 
struct argument_type<0, R(A1, Types...)>
{
	typedef A1 type;
};

template<typename T> void foo(const T& t)
{
	// T : double(short, int) 함수 모양
	typename argument_type<0, T>::type ret;

	cout << typeid(ret).name() << endl;
}

int main()
{
	foo(hoo);
}*/