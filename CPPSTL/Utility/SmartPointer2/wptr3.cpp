/*#include <iostream>
#include <string>
#include <memory>

struct People
{
	People(std::string s) : name(s) {}
	~People() { std::cout << "~People : " << name << std::endl; }

	std::string name;
	std::weak_ptr<People> bf;
};

int main()
{
	std::shared_ptr<People> p1(new People("KIM"));
	//{
		std::shared_ptr<People> p2(new People("LEE"));

		p1->bf = p2;
		p2->bf = p1;
	//}// p2 ÀÚ¿ø ÆÄ±«...

	std::shared_ptr<People>sp2 = p1->bf.lock();

	if (sp2)
		std::cout << sp2->name << std::endl;
	else
		std::cout << "destroy bf" << std::endl;
}*/