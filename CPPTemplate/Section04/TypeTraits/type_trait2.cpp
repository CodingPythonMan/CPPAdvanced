/*#include <iostream>
using namespace std;

template<typename T> struct xis_pointer
{
	// bool value = false; // C++ 11 이하 불가. 상수가 아니라 변수
	//enum {value = false};
	static constexpr bool value = false;
};

// 핵심 : 포인터 타입에 대해서 부분 특수화
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