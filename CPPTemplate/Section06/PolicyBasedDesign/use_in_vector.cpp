/*// STL �� vector �� ������ ���ô�.
// �޸� �Ҵ��
template<typename T> class allocator
{
public:
	T* allocate() {}
	void deallocate() {}
};

template<typename T, typename Ax = allocator<T>> class vector
{
	T* buff;
	Ax ax;
public:
	void resize(int n)
	{
		// ���� ���Ҵ��� �ʿ� �ϴٸ� ��� �ұ��?
		// new, malloc, calloc, win32 api, linux system call
		T* p = ax.allocate(n);
		ax.deallocate(p);
	}
};

int main()
{
	//vector<int, MyAlloc<int>> v(10);
	//v.resize(20);
}*/