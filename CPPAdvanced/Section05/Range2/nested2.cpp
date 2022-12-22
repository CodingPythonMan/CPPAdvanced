/*#include <vector>
#include <iostream>
#include <ranges>

template<typename T> class take_view
{
	std::ranges::ref_view<T> rng;
	std::size_t count;
public:
	take_view(T& r, std::size_t c)
		: rng(r), count(c) {}

	auto begin() { return rng.begin(); }
	auto end() { return rng.begin() + count; }
};

template<typename T> class reverse_view
{
	std::ranges::ref_view<T> rng;
public:
	reverse_view(T& r) : rng(r) {}

	auto begin() { return std::make_reverse_iterator(rng.end()); }
	auto end() { return std::make_reverse_iterator(rng.begin()); }
};

int main()
{
	std::vector v = { 1,2,3 };

	reverse_view rv(v);
	take_view tv(rv, 2);

	//take_view tv(reverse_view(v), 2);

	for (auto e : tv)
		std::cout << e << std::endl;

	// take_view tv1(v, 3); // ref_view<vector>�� ����� ����
	// take_view tv2(rv, 3); // ref_view<reverse_view>�� �ƴ϶�
							 // rv (reverse_view)�� ���纻�� ����� ����
}*/