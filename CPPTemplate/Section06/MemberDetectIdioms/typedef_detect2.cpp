/*#include <iostream>
#include <vector>
using namespace std;

// 1. nested type 조사하기
struct NoValueType
{

};

struct HasValueType
{
	typedef int value_type;
};


// 1. 가변인자 함수 vs 함수 템플릿
template<typename T> 
typename T::value_type
check(T a)
{
	cout << "T" << endl;
	return 0;
}

void check(...)
{
	cout << "..." << endl;
}

int main()
{
	HasValueType t1; check(t1);
	NoValueType t2; check(t2);
}*/