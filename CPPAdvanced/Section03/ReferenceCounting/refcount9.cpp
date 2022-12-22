/*#include <iostream>
#include <atomic>
#include <memory>

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

template<typename T> class AutoPtr
{
	T* obj;
public:
	explicit AutoPtr(T* p = nullptr) : obj(p) { if (obj) obj->addRef(); }
	AutoPtr(const AutoPtr<T>& ap) : obj(ap.obj) { if (obj) obj->addRef(); }

	~AutoPtr() { if (obj) obj->release(); }
};

int main()
{
	std::shared_ptr<Truck> sp1(new Truck);
	std::shared_ptr<Truck> sp2 = sp1;

	Truck* p1 = new Truck;
	std::shared_ptr<Truck> sp3(p1);
	std::shared_ptr<Truck> sp4(p1);
}*/