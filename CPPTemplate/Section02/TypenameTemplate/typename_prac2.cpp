/*int p = 0;

class Test
{
public:
	// ...
	// enum {DWORD = 5};
	typedef int DWORD;
};

template<typename T>
typename T::DWORD foo(T t)
{
	// �Ʒ� ����
	//T::DWORD* p; // ��		: 5 * p 
				 // Ÿ��	: �������� p�� �����Ѵ�.

	//T::DWORD* p; // => ������ �ؼ�
	typename T::DWORD* p; // => Ÿ������ �ؼ�

	return 0;
}

int main()
{
	Test t;
	foo(t);
}*/