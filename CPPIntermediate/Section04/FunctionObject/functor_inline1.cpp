/*int add1(int a, int b)
{
	return a + b;
}

inline int add2(int a, int b)
{
	return a + b;
}

int main()
{
	int ret1 = add1(1, 2); // ȣ��
	int ret2 = add2(1, 2); // ġȯ

	int(*f)(int, int) = &add2;

	//	if ( ������Է� == 1) f = &add1;

	f(1, 2); // ȣ��
}*/