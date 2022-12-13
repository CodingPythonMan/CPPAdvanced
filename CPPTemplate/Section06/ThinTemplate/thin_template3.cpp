/*// Thin Template
// 함수의 개수를 생각해봅시다.
// 2개의 함수 * 3개의 타입 = 6 + 기반 클래스 함수 2개 => 8개 함수.

// T를 사용하지 않는 모든 멤버는 기반 클래스로 만들자.
class VectorBase
{
protected:
	void* buff;
	int sz;
public:
	int size() const {}
	bool empty() const {}
	void push_front(const void* a) {}
	void* front() {}
};

// void*를 바로 사용하면 캐스팅의 불편함이 있다.
// 캐스팅을 책임지는 파생 클래스를 템플릿으로
template<typename T> class Vector
{
public:
	int size() const { return VectorBase::size(); }
	bool empty() const { return VectorBase::empty(); }
	inline void push_front(const T& a) { VectorBase::push_front(static_cast<void*>(a)); }
	inline T& front() { return static_cast<T&>(VectorBase::front()); }
};

int main()
{
	Vector<int> v1;
	Vector<short> v2;
	Vector<double> v3;
}*/