/*#include <iostream>

struct A
{
	int x;
	void fa() { std::cout << this << std::endl; }
};

struct B
{
	int y;
	void fb() { std::cout << this << std::endl; }
};

struct C : public A, public B
{
	int z;
	void fc() { std::cout << this << std::endl; }
};

int main()
{
	C cc;

	void(C:: * f)();

	std::cout << sizeof(f) << std::endl; // 16byte(64bit)

	f = &C::fb;
	(cc.*f)();	// f.�Լ��ּ�(&cc + f.this_offset)

	//void* p = f; // error
}*/