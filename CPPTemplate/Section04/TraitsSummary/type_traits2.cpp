/*#include <iostream>
#include <type_traits>
using namespace std;

//C++ 17
//template<typename T>
//inline constexpr bool is_pointer_v = is_pointer<T>::value;

void foo_imp(true_type) {}
void foo_imp(false_type) {}

template<typename T> void foo(T a)
{
	//bool b = is_pointer<T>::value;

	bool b = is_pointer_v<T>;
	
	if (is_pointer_v<T>)
	{
		cout << *a << endl;
	}
	foo_imp(is_pointer<T>());
}

int main()
{
	int n = 0;
	foo(&n);
}*/