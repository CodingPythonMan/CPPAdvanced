/*#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>

int main()
{
	std::ifstream f("Iterator/StreamIterator/istream_iterator3.cpp");

	//std::istream_iterator<char> p1(f), p2;
	std::istreambuf_iterator<char> p1(f), p2;
	std::ostream_iterator<char> p3(std::cout);

	//*p3 = *p1;
	std::copy(p1, p2, p3);
}*/