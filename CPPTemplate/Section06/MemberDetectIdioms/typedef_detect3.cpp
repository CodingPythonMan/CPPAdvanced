/*#include <iostream>
using namespace std;

// 1. nested type �����ϱ�
struct NoValueType
{

};

struct HasValueType
{
	typedef int value_type;
};


// 1. �������� �Լ� vs �Լ� ���ø�
template<typename T> char check(typename T::value_type* a);

template<typename T>short check(...);

template<typename T>
struct has_value_type
{
	static constexpr bool value = (sizeof(check<T>(0)) == 1);
};

int main()
{
	cout << has_value_type<HasValueType>::value << endl;
	cout << has_value_type<NoValueType>::value << endl;

	//HasValueType t1;
	//cout << sizeof(check<HasValueType>(0)) << endl;

	//NoValueType t2;
	//cout << sizeof(check<NoValueType>(0)) << endl;
}*/