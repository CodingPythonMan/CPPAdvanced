/*#include <iostream>
using namespace std;

// template meta programming
template<int N> struct factorial
{
	// int value = 10;
	//enum {value=N*factorial<N -1>::value};

	static constexpr int value = N * factorial<N - 1>::value;
};

// 재귀의 종료를 위해 특수화 문법 사용
template<> struct factorial<1>
{
	enum { value = 1 };
};

int main()
{
	int n = factorial<5>::value;

	cout << n << endl;
}*/