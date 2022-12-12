/*#include <iostream>
#include <boost\type_index.hpp>
using namespace std;
using namespace boost::typeindex;

template<typename T>
void foo(T a)
{
	cout << type_id_with_cvr<T>().pretty_name() << endl;
	cout << type_id_with_cvr<decltype(a)>().pretty_name() << endl;
}

template<typename T>
void goo(T& a)
{
	cout << type_id_with_cvr<T>().pretty_name() << endl;
	cout << type_id_with_cvr<decltype(a)>().pretty_name() << endl;
}

int main()
{
	int x[3] = { 1,2,3 };

	foo(x);		// void foo(int a[3])	T : int[3] 은 error 겠죠. 대입될 수 없으니... 
				// void foo(int* a)		T : int* 이건 받을 수 있죠.
	goo(x);		// void goo(int (&a)[3])

}*/