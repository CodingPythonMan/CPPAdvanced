/*template<typename T> void f4(T&& arg) {}

int main()
{
	int n = 0;

	// 1. ����ڰ� ���ø� ���ڸ� ���� �����ϴ� ���
	f4<int>(0);		// T : int		T&& : int&		f4(int&& arg) �Լ� ����
	f4<int&>(n);	// T : int&		T&& : int& &&	f4(int& arg) �Լ� ����
	f4<int&&>(0);	// T : int &&	T&& : int&& &&	f4(int&& arg) �Լ� ����

	// 2. ����ڰ� ���ø� ���ڸ� �������� ���� ���
	f4(n);	// T : int&		f4(int& arg)
	f4(0);	// T : int		f4(int&& arg)
}*/