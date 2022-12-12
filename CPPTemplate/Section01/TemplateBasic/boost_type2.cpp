/*#include <iostream>
#include <boost\type_index.hpp>
using namespace std;
using namespace boost::typeindex;

template<typename T> void foo(const T a)
{
	cout << type_id_with_cvr<T>().pretty_name() << endl;
	cout << type_id_with_cvr<decltype(a)>().pretty_name() << endl;
}

int main()
{
	foo(3);
	foo(3.3);
}*/