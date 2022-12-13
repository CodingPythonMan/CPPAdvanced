/*#include <iostream>
#include <tuple>
using namespace std;

template <size_t ... N> struct xindex_sequence {};

template<typename TP, size_t ... I> 
void print_tuple(const TP& tp, const xindex_sequence<I...>&)	// I : 0, 1, 2
{
	int x[] = { get<I>(tp)... };	// get<0>(tp), get<1>(tp), get<2>(tp)

	for (auto& n : x)
		cout << n << ", ";
}

int main()
{
	tuple<int, int, int> tp(1, 2, 3);

	print_tuple(tp, xindex_sequence<0,1,2>());		// 1, 2, 3
}*/