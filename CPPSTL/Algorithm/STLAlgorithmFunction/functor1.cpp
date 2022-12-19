/*#include <iostream>

// () 를 사용해서 호출하는 것들..
// 1. 함수
// 2. 함수 포인터
// 3. ()를 재정의한 클래스
// 4. 람다표현식...

struct Plus
{
	int operator()(int a, int b) const
	{
		return a + b;
	}
};

int main()
{
	Plus p;
	int n = p(1, 2); // p.operator()(1,2)
	std::cout << n << std::endl;

	// a + b; // a.operator+(b)
}*/