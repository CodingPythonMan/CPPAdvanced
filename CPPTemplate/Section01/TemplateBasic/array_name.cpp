/*#include <stdio.h>

int main()
{
	int x[3] = { 1,2,3 };

	int(*p1)[3] = &x;
	int* p2 = x;

	printf("%p, %p\n", p1, p1 + 1);
	printf("%p, %p\n", p2, p2 + 1);

	// p1 : 배열의 주소, *p1 : 배열
	(*p1)[0] = 10;

	// p2 : 요소의 주소, (int*)
	*p2 = 10;
}*/