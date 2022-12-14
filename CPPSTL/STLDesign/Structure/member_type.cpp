/*#include <iostream>
#include <list>
#include <vector>

// ���ڷ� ���޵� �����̳��� 1��° ��Ҹ� ����ϴ� �Լ�

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
	// typename : value_type �� Ÿ���� �̸����� �ؼ�
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
//std::list<int>::value_type n = s.front();	// n �� int*/