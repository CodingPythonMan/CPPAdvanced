/*class X
{
public:
	void mf1(int a) {}			// void mf1(X* this, int a){}
	static void mf2(int a) {}
};

void foo(int a) {}

int main()
{
	void(*f1)(int) = &foo;		// ok
	//void(*f2)(int) = &X::mf1;	// error
	void(*f3)(int) = &X::mf2;	// ok.

	void(X:: * f2)(int) = &X::mf1; // ok

	f1(10); // ok. �Ϲ��Լ� �����ͷ� �Լ� ȣ��.
	//f2(10); // error. ��ü�� �ʿ��ϴ�.

	X obj;
	//obj.f2(10); // error. f2 ��� ����� ã�� �ȴ�.

	// pointer to member ������ ���
	//obj.*f2(10); // error. ������ �켱���� ����
	(obj.*f2)(10); // ok
}*/