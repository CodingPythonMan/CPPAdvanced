/*template<int N> struct int2Type
{
	static constexpr int value = N;
};

void foo(int n) {}

int main()
{
	foo(0);
	foo(1); // 0, 1 �� ���� Ÿ��
			// foo(0), foo(1) �� ���� �Լ� ȣ��

	int2Type<0> t0;
	int2Type<1> t1; 

	//foo(t0);
	//foo(t1); // t0, t1�� �ٸ� Ÿ���̹Ƿ�
			 // foo(t0), foo(t1)�� �ٸ� �Լ� ȣ��


}*/