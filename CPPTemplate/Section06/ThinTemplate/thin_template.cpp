/*// Thin Template
// 함수의 개수를 생각해봅시다.
// 4개의 함수 * 3개의 타입 => 12개 함수
template<typename T> class Vector
{
	T* buff;
	int sz;
public:
	int size() const {}
	bool empty() const {}
	void push_front(const T& a) {}
	T& front() {}
};

int main()
{
	Vector<int> v1;
	Vector<short> v2;
	Vector<double> v3;
}*/