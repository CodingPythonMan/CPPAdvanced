/*#include <iostream>

template<typename T> T square(T a)
{
	return a * a;
}

int main()
{
	//printf("%p\n", &square); // error
	printf("%p\n", &square<int>); // ok
	printf("%p\n", static_cast<int(*)(int)> (&square)); // ok

	//auto p = &square; // error
	auto p = &square<int>; // ok
	auto p = static_cast<int(*)(int)>(&square); // ok
}*/