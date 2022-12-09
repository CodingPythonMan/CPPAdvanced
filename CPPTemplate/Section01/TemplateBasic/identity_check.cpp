/*template<typename T> struct identity
{
	typedef T type;
};

template<typename T> void foo(T a) {}
template<typename T> void goo(typename identity<T>::type a) {}
// T

int main()
{
	identity<int>::type n; // int

	foo(3); // ok
	foo<int>(3); // ok

	//goo(3); // error
	goo<int>(3); // ok
}*/