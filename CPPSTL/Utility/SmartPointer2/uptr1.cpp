/*#include <iostream>
#include <memory>
#include "car.h"

int main()
{
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1; // ok. ���� ��� 2

	std::unique_ptr<Car> up1(new Car); // �ڿ� ����
	
	//std::unique_ptr<Car> up2 = up1; // error

	std::cout << sizeof(sp1) << std::endl;
	std::cout << sizeof(up1) << std::endl;
}*/