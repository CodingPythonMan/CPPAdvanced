/*// 메모리 할당기
template<typename T> class allocator
{
public:
	T* allocate(int sz) { return new T[sz]; }
	void deallocate(T* p) { delete[] p; }

	//
	template<typename U> struct rebind
	{
		typename allocator<U> other;
	};
};

// rebind
template<typename T, typename Ax = allocator<T>> class list
{
	struct NODE
	{
		T data;
		NODE* next, * prev;
	};
	//Ax ax;		// allocator<int>
	//allocator<int>::rebind<NODE>::other ax;		// allocator<NODE> ax;
	typename Ax::template rebind<NODE>::other ax;
public:
	void push_front(const T& a)
	{
		ax.allocate(1);
	}
};

int main()
{
	
}*/