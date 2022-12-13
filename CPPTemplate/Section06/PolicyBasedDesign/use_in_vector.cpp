/*// STL 의 vector 를 생각해 봅시다.
// 메모리 할당기
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
		// 버퍼 재할당이 필요 하다면 어떻게 할까요?
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