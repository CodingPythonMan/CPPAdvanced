/*#include <iostream>
using namespace std;

template<typename ... Types>
int foo(Types ... args)
{
	int x[] = { args... }; // pack expansion

	//int n = (args + ...); // fold expression
						  // 1+(2+(3+4))

	//int n = (... + args);		// ((1+2)+3)+4
	int n = (args + ... + 10);	// 1+(2+(3+(4+10)))

	return n;
}

int main()
{
	int n = foo(1, 2, 3, 4);
	cout << n << endl;
}*/