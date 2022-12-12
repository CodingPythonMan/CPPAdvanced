#include <iostream>
#include <type_traits>
using namespace std;

template<typename T> void foo(T a)
{
	
}

int main()
{
	int n = 0;
	foo(&n);
}