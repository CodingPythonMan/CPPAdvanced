/*#include <iostream>

struct BM
{
	BM() { std::cout << "BM()" << std::endl; }
	~BM() { std::cout << "~BM()" << std::endl; }
};

struct DM
{
	//DM() { std::cout << "DM()" << std::endl; }
	DM(int) { std::cout << "DM(int)" << std::endl; }
	~DM() { std::cout << "~DM()" << std::endl; }
};

struct Base
{
	BM bm;
	//Base() { std::cout << "Base()" << std::endl; }
	Base(int) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};

struct Derived : public Base
{
	DM dm;
	Derived() : Base(0), dm(0) { std::cout << "Derived()" << std::endl; }
	Derived(int) : Base(0), dm(0) { std::cout << "Derived(int)" << std::endl; }
	~Derived() { std::cout << "~Derived()" << std::endl; }
};

int main()
{
	Derived d1;
}*/