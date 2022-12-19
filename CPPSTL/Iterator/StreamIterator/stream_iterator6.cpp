/*#include <iostream>
#include <iterator>

template<typename T, typename CharT = char, typename Traits = std::char_traits<CharT>> 
class eostream_iterator
{
	//std::ostream* stream;
	std::basic_ostream<CharT, Traits>* stream;
	const CharT* delimiter;
public:
	eostream_iterator(std::ostream& os, const CharT* const deli = 0) :stream(&os), delimiter(deli) {}

	eostream_iterator& operator*() { return *this; }
	eostream_iterator& operator++() { return *this; }
	eostream_iterator& operator++(int) { return *this; }

	eostream_iterator& operator=(const T& v)
	{
		*stream << v;
		if (delimiter != 0)
		{
			*stream << delimiter;
		}
		return *this;
	}
};

int main()
{
	eostream_iterator<int> p(std::cout, ", ");
	*p = 10;
}*/