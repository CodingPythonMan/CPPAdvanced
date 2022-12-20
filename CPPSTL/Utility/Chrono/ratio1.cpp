/*#include <iostream>
#include <ratio>

template<intmax_t _Nx, intmax_t _Dx = 1>
struct ratio
{
	static constexpr intmax_t num = _Nx;
	static constexpr intmax_t den = _Dx;

	typedef ratio<num, den> type;
};

int main()
{
	std::ratio<2, 4> r1; // 2/4 => 1/2

	std::cout << sizeof(r1) << std::endl; // 1

	std::cout << r1.num << std::endl;
	std::cout << r1.den << std::endl;

	std::cout << std::ratio<2, 4>::num << std::endl;
	std::cout << std::ratio<2, 4>::den << std::endl;
}*/