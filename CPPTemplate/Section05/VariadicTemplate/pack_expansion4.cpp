/*#include <iostream>
#include <tuple>
using namespace std;

template<typename ... Types> void foo(Types ... args)
{
	int x[] = { args... };

	pair<Types...> p1;				// pair<int, double>
	tuple<Types...> t1;				// tuple<int, double>

	tuple<pair<Types...>> t2;		// tuple<pair<int, double>> t2
	tuple<pair<Types>...> t3;		// tuple<pair<int>, pair<double>> t3; // error

	tuple<pair<int, Types>...>t4;	// tuple<pair<int, int>, pair<int, double>> t4; ok

	pair<tuple<Types...>> p2;		// pair<tuple<int, double>> p2; // error
	pair<tuple<Types>...> p3;		// pair<tuple<int>, tuple<double>> p3; ok
}

int main()
{
	foo(1, 3.4);
}*/