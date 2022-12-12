/*#include <iostream>
using namespace std;

template<typename T> void printN(const T& cp)
{
	cout << T::N << endl;
}

template<typename T, typename U> struct couple
{
	T v1;
	U v2;
	enum {N = 2};
};

// 2번째 인자가 couple 일 경우
template<typename A, typename B, typename C>
struct couple<A, couple<B, C>>
{
	A v1;
	couple<B, C> v2;
	enum { N = couple<B,C>::N + 1 };
};

// 1번째 인자가 couple 일 경우
template<typename A, typename B, typename C>
struct couple<couple<A, B>, C>
{
	couple<A, B> v1;
	C v2;
	enum { N = couple<A, B>::N + 1 };
};

// 모두 커플일 때
template<typename A, typename B, typename C, typename D>
struct couple<couple<A, B>, couple<C,D>>
{
	couple<A, B> v1;
	couple<C, D> v2;
	enum { N = couple<A, B>::N + couple<C,D>::N };
};

int main()
{
	couple<couple<int, int>, couple<int, int>> c4;

	printN(c4);
}*/