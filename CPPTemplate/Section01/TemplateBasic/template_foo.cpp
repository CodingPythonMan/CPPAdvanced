/*template<typename T> void foo(T a)
{
	++a;
}

int main()
{
	int n = 0;
	int& r = n;
	const int c = n;

	foo(n);	// T : int
	foo(c);	// T : const int ? int
	foo(r);	// T : int&		 ? int
}*/