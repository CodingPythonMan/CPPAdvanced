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

	foo(x);		// void foo(int a[3])	T : int[3] �� error ����. ���Ե� �� ������... 
				// void foo(int* a)		T : int* �̰� ���� �� ����.
	goo(x);		// void goo(int (&a)[3])

}*/