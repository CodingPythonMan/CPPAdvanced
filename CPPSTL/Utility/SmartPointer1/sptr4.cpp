/*#include <iostream>
#include <memory>
#include "car.h"

int main()
{
	//std::shared_ptr<Car> p1(new Car[10], [](Car* p) {delete[] p; });

	//p1[0].Go(); // error

	//std::shared_ptr<Car> p1(new Car[10]);	// bug - delete[], [] 연산 없음.
	std::shared_ptr<Car[]> p1(new Car[10]); // delete[], [] 연산 있음.

	p1[0].Go();
}*/