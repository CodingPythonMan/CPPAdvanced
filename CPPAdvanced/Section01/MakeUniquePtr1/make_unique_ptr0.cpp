/*#include <iostream>
#include <memory>

class Car
{
public:
	~Car() { std::cout << "~Car" << std::endl; }
	void Go() { std::cout << "Car Go" << std::endl; }
};
int main()
{
	//	std::unique_ptr<Car> p = new Car; // error.
	std::unique_ptr<Car> p(new Car);  // explicit constructor

	// �����Ϳ� �����ϰ� * �� -> �� Car �� ��� ���� ����
	p->Go();
	(*p).Go();

	// ���� �Ҽ� ������, �̵��� ����
	//std::unique_ptr<Car> p1 = p; // error
	std::unique_ptr<Car> p2 = std::move(p); // ok

	// member function
	Car* cp = p2.get();
	p2.reset();
}*/