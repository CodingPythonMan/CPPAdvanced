/*#include <list>
using namespace std;

template<typename T> class Vector
{
	T* buff;
	int size;
public:
	Vector(int sz, T value) {}

	template<typename C> Vector(C c) {}
};
template<typename C>
Vector(C c)->Vector< typename C::value_type>;

int main()
{
	Vector v(10, 3);

	list s = { 1,2,3 };
	Vector v2(s);

	// 다른 컨테이너의 반복자로 초기화한 vector
	//Vector v3(s.begin(), s.end());
}*/