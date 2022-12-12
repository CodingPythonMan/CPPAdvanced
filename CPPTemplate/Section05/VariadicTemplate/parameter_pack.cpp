/*#include <iostream>
using namespace std;

void goo(int n, double d, const char* s)
{
	cout << "goo : " << n << " " << d << " "
		<< s << endl;
}

template<typename ... Types>
void foo(Types ... args)
{
	// args : Parameter Pack
	cout << sizeof...(args) << endl; // 3
	cout << sizeof...(Types) << endl;// 3

	//goo(args)	// error.
	goo(args...); // pack expansion
				  // goo(>e1, e2, e3)
}

int main()
{
	foo(1, 3.4, "AAA"); // Types : int, double, const char*
						// args	 : 1,   3.4,    "AAA"
}*/