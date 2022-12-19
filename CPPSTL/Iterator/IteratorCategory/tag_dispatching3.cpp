/*#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <type_traits>
using namespace std;

// 1. 함수 인자를 사용하는 오버로딩

// 2. if 문 사용
//template<typename T> void eadvance(T& p, int n)
//{
//	if constexpr (is_same<typename T::iterator_category, random_access_iterator_tag>::value)
//	{
//		p = p + n;
//	}
//	else
//	{	
//		while (n--) ++p;
//	}
//}

// 3.enable_if 를 사용.. SFINAE 개념 사용.
template<typename T> 
enable_if<is_same<typename T::iterator_category, random_access_iterator_tag>::value>::type 
eadvance(T& p, int n)
{
	p = p + n;
}

template<typename T>
enable_if<!is_same<typename T::iterator_category, random_access_iterator_tag>::value>::type
eadvance(T& p, int n)
{
	while (n--) ++p;
}

int main()
{
	//std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::begin(s);

	// 반복자를 p를 5칸 전진하고 싶다.
	// p = p + 5;
	eadvance(p, 5);

	std::cout << *p << std::endl;
}*/