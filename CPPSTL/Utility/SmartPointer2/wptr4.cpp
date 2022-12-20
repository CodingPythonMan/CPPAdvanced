/*#include <iostream>
#include <memory>
#include "car.h"

int main()
{
	std::weak_ptr<Car> wp;

	{
		std::shared_ptr<Car> sp(new Car);

		wp = sp;
	}// ´ë»ó °´Ã¼ ÆÄ±«

	if (wp.expired()) {}
}*/