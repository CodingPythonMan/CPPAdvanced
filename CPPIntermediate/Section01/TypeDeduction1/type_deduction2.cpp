/*#include <iostream>
//#include "cppmaster.h"

template<typename T> void foo(T arg)
{
	//std::cout << typeid(T).name() << std::endl;
	//std::cout << __FUNCTION__ << std::endl; // �̸��� �����ִ°� �ƴϴ�.
	//std::cout << __PRETTY_FUNCTION__ << std::endl;// ǥ���� �ƴ϶� g++ �� ����
	std::cout << __FUNCSIG__ << std::endl; // g++ ��������
	//LOG_FUNCTION_NAME(); // ���������� ���� include
}

int main()
{
	int n = 0;
	//foo(n);		// T = int

	foo<const int&>(n); // T=const int&
}*/