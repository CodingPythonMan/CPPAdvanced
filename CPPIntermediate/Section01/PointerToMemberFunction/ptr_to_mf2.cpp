/*#include <functional>

class X
{
public:
	void mf1(int a) {}
};
void foo(int a) {}

int main()
{
	X obj;

	void(*f1)(int) = &foo;
	void(X:: * f2)(int) = &X::mf1;

	f1(10);			// �Ϲ� �Լ� ������ ���
	(obj.*f2)(10);	// ��� �Լ� ������ ���

	//f2(&obj, 10); // �̷��� ��� �����ϸ� ���� ������?
				  // uniform call syntax ����
				  // ä�� �ȵ�.
	std::invoke(f1, 10); // f1(10)
	std::invoke(f2, obj, 10);
	std::invoke(f2, &obj, 10);

	auto f3 = std::mem_fn(&X::mf1);
	f3(obj, 10);
	f3(&obj, 10);
}*/