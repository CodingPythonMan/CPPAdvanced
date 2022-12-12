/*int p = 0;

class Test
{
public:
	// ...
	// enum {DWORD = 5};
	typedef int DWORD;
};

template<typename T>
typename T::DWORD foo(T t)
{
	// 아래 한줄
	//T::DWORD* p; // 값		: 5 * p 
				 // 타입	: 지역변수 p를 선언한다.

	//T::DWORD* p; // => 값으로 해석
	typename T::DWORD* p; // => 타입으로 해석

	return 0;
}

int main()
{
	Test t;
	foo(t);
}*/