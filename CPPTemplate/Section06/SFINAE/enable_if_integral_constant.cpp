/*#include <iostream>
#include <type_traits>
using namespace std;

// C++ 17 부터 가능
//template<typename T> void printv(const T& v)
//{
//	if constexpr(is_pointer<T>::value)
//	{
//		cout << v << " : " << *v << endl;
//	}
//	else
//	{
//		cout << v << endl;
//	}
//}

//template<typename T> 
//void printv_imp(const T& v, true_type)
//{
//	cout << v << " : " << *v << endl;
//}

//template<typename T>
//void printv_imp(const T& v, false_type)
//{
//	cout << v << endl;
//}

//template <typename T> void printv(const T& v)
//{
//	printv_imp(v, is_pointer<T>());
//}

template<typename T> 
typename enable_if<is_pointer<T>::value>::type
printv(const T& v)
{
	cout << v << " : " << *v << endl;
}

template<typename T> 
typename enable_if<!is_pointer<T>::value>::type
printv(const T& v)
{
	cout << v << endl;
}

int main()
{
	int n = 0;
	printv(n);
	printv(&n);
}*/