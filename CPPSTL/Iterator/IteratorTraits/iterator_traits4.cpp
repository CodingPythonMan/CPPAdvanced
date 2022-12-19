/*#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

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
	// int*
	eadvance_imp(p, n,
	typename iterator_traits<T>::iterator_category());
}

int main()
{
	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::begin(s);

	eadvance(p, 5);

	std::cout << *p << std::endl;
}*/