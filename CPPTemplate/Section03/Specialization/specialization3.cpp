/*#include <iostream>
using namespace std;

template<typename T> struct Test
{
	static void foo() { cout << typeid(T).name() << endl; }
};

template<typename T> struct Test<T*>
{
	static void foo() { cout << typeid(T).name() << endl; }
};

int main()
{
	Test<int>::foo();	// int
	Test<int*>::foo();	// int
}*/