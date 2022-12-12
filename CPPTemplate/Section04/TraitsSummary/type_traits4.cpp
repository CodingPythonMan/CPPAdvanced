/*#include <iostream>
#include <type_traits>
using namespace std;

// array => pointer : decay
template<typename T, typename U> void foo(T a, U b)
{
	//bool ret = is_same<typename remove_cv<T>::type, 
	//				   typename remove_cv<U>::type>::value;

	bool ret = is_same<typename decay<T>::type, 
					   typename decay<U>::type>::value;

	// bool ret = is_base_of<T, U>::value;

	cout << ret << endl;
}

int main()
{
	//foo<int, const int>(0, 0);

	foo<int[3], int*>(0, 0);
}*/