/*template<typename T> class Complex
{
	T re, im;
public:
	Complex(T r = {}, T i = {}) : re(r), im(i) {}

	// �Ϲ����� ���� ������.
	//Complex(const Complex<T>& c) {}
	//Complex(const Complex<int>& c) {}
	
	// �Ϲ�ȭ�� ���� ������
	template<typename U>
	Complex(const Complex<U>& c);

	template<typename> friend class Complex;
};

template<typename T> template<typename U>
Complex<T>::Complex(const Complex<U>& c) 
				: re(c.re), im(c.im)
{
	
}

int main()
{
	Complex<int> c1(1, 1);		
	Complex<int> c2 = c1;		
	Complex<double> c3 = c1;	
}*/