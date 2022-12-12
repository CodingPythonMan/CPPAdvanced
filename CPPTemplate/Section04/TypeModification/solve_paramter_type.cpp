/*#include <iostream>
using namespace std;

double hoo(short a, int b) { return 0; }

template<typename T, size_t N> struct argument_type
{
	typedef T type;
};

//template<typename R, typename A1, typename A2, size_t N> 
//struct argument_type<R(A1,A2), N>
//{
	//typedef T Type;
//};

template<typename R, typename A1, typename A2>
struct argument_type<R(A1, A2), 0>
{
	typedef A1 type;
};

template<typename R, typename A1, typename A2>
struct argument_type<R(A1, A2), 1>
{
	typedef A2 type;
};

template<typename T> void foo(T& t)
{
	// T : double(short, int)
	typename argument_type<T, 0>::type ret;

	cout << typeid(ret).name() << endl;
}

int main()
{
	foo(hoo);
}*/