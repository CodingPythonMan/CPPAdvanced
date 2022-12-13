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

struct Test
{
public:
	void resize(int n) {}
	Test(int a) {}
};

// 1. 가변인자 함수 vs 함수 템플릿
template<typename T> char check( decltype( T().resize(0))* a);
template<typename T> short check(...);

template<typename T> struct has_resize
{
	static constexpr bool value = (sizeof(check<T>(0)) == 1);
};

int main()
{
	//cout << has_resize<vector<int>>::value << endl;			// 1
	cout << has_resize<Test>::value << endl;			// 1
	cout << has_resize<array<int, 10>>::value << endl;		// 0
}*/