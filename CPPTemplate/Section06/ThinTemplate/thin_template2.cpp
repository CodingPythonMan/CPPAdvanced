/*// Thin Template
// 함수의 개수를 생각해봅시다.
// 2개의 함수 * 3개의 타입 = 6 + 기반 클래스 함수 2개 => 8개 함수.

// T를 사용하지 않는 모든 멤버는 기반 클래스로 만들자.
class VectorBase
{
protected:
	int sz;
public:
	int size() const {}
	bool empty() const {}
};

template<typename T> class Vector
{
	T* buff;
public:
	void push_front(const T& a) {}
	T& front() {}
};

int main()
{
	Vector<int> v1;
	Vector<short> v2;
	Vector<double> v3;
}*/