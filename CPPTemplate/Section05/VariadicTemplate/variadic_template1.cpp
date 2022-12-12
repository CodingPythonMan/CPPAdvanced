/*// 가변인자 클래스 템플릿
template<typename ... Types> class tuple
{

};

// 가변인자 함수 템플릿
template<typename ... Types>
void foo(Types ... args)
{
	
}

int main()
{
	tuple<> t0;
	tuple<int> t1;
	tuple<int, char> t2;

	foo();
	foo(1);
	foo(1, 3.4, "A");
}*/