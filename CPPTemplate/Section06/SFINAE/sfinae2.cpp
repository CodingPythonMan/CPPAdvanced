/*#include <iostream>
using namespace std;

template<typename T>
typename T::type foo(T t)	// int::type foo(int t) // 잘못된 표현
{ 
	cout << "T" << endl; 
	return 0; 
}

void foo(...) { cout << "..." << endl; }

int main()
{
	foo(3); // int
}*/