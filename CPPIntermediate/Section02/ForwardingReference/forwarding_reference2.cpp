/*template<typename T> void f3(T& arg) {}

int main()
{
	int n = 0;

	// 1. ����ڰ� ���ø� ���ڸ� ���� �����ϴ� ���
	f3<int>(n);		// T : int		T& : int&		f3(int& arg) �Լ� ����
	f3<int&>(n);	// T : int&		T& : int& &		f3(int& arg) �Լ� ����
	f3<int&&>(n);	// T : int &&	T& : int&& &	f3(int& arg) �Լ� ����

	// 2. ����ڰ� ���ø� ���ڸ� �������� ���� ���
	//f3(0);	// error
	f3(n);	// ok
}*/