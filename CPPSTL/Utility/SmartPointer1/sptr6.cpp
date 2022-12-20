/*#include <iostream>
#include <memory>
#include "car.h"

void* operator new(size_t sz)
{
	std::cout << "new sz : " << sz << std::endl;
	return malloc(sz);
}

int main()
{
	//std::shared_ptr<Car> p1(new Car);
	
	//std::shared_ptr<Car> p1 = std::make_shared<Car>();
	//std::shared_ptr<Car> p1(std::make_shared<Car>());
	
	//f(std::shared_ptr<Car>(new Car), foo());
	//f(std::make_shared<Car>(), foo());

	//std::shared_ptr<Car> p1 = std::allocate_shared<Car>(MyAlloc<Car>());
}*/