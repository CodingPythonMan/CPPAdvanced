/*// non-type(값) parameter
// 정수형 상수, enum 상수, 포인터, 함수 포인터, 멤버 함수 포인터.
// C++17 : auto
#include <iostream>
using namespace std;

template<auto N> struct Test
{
	Test()
	{
		cout << typeid(N).name() << endl;
	}
};
int x = 0;

int main()
{
	Test<10> t1;	// N : int 값
	Test<&x> t2;	// N : int* 의 값.
	Test<&main> t3;
}*/