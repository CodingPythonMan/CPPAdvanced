/*#include <iostream>
#include <memory>

void foo(int* p)
{
	std::cout << "foo" << std::endl;
	delete p;
}

struct Deleter
{
	void operator()(int* p) const
	{
		delete p;
	}
};

int main()
{
	std::shared_ptr<int> sp(new int, foo);

	// 1. 함수 객체 사용
	//std::unique_ptr<int, Deleter> up(new int);

	// 2. 함수 포인터 사용
	//std::unique_ptr<int, void(*)(int*)> up(new int, foo);
	
	// 3. 람다 표현식 사용
	auto f = [](int* p) {delete p; std::cout << "lambda" << std::endl; };
	std::unique_ptr<int, decltype(f)> up(new int, f);

	std::unique_ptr<int[]> up(new int[10]);
}*/