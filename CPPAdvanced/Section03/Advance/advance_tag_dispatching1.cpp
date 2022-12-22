/*#include <iostream>
#include <vector>
#include <list>
#include <iterator>

// 1. empty class �� ����ؼ� �ݺ����� ����(category) �� Ÿ��ȭ �Ѵ�.
//struct input_iterator_tag{};
//struct output_iterator_tag{};
//struct forward_iterator_tag : input_iterator_tag {};
//struct bidirectional_iterator_tag : forward_iterator_tag{};
//struct random_access_iterator_tag : bidirectional_iterator_tag {};

// 2. �� �����̳��� �ݺ��� ����� �ش� �ݺ��ڰ� � ����(category) ����
//    ��ӵ� ����(iterator_category) �� �ܺο� �˷� �ش�.
//template<typename T> class vector_iterator
//{
//public:
// 	using iterator_category = random_access_iterator_tag; // C++11 ����

	//typedef random_access_iterator_tag iterator_category;

	// ....
//};

//template<typename T> class list_iterator
//{
//public:
// 	using iterator_category = bidirectional_iterator_tag; // C++11 ����

	//typedef bidirectional_iterator_tag iterator_category;
//};

// 3. �ݺ����� ������ ���� �ٸ��� �����ϴ� advance_imp() �Լ� ����
template<typename T>
void advance_imp(T& it, std::size_t sz, std::random_access_iterator_tag)
{
	it = it + sz;
	std::cout << "using +" << std::endl;
}

template<typename T>
void advance_imp(T& it, std::size_t sz, std::input_iterator_tag)
{
	while (sz--)
		++it;
	std::cout << "using ++" << std::endl;
}

// 4. advance() �Լ����� ���޵� �ݺ��ھ��� "iterator_category" �� ����
//	  �Լ� �����ε�(tag dispatching) ��� ���.
template<typename T>
void xadvance(T& it, std::size_t sz)
{
	advance_imp(it, sz,
		typename T::iterator_category());
}

int main()
{
	std::vector<int> c = {1,2,3,4,5,6,7,8,9,10};
	//std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::begin(c);

	xadvance(p, 5);

	std::cout << *p << std::endl;
}
*/