/*#include <iostream>
using namespace std;

template<typename ... Types>
void foo(Types ... args)
{
	(cout << ... << args);
	// ((cout << 1) << 2) << 3
}

int main()
{
	foo(1, 2, 3);

	//(((cout << 1) << 2) << 3);
}*/