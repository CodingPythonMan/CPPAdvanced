/*// non-type(��) parameter
// ������ ���, enum ���, ������, �Լ� ������, ��� �Լ� ������.
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
	Test<10> t1;	// N : int ��
	Test<&x> t2;	// N : int* �� ��.
	Test<&main> t3;
}*/