/*#include <iostream>
using namespace std;

template<typename T> struct xis_pointer
{
	// bool value = false; // C++ 11 ���� �Ұ�. ����� �ƴ϶� ����
	//enum {value = false};
	static constexpr bool value = false;
};

// �ٽ� : ������ Ÿ�Կ� ���ؼ� �κ� Ư��ȭ
template<typename T> struct xis_pointer<T*>
{
	static constexpr bool value = true;
};

template<typename T> struct xis_pointer<T* const>
{
	static constexpr bool value = true;
};

template<typename T> struct xis_pointer<T* volatile>
{
	static constexpr bool value = true;
};

template<typename T> struct xis_pointer<T* const volatile>
{
	static constexpr bool value = true;
};

int main()
{
	cout << xis_pointer<int>::value << endl;
	cout << xis_pointer<int*>::value << endl;
	cout << xis_pointer<int* const>::value << endl;
	cout << xis_pointer<int* volatile>::value << endl;
	cout << xis_pointer<int* const volatile>::value << endl;
	cout << xis_pointer<int* volatile const>::value << endl;
}*/