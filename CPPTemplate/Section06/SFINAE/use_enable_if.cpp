/*#include <iostream>
#include <type_traits>
using namespace std;

// ���� �� ���� �Լ� �ڵ带 �����ϰ� �ʹ�.
//template<typename T> void foo(T a)
//{
//	static_assert(is_integral<T>::value, "error");
//}

template<typename T> 
typename enable_if<is_integral<T>::value>::type 
foo(T a)
{
	cout << "T" << endl;
}

void foo(...)
{
	cout << "not integer" << endl;
}

int main()
{
	foo(3.4);
	//foo(2);
}*/