/*#include <iostream>
#include <vector>
using namespace std;

template<typename T> void foo(T a) {}
template<typename T> void goo(typename T::value_type a) {}

int main()
{
	vector<int> v(10, 3);

	foo(v);
	//goo(0); // error
	goo<vector<int>>(0); // ok
}*/