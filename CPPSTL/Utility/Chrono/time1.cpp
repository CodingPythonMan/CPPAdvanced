/*#include <iostream>
#include <chrono>

int main()
{
	//using seconds = std::chrono::duration<int>; // duration<int, ratio<1,1>>
	//using minutes = std::chrono::duration<int, std::ratio<60, 1>>;
	//using hours = std::chrono::duration<int, std::ratio<3600>>; // ratio<3600, 1>
	//using milliseconds = std::chrono::duration<int, std::milli>;

	std::chrono::hours h(1);
	std::chrono::minutes m(h);
	std::chrono::seconds s(h);

	std::cout << m.count() << std::endl;
	std::cout << s.count() << std::endl;

	//std::chrono::hours h2(s); // error
	std::chrono::hours h2 = std::chrono::duration_cast<std::chrono::hours>(s); // error

	std::cout << h2.count() << std::endl;

	using days = std::chrono::duration<int, std::ratio<3600 * 24, 1>>;

	days d(1);

	std::chrono::minutes m2(d);

	std::cout << m2.count() << std::endl;
}*/