/*#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

//struct input_iterator_tag {}; // empty class
//struct output_iterator_tag {};

//struct forward_iterator_tag
	//:public input_iterator_tag {};

//struct bidirectional_iterator_tag
	//:public forward_iterator_tag {};

//struct random_access_iterator_tag
	//:public bidirectional_iterator_tag {};

// 반복자를 만들 때..
template<typename T> class vector_iterator
{
public:
	using iterator_category = random_access_iterator_tag;
};

template<typename T> class list_iterator
{
public:
	using iterator_category = bidirectional_iterator_tag;
};

template<typename T>
void eadvance_imp(T& p, int n,
	random_access_iterator_tag)
{
	std::cout << "random 버전" << std::endl;
	p = p + n;
}

template<typename T>
void eadvance_imp(T& p, int n,
	input_iterator_tag)
{
	std::cout << "input 버전" << std::endl;
	while (n--) ++p;
}

template<typename T>
void eadvance(T& p, int n)
{
	// 반복자의 종류에 따라서 다른 함수를 선택
	eadvance_imp(p, n, 
		typename T::iterator_category());
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