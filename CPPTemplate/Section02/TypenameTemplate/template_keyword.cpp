/*class Test
{
public:
	template<typename T> static void f() {}
	template<typename T> class Complex {};
};

template <typename T> 
typename T::template Complex<int> foo(T a)
{
	Test::f<int>();	// ok
	//T::f<int>();	// error
	T::template f<int>(); // ok

	Test::Complex<int> c1;
	//T::Complex<int> c2; // error
	//typename T::Complex<int> c3; // error
	typename T::template Complex<int> c4;
	return c4;
}

int main()
{
	Test t;
	foo(t);
}*/