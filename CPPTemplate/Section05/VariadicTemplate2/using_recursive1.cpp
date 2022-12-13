/*#include <iostream>
#include <tuple>
using namespace std;

template<typename ... Types> void foo(Types ... args)
{
	tuple<Types...> tp(args...);

	cout << get<0>(tp) << endl;
	cout << get<1>(tp) << endl;
	cout << get<2>(tp) << endl;
}

int main()
{
	foo(1, 3.4, "AA");
}*/