#include <iostream>
#include <memory>

class Car
{
	int color;
public:
	~Car() { std::cout << "~Car()" << std::endl; }
	void Go() { std::cout << "Car go" << std::endl; }
};

int main()
{
	// Car* p = new Car;
	std::shared_ptr<Car> p(new Car);

	//if (½ÇÆÐ) return;
	p->Go();		// p.operator->()
	(*p).Go();		// p.operator*()

	// delete p;
}