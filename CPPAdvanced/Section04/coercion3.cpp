/*class Animal {};
class Dog : public Animal {};

template<typename T> class smartptr
{
	T* ptr = nullptr;
public:
	smartptr() = default;
	smartptr(T* p) : ptr(p) {}

	//smartptr(const smartptr<T>& sp) {} // ���� Ÿ�Ը� ���� �� �ִ�.
	//smartptr(const smartptr<Dog>& sp) {} // smartptr<Dog> �� ���� �� �ִ�. 

	// ���ø� ������
	template<typename U>
	smartptr(const smartptr<U>& sp) : ptr(sp.ptr) {}

	template<typename T> friend class smartptr;
};

int main()
{
	smartptr<Dog> sp1(new Dog);
	smartptr<Animal> sp2 = sp1;
}*/