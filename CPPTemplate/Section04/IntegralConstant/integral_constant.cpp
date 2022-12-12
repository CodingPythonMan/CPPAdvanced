/*#include <iostream>
using namespace std;

template<typename T, T N> struct xintegral_constant
{
	static constexpr T value = N;
};

//integral_constant<int, 0> t0;
//integral_constant<int, 1> t1;
//integral_constant<short, 0> t3;

typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;

// is_pointer 를 만들 때
template<typename T> 
struct is_pointer : false_type
{
	//	value = false;
};

template<typename T>
struct is_pointer : true_type
{
	//	value = true;
};

int main()
{

}*/