/*#include <iostream>
using namespace std;

template<typename T> struct xis_pointer
{
	enum {value = false};
};

// �ٽ� : ������ Ÿ�Կ� ���ؼ� �κ� Ư��ȭ
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