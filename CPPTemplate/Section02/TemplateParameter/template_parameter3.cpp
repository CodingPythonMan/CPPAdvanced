/*// 1. ������ ���(�Ǽ� �ȵ�.)
template<int N> class Test1 {};

// 2. enum ���
enum Color { red = 1, green = 2 };
template<Color> class Test2 {};

// 3. ������ : �������� �ּ� �ȵ�... �������� ����
//				no linkage �� ������ ���� �ּҴ� �ȵ�...
template<int*> class Test3 {};

int x = 0;

// 4. �Լ� ������..
template<int(*)(void)> class Test4 {};

int main()
{
	int n = 10;
	
	Test1<10> t1; // ok
	//Test1<n> t2 // error ���� �ȵ�.
	Test2<red> t3; // ok

	//Test3<&n> t4; // error;
	Test3<&x> t5; // ok

	Test4<&main> t6; // ok
}*/