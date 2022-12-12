/*#include <iostream>
#include <type_traits>
using namespace std;

template<bool b, typename T, typename F>
struct IfThenElse
{
	typedef T type;
};

template<typename T, typename F>
struct IfThenElse<false, T, F>
{
	typedef F type;
};

// 비트 관리 및 보관을 위한 클래스.
template<size_t N> struct Bit
{
	//int bitmap; //32bit 관리
	//using type = typename IfThenElse<(N <= 8), char, int>::type;
	
	using type = typename conditional<(N <= 8), char, int>::type;

	type bitmap;
};

int main()
{
	Bit<32> b1;
	Bit<8> b2;

	cout << sizeof(b1) << endl; // 4
	cout << sizeof(b2) << endl; // 1
}*/