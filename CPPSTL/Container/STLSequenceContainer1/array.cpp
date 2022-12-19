/*#include <iostream>
#include <vector>

//template<typename T, int N> struct array
//{
//	T buf[N];

//	typedef T* iterator;

//	iterator begin() { return buf ; }
//	iterator end() { return buf+N ; }

//	int size() const { return N; }
//	T& operator[](int n){return buf[n];}
//};

#include <array>

int main()
{
	int x[5];

	std::vector<int> v(5);

	std::array<int, 5> arr = { 1,2,3,4,5 };
	//arr.push_back(10); // error
	std::cout << arr.size() << std::endl;
}*/