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

	// 1. �Լ� ��ü ���
	//std::unique_ptr<int, Deleter> up(new int);

	// 2. �Լ� ������ ���
	//std::unique_ptr<int, void(*)(int*)> up(new int, foo);
	
	// 3. ���� ǥ���� ���
	auto f = [](int* p) {delete p; std::cout << "lambda" << std::endl; };
	std::unique_ptr<int, decltype(f)> up(new int, f);

	std::unique_ptr<int[]> up(new int[10]);
}*/