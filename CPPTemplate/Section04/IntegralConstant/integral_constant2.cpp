/*#include <iostream>
#include <type_traits>
using namespace std;

template <typename T> 
void printv_imp(T v, true_type)
{
	cout << v << " : " << *v << endl;
}

template <typename T> 
void printv_imp(T v, false_type)
{
	cout << v << endl;
}

template<typename T> void printv(T v)
{
	printv_imp(v, is_pointer<T>());
}

int main()
{
	int n = 3;
	printv(n);
	printv(&n);
}*/