/*#include <iostream>

struct Empty {};

// Empty �� 1��° ����� �����ϴ� ���
struct Data1
{
	Empty e;
	int data;
};

// Empty �� ���� ��� �޴� ���
struct Data2 : public Empty
{
	int data;
};

int main()
{
	std::cout << sizeof(Data1) << std::endl;
	std::cout << sizeof(Data2) << std::endl;
}*/