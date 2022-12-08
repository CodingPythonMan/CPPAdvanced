/*#include <iostream>
//#include "cppmaster.h"

template<typename T> void foo(T arg)
{
	//std::cout << typeid(T).name() << std::endl;
	//std::cout << __FUNCTION__ << std::endl; // 이름에 관심있는게 아니다.
	//std::cout << __PRETTY_FUNCTION__ << std::endl;// 표준이 아니라서 g++ 만 가능
	std::cout << __FUNCSIG__ << std::endl; // g++ 지원안함
	//LOG_FUNCTION_NAME(); // 개인적으로 만든 include
}

int main()
{
	int n = 0;
	//foo(n);		// T = int

	foo<const int&>(n); // T=const int&
}*/