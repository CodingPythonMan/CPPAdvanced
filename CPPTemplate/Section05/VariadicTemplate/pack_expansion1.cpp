/*#include <iostream>
using namespace std;

void goo(int a, int b, int c)
{
	cout << a << ", " << b << ", " << c << endl;
}

int hoo(int a) { return -a; }

template<typename ... Types>
void foo(Types ... args)
{
	//int x[] = { args... };	// pack expansion
	// { 1,2,3 }

	//int x[] = { (++args)... };	// { ++e1, ++e2, ++e3}
								// { 2,3,4 }

	//int x[] = { hoo(args...) };

	int x[] = { hoo(args)... }; // {hoo(1), hoo(2), hoo(3)}

	//goo(args...);		// goo(1,2,3); //ok

	//goo(hoo(args...));	// goo(hoo(1,2,3)) error

	goo(hoo(args)...);	// goo(hoo(1), hoo(2), hoo(3)); ok

	for (auto n : x)
		cout << n << endl;
}

int main()
{
	foo(1, 2, 3);	// Types : int, int, int
					// args	 : 1.   2,   3
}*/