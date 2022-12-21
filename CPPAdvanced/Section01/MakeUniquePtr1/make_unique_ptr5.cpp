/*#include <iostream>
#include "default_delete.h"
#include "compressed_pair.h"

template <typename T, typename D = default_delete<T>> class unique_ptr
{
public:
	using pointer = T*;
	using element_type = T;
	using deleter_type = D;

	unique_ptr() : cpair(zero_and_variadic_arg_t{}) {}
	unique_ptr(std::nullptr_t) :cpair(zero_and_variadic_arg_t{}) {}
	explicit unique_ptr(pointer p) : cpair(zero_and_variadic_arg_t{}, p) {}
	unique_ptr(pointer p, const D& d) : cpair(one_and_variadic_arg_t{}, d, p) {}
	unique_ptr(pointer p, D&& d) :cpair(one_and_variadic_arg_t{},std::move(d), p) {}

	~unique_ptr()
	{
		if (cpair.getSecond())
		{
			cpair.getFirst()(cpair.getSecond());
		}
	}

	T& operator*() const { return *cpair.getSecond(); }
	pointer operator->() const { return cpair.getSecond(); }
private:
	compressed_pair<D, T*> cpair;
};

int main()
{
	unique_ptr<int> p1(new int);
	unique_ptr<int> p2(nullptr);
	unique_ptr<int> p3 = nullptr;

	unique_ptr<int>::element_type n;
	unique_ptr<int>::deleter_type d;
	unique_ptr<int>::pointer p;
}*/