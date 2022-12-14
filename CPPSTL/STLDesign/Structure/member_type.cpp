/*#include <iostream>
#include <list>
#include <vector>

// 인자로 전달된 컨테이너의 1번째 요소를 출력하는 함수

//void print(std::vector<int>& c)
//{
//	int n = c.front();
//	std::cout << n << std::endl;
//}

//template<typename T>
//void print(std::vector<T>& c)
//{
//	T n = c.front();
//	std::cout << n << std::endl;
//}

template<typename T>
void print(T& c)
{
	// T : list<double>
	// T::value_type => list<double>::value_type => double
	// typename : value_type 을 타입의 이름으로 해석
	typename T::value_type n = c.front();	// double

	std::cout << n << std::endl;
}


int main()
{
	//std::vector<double> v = { 1,2,3 };
	std::list<double> v = { 1,2,3 };
	print(v);
}

//----------------------------
//template<typename T> class list
//{
//public:
//	typedef T value_type;
//	using value_type = T;
//};

//std::list<int> s = { 1,2,3 };
//std::list<int>::value_type n = s.front();	// n 은 int*/