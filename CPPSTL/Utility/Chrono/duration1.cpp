/*#include <iostream>
#include <chrono>

int main()
{
	//double distance = 3;	// 3m, 3km, 3cm

	std::chrono::duration<double, std::ratio<1, 1>> d1(3);
	//std::chrono::duration<double, std::ratio<1, 1000>> d2(d1);
	//std::chrono::duration<double, std::ratio<1000, 1>> d3; // km
	
	std::chrono::duration<double, std::milli> d2(d1);
	std::chrono::duration<double, std::kilo> d3(d1);

	std::cout << d2.count() << std::endl; // 3000
	std::cout << d3.count() << std::endl; // 0.003

	using MilliMeter = std::chrono::duration<double, std::milli>;
	using KiloMeter = std::chrono::duration<double, std::kilo>;
	using Meter = std::chrono::duration<double, std::ratio<1,1>>;

	Meter m(3);
	KiloMeter km(m);

	std::cout << km.count() << std::endl; // 0.003
}*/