/*#include <iostream>
#include <type_traits>
using namespace std;

// ���� �� ���� �Լ� �ڵ带 �����ϰ� �ʹ�.
//template<typename T> void foo(T a)
//{
//	static_assert(is_integral<T>::value, "error");
//}

//template<typename T>
//typename enable_if<is_integral<T>::value>::type
//foo(T a)
//{
//	cout << "T" << endl;
//}

//template<typename T>
//void foo(T a, 
//typename enable_if<is_integral<T>::value>::type* = nullptr)
//{
	
//}

// template<typename T, void*>
template<typename T, 
	typename enable_if<is_integral<T>::value>::type* = nullptr>
void foo(T a)
{
	cout << "T" << endl;
}

void foo(...) { cout << "..." << endl; }

int main()
{
	foo(3.4);
}*/