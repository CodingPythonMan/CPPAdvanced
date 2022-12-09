/*template<typename T> class Test
{
public:
	void foo(T&& arg) {}
	template<typename U> void goo(U&& arg) {}
};

int main()
{
	int n = 0;

	Test<int> t;	// T = int
					// void foo(int&& arg)

	//t.foo(n);		// error
	t.foo(0);		// ok

	t.goo(n);
	t.goo(0);
}*/