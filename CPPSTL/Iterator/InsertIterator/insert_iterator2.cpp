/*#include <iostream>
#include <list>

//template<typename T>
//std::back_insert_iterator<T> // 리턴 타입
//back_inserter(T& c)
//{
//	return back_insert_iterator<T>(c);
//}

int main()
{
	int x[5] = { 10,20,30,40,50 };
	std::list<int> s = { 1,2,3,4,5 };

	//copy(x, x + 5, s.begin()); // 덮어쓴다.

	//back_insert_iterator<list<int>> p(s);
	std::copy(x, x + 5, back_inserter(s));

	for (auto& n : s)
		std::cout << n << std::endl;
}*/