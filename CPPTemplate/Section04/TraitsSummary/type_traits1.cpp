/*#include <iostream>
#include <type_traits>
using namespace std;

// C++ 14
//template<typename T>
//using remove_pointer_t = typename remove_pointer<T>::type;

template<typename T> void foo(T a)
{
	// �����͸� ������ Ÿ���� ���ϰ� �ʹ�.
	remove_pointer_t<T> n;

	cout << typeid(n).name() << endl;
}

int main()
{
	int n = 0;
	foo(&n);
}*/