/*#include <iostream>
#include <memory>
#include "car.h"

int main()
{
	//std::shared_ptr<Car> wp; // use count ����
	std::weak_ptr<Car> wp; // use count ����
	{
		std::shared_ptr<Car> sp(new Car);
		wp = sp;
		std::cout << sp.use_count() << std::endl;
	}	// ��� ��ü �ı�..

	if (wp.expired())
		std::cout << "destroy" << std::endl;
	else
	{
		std::cout << "not destroy" << std::endl;

		// weak_ptr �� ����ؼ��� ���ü�� ������ �� ����.
		//wp->Go(); // error

		// weak_ptr �� ������ �ٽ� shared_ptr�� ������ �Ѵ�.
		std::shared_ptr<Car> sp2 = wp.lock();

		if (sp2)
		{
			sp2->Go();
		}
	}
}*/