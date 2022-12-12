/*#include <iostream>
#include <type_traits>
using namespace std;

// 배열 정보 조사하기
template<typename T> void foo(T& a)
{
	if (is_array<T>::value)
	{
		cout << "array" << endl;

		cout << extent<T, 0>::value << endl; // 3
		cout << extent<T, 1>::value << endl; // 2
	}
}

int main()
{
	int x[3][2] = { 1,2,3,4,5,6 };

	foo(x);
}*/