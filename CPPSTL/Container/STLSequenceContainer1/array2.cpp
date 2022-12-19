/*#include <iostream>
#include <vector>

template<typename T, int N> struct Array
{
	T buf[N];

	typedef T* iterator;

	iterator begin() { return buf ; }
	iterator end() { return buf+N ; }

	int size() const { return N; }
	T& operator[](int n){return buf[n];}
};

int main()
{
	Array<int, 5> arr = { 1,2,3,4,5 };

	//auto p = std::find(++arr.begin(), arr.end(), 3);

	auto p = std::find(std::next(arr.begin()), arr.end(), 3);

	std::cout << *p << std::endl;
}*/