/*#include <iostream>
using namespace std;

void print(int a)
{
	cout << a << ", ";
	//return 0;
}

template<typename ... Types>
void foo(Types ... args)
{
	//print(args); // error
	//print(args...); // error, print(1,2,3)

	//print(args)...; // print(1), print(2), print(3) // error

	//int x[] = {0, print(args)... }; // {print(1), print(2), print(3) }
	
	//int x[] = {0, (print(args), 0)... }; 

	initializer_list<int> e = {(print(args), 0)... };
}

int main()
{
	foo(1, 2, 3);	// args : 1, 2, 3
	//foo();
}*/