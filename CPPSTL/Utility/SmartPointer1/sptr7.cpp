/*#include <iostream>
#include <memory>
#include "car.h"

int main()
{
	Car* p = new Car;
	std::shared_ptr<Car> sp1(p);	// 力绢 喉钒 积己
	std::shared_ptr<Car> sp2(sp1);	// 力绢 喉钒 积己
	
	std::shared_ptr<Car> sp3(new Car);	// RAII
	std::shared_ptr<Car> sp3 = std::make_shared<Car>();
}*/