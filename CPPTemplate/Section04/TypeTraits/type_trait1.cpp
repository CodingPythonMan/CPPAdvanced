/*#include <iostream>
using namespace std;

template<typename T> struct xis_pointer
{
	enum {value = false};
};

// 핵심 : 포인터 타입에 대해서 부분 특수화
template<typename T> struct xis_pointer<T*>
{
	enum { value = true };
};

template<typename T> void foo(T v)
{
	if (is_pointer<T>::value)
	{
		cout << "pointer" << endl;
	}
	else
	{
		cout <<"not pointer" << endl;
	}
}

int main()
{
	int n = 3;
	foo(n); // not pointer
	foo(&n); // pointer
}*/