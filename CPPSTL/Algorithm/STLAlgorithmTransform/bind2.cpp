/*#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

// 4�� �Լ�
void foo(int a, int b, int c, int d)
{
	printf("%d, %d, %d, %d\n", a, b, c, d);
}

int main()
{
	foo(1, 2, 3, 4);   // 4�� �Լ�..

	// 4�� �Լ� => 2������
	bind(&foo, 10, _2, _1, 20)(1, 2);

	// 4�� �Լ� => 3������
	bind(&foo, _3, _2, _1, 100)(30, 20, 10); // 10, 20, 30, 100

	// 4�� => ����
	bind(&foo, 1, 2, 3, 4)();

	modulus<int> m;
	std::cout << m(10, 3) << std::endl; // 10 % 3

	bind(m, 10, 3)(); // 10 % 3
	bind(m, _1, 3)(7); // 7 % 3

	int x[3] = { 1,2,3 };

	// 3�� ����� �ƴ� �� ã��
	auto p = find_if(x, x + 3, bind(m, _1, 3));

	std::cout << *p << std::endl; // 1
}*/