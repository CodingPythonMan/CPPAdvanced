/*#include <iostream>
#include <memory>
#include "car.h"

int main()
{
	//std::shared_ptr<Car> wp; // use count 증가
	std::weak_ptr<Car> wp; // use count 증가
	{
		std::shared_ptr<Car> sp(new Car);
		wp = sp;
		std::cout << sp.use_count() << std::endl;
	}	// 대상 객체 파괴..

	if (wp.expired())
		std::cout << "destroy" << std::endl;
	else
	{
		std::cout << "not destroy" << std::endl;

		// weak_ptr 을 사용해서는 대상객체에 접근할 수 없다.
		//wp->Go(); // error

		// weak_ptr 을 가지고 다시 shared_ptr을 만들어야 한다.
		std::shared_ptr<Car> sp2 = wp.lock();

		if (sp2)
		{
			sp2->Go();
		}
	}
}*/