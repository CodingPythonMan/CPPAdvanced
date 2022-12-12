/*template<int N> struct int2Type
{
	static constexpr int value = N;
};

void foo(int n) {}

int main()
{
	foo(0);
	foo(1); // 0, 1 은 같은 타입
			// foo(0), foo(1) 은 같은 함수 호출

	int2Type<0> t0;
	int2Type<1> t1; 

	//foo(t0);
	//foo(t1); // t0, t1은 다른 타입이므로
			 // foo(t0), foo(t1)은 다른 함수 호출


}*/