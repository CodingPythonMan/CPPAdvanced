/*#include <iostream>

//template<class T>
//T* Alloc(std::size_t sz)
//{
	//return new T[sz];
//}

struct Alloc
{
	std::size_t size;

	Alloc(std::size_t sz) : size(sz) {}

	template<class T>
	operator T* () { return new T[size]; }
};

int main()
{
	int* p1 = Alloc(10);		// �ӽð�ü.operator int*()
	double* p2 = Alloc(10);
}*/