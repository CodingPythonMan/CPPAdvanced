/*#include <iostream>
#include <memory>
#include "car.h"

int main()
{
	int a = 0;	// copy initialization
	int a(0);	// direct initialization

	//std::shared_ptr<Car> p = new Car;	// error
	std::shared_ptr<Car> p(new Car);	// ok

	std::shared_ptr<Car> p1(new Car);

	std::shared_ptr<Car> p2 = p1;
}*/