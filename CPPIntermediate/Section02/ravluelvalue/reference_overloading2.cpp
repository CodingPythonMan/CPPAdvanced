/*#include <iostream>

class X {};

void foo(X& x) { std::cout << "X&" << std::endl; }
void foo(const X& x) { std::cout << "const X&" << std::endl; }
void foo(X&& x) { std::cout << "X&&" << std::endl; }

int main()
{
	foo(X());		// 3��

	X&& rx = X();	// 1��

	foo(rx);		// 1��

	// lvalue => rvalue ĳ�����ϸ� 3��
	foo(static_cast<X&&>(rx)); // 3��
}*/