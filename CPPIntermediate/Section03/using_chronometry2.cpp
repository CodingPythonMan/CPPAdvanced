/*#include <iostream>
#include <functional>

template<class F, class ... T>
decltype(auto) chronometry(F&& f, T&& ... arg)		// int&& arg = 0
{													// std::nullptr_t arg = nullptr;
	return std::invoke(std::forward<F>(f), std::forward<T>(arg)...);
}

void foo(std::pair<int, int> p) {}

void goo(int a) {}
void goo(int a, int b) {}

int main()
{
	//foo({ 1,2 });
	//chronometry(foo, { 1,2 });
	chronometry(foo, std::pair{1,2});	// ok

	goo(1);
	goo(1, 2);

	//chronometry(goo, 1, 2);	// ambiguous error
	chronometry(static_cast<void(*)(int ,int)>(goo), 1, 2);
}*/