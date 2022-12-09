/*#include <list>

template<typename T> class Vector
{
	T* buff;
public:
	Vector() {}
	Vector(int sz, T initValue) {}

	template<typename C> Vector(C& c) {}
};
// user define deduction guide
Vector()->Vector<int>;
template<typename C> 
//Vector(C& c)->Vector<C>; // C : list<int>
Vector(C& c)->Vector<typename C::value_type>;

int main()
{
	Vector<int> v1(10, 3); // 10개를 3으로 초기화
	Vector v2(10, 3); // C++ 17

	Vector v3;

	//list<int> s = { 1,2,3 };
	std::list s = { 1,2,3 }; // C++ 17 style

	Vector v4(s);
}*/