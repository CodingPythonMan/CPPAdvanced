/*#include <iostream>
#include <memory>
#include "car.h"

void foo(Car* p) 
{
	std::cout << "Delete Car" << std::endl;
	delete p;
}

int main()
{
	// shared_ptr<Car> p(new Car); // delete

	//std::shared_ptr<Car> p(new Car, foo);
	std::shared_ptr<Car> p(new Car, [](Car* p) {delete p; });
	//std::shared_ptr<Car> p(new Car, 
		//[](Car* p) {delete p; },
		//MyAlloc<Car>());
}*/