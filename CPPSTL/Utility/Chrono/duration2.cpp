/*#include <iostream>
#include <chrono>

int main()
{
	using MilliMeter = std::chrono::duration<int, std::milli>;
	using KiloMeter = std::chrono::duration<int, std::kilo>;
	using Meter = std::chrono::duration<int, std::ratio<1,1>>;

	Meter m(400);		// 600m
	MilliMeter mm(m);	// 600000
	//KiloMeter km(m);	// 0.6 => 0 �Ǵ� 1 error

	//KiloMeter km = std::chrono::duration_cast<KiloMeter>(m); // ����.
	KiloMeter km = std::chrono::round<KiloMeter>(m); // ����.

	std::cout << mm.count() << std::endl; // 600000
	std::cout << km.count() << std::endl; 
}*/