/*#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

// 4항 함수
void foo(int a, int b, int c, int d)
{
	printf("%d, %d, %d, %d\n", a, b, c, d);
}

int main()
{
	foo(1, 2, 3, 4);   // 4항 함수..

	// 4항 함수 => 2항으로
	bind(&foo, 10, _2, _1, 20)(1, 2);

	// 4항 함수 => 3항으로
	bind(&foo, _3, _2, _1, 100)(30, 20, 10); // 10, 20, 30, 100

	// 4항 => 무항
	bind(&foo, 1, 2, 3, 4)();

	modulus<int> m;
	std::cout << m(10, 3) << std::endl; // 10 % 3

	bind(m, 10, 3)(); // 10 % 3
	bind(m, _1, 3)(7); // 7 % 3

	int x[3] = { 1,2,3 };

	// 3의 배수가 아닌 것 찾기
	auto p = find_if(x, x + 3, bind(m, _1, 3));

	std::cout << *p << std::endl; // 1
}*/