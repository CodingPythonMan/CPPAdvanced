/*#include <iostream>
#include <string>
#include <memory>

struct People
{
	People(std::string s) : name(s) {}
	~People() { std::cout << "~People : " << name << std::endl; }

	std::string name;
	//std::shared_ptr<People> bf; // best friend
	People* bf; // Raw Pointer : ���� ����� �������� �ʴ´�.
				// ���� : ��� ��ü�� �ı��Ǿ����� �� �� ����.
				// weak_ptr
};

int main()
{
	std::shared_ptr<People> p1(new People("KIM"));
	{
		std::shared_ptr<People> p2(new People("LEE"));

		p1->bf = p2.get();
		p2->bf = p1.get();
	}
	
	if (p1->bf != 0)
	{
		std::cout << p1->bf->name << std::endl;
	}
}*/