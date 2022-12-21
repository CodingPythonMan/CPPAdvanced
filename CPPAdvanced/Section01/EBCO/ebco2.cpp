#include <iostream>
#include <type_traits>

class Empty {};

template<typename T1, typename T2> struct PAIR
{
	T1 first;
	T2 second;
};

int main()
{
	PAIR<int, int> p1;
	PAIR<Empty, int> p2;

	std::cout << sizeof(p1) << std::endl; // 8
	std::cout << sizeof(p2) << std::endl; // 8
}