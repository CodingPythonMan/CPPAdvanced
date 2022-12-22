/*#include <iostream>

template <typename T>
class RefCount
{
	mutable int refcnt = 0;	// 상수 멤버 함수에서도 수정가능한 멤버
public:
	void addRef() const { ++refcnt; }

	//void release()	// void release(RefCount* this)
	void release() const// void release(const RefCount* this)
	{
		if (--refcnt == 0)
			//delete static_cast<T*>(this);	// const RefCount* => Truck*
			//delete static_cast<T*>(const_cast<RefCount*>(this));	// ok
			delete static_cast<const T*>(this);	// ok, 근데 문제 소지 있음.
	}
protected:
	~RefCount() { std::cout << "~RefCount" << std::endl; }
};

class Truck : public RefCount<Truck>
{
public:
	~Truck() { std::cout << "~Truck" << std::endl; }
};

int main()
{
	const Truck* p1 = new Truck;
	p1->addRef();
	p1->release();
}*/