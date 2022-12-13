/*template<typename T, typename ThreadModel = NoLock>
class List
{
	ThreadModel tm;
public:
	void push_front(const T& a)
	{
		tm.lock();

		tm.unlock();
	}
};

class NoLock
{
public:
	inline void lock() {}
	inline void unlock() {}
};

class MutexLock
{
public:
	inline void lock() {}
	inline void unlock() {}
};

List<int, NoLock> s;

int main()
{
	s.push_front(10);
}*/