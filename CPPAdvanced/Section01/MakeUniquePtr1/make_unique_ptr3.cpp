/*#include <iostream>
#include "Car.h"

template<typename T> struct default_delete
{
	//void operator()(void* p) const
	void operator()(T* p) const
	{
		std::cout << "delete" << std::endl;
		delete p;
	}
};

template <typename T, typename D = default_delete<T>> class unique_ptr
{
	T* pobj;
	D del;
public:
	explicit unique_ptr(T* p) : pobj(p) {}

	unique_ptr(T* p, const D& d) : pobj(p), del(d) {} // �������� ���� ����.
	unique_ptr(T* p, D&& d) : pobj(p), del(std::move(d)) {}

	~unique_ptr()
	{
		//D del;		// error. ����ǥ������ ����� Ÿ���� ����Ʈ �����ڰ� ����.
		del(pobj);
	}

	T& operator*() const { return *pobj; }
	T* operator->() const { return pobj; }
};

int main()
{
	// error, ���ø����ڴ� Ÿ���� �ʿ�, ����ǥ������ ����� ��ü...
	//unique_ptr<int, [](int* p) {free(p); } > p1(static_cast<int*>(malloc(sizeof(int))));
	
	// C++ 17������ ����ǥ������ �򰡵��� ���� ǥ���Ŀ� ���� �� ����.
	//unique_ptr<int, decltype([](int* p) {free(p); }) > p1(static_cast<int*>(malloc(sizeof(int))));

	auto del = [](int* p) { free(p); };
	unique_ptr<int, decltype(del) > p1(static_cast<int*>(malloc(sizeof(int))), del);
	unique_ptr<int, decltype(del) > p2(static_cast<int*>(malloc(sizeof(int))), std::move(del));
}*/