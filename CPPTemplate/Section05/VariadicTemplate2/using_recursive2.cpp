/*#include <iostream>
#include <tuple>
using namespace std;

void foo() {} // 재귀의 종료를 위해서

template<typename T, typename ... Types> 
void foo(T value, Types ... args)
{
	static int n = 0;
	++n;

	cout << n << " : " << value << endl;

	foo(args...); // foo(3.4,"AA")
				  // foo("AA")
				  // foo() 
}

int main()
{
	foo(1, 3.4, "AA");	// value : 1, args : 3.4, "AA"
}*/