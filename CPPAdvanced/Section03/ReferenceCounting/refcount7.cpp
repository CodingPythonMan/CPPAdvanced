/*#include <iostream>
#include <atomic>

class RefCountBase
{
protected:
	mutable std::atomic<int> refcnt{0};
public:
	void addRef() const 
	{ 
		//++refcnt; // refcnt.fetch_add(1, std::memory_order_seq_cst);
		refcnt.fetch_add(1, std::memory_order_relaxed);
	}
};

template <typename T>
class RefCount : public RefCountBase
{
public:
	void release() const
	{
		int ret = refcnt.fetch_sub(1, std::memory_order_acq_rel);
		if (--refcnt == 0)
			delete static_cast<const T*>(this);
	}
protected:
	~RefCount() { std::cout << "~RefCount" << std::endl; }
};

class Truck : public RefCount<Truck>{};
class Car : public RefCount<Car>{};

int main()
{
	const Truck* p1 = new Truck;
	p1->addRef();
	p1->release();
}*/