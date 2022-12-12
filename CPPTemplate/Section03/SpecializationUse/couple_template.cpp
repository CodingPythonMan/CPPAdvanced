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

int main()
{
	couple<int, double> c1;
	couple<int, couple<int, char>> c2;
	couple<int, couple<int, couple<int,char>>> c3;

	printN(c1);
	printN(c2);
	printN(c3);
}*/