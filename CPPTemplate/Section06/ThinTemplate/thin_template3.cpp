/*// Thin Template
// �Լ��� ������ �����غ��ô�.
// 2���� �Լ� * 3���� Ÿ�� = 6 + ��� Ŭ���� �Լ� 2�� => 8�� �Լ�.

// T�� ������� �ʴ� ��� ����� ��� Ŭ������ ������.
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

// void*�� �ٷ� ����ϸ� ĳ������ �������� �ִ�.
// ĳ������ å������ �Ļ� Ŭ������ ���ø�����
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