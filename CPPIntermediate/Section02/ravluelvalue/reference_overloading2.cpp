/*#include <iostream>

class X {};

void foo(X& x) { std::cout << "X&" << std::endl; }
void foo(const X& x) { std::cout << "const X&" << std::endl; }
void foo(X&& x) { std::cout << "X&&" << std::endl; }

int main()
{
	foo(X());		// 3번

	X&& rx = X();	// 1번

	foo(rx);		// 1번

	// lvalue => rvalue 캐스팅하면 3번
	foo(static_cast<X&&>(rx)); // 3번
}*/