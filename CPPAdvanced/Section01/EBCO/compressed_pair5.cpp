/*#include <iostream>
#include <string>
#include <type_traits>

class Empty final{};

struct one_and_variadic_arg_t {};
struct zero_and_variadic_arg_t {};

template<typename T1,
	typename T2,
	bool = std::is_empty_v<T1> && !std::is_final_v<T1>> 
struct compressed_pair;

template<typename T1, typename T2>
struct compressed_pair<T1, T2, false>
{
	T1 first;
	T2 second;

	constexpr T1& getFirst() noexcept { return first; }
	constexpr T2& getSecond() noexcept { return second; }
	constexpr const T1& getFirst() const noexcept { return first; }
	constexpr const T2& getSecond() const noexcept { return second; }

	//compressed_pair(const T1& arg1, const T2& arg2)
	//	: first(arg1), second(arg2) {}

	template<typename A1, typename ... A2>
	compressed_pair(one_and_variadic_arg_t, A1&& arg1, A2&& ... arg2) noexcept(
		std::conjunction_v<std::is_nothrow_constructible<T1, A1>, std::is_nothrow_constructible<T1, A2...>>)
		: first(std::forward<A1>(arg1)), second(std::forward<A2>(arg2)...) {}

	template<typename ... A2>
	compressed_pair(zero_and_variadic_arg_t, A2&& ... arg2) noexcept(
		std::conjunction_v < std::is_nothrow_default_constructible<T1>, std::is_nothrow_constructible<T1, A2...>>)
		: first(), second(std::forward<A2>(arg2)...) {}
};

// T1 �� empty �� ���
template<typename T1, typename T2>
struct compressed_pair<T1, T2, true> : public T1
{
	T2 second;

	constexpr T1& getFirst() noexcept { return *this; }
	constexpr T2& getSecond() noexcept { return second; }
	constexpr const T1& getFirst() const noexcept { return *this; }
	constexpr const T2& getSecond() const noexcept { return second; }

	//compressed_pair(const T1& arg1, const T2& arg2)
	//	: first(arg1), second(arg2) {}

	template<typename A1, typename ... A2>
	compressed_pair(one_and_variadic_arg_t, A1&& arg1, A2&& ... arg2) noexcept(
		std::conjunction_v<std::is_nothrow_constructible<T1, A1>, std::is_nothrow_constructible<T1, A2...>>)
		: T1(std::forward<A1>(arg1)), second(std::forward<A2>(arg2)...) {}

	template<typename ... A2>
	compressed_pair(zero_and_variadic_arg_t, A2&& ... arg2) noexcept(
		std::conjunction_v < std::is_nothrow_default_constructible<T1>, std::is_nothrow_constructible<T1, A2...>>)
		: T1(), second(std::forward<A2>(arg2)...) {}
};

int main()
{
	compressed_pair<int, int> cp1(one_and_variadic_arg_t{}, 1,1);
	compressed_pair<Empty, int> cp2(zero_and_variadic_arg_t{}, 1);
	compressed_pair<Empty, int> cp3(zero_and_variadic_arg_t{});

	std::cout << sizeof(cp1) << std::endl; // 8
	std::cout << sizeof(cp2) << std::endl; // 4
}*/