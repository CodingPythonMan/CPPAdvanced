/*#include <iostream>
#include <memory>
#include "car.h"

int main()
{
	//std::shared_ptr<Car> p1(new Car[10], [](Car* p) {delete[] p; });

	//p1[0].Go(); // error

	//std::shared_ptr<Car> p1(new Car[10]);	// bug - delete[], [] ���� ����.
	std::shared_ptr<Car[]> p1(new Car[10]); // delete[], [] ���� ����.

	p1[0].Go();
}*/