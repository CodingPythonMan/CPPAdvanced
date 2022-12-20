/*#include <iostream>
#include <memory>
#include "car.h"

int main()
{
	std::shared_ptr<Car> p1(new Car);

	p1->Go();	// Car ÀÇ ¸â¹ö Á¢±Ù.
	
	Car* p = p1.get();
	std::cout << p << std::endl;

	std::shared_ptr<Car> p2 = p1; // 2
	std::cout << p1.use_count() << std::endl;

	// p1 = new Car; // error
	p1.reset(new Car); // ok
	p1.reset();
	p1.swap(p2);
}*/