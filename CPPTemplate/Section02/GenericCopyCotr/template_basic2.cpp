/*template<typename T> class Complex
{
	T re, im;
public:
	Complex(T a = {}, T b = {}) : re(a), im(b) {}

	T getReal() const;

	static int cnt;

	// Å¬·¡½º ÅÛÇÃ¸´ÀÇ ¸â¹öÇÔ¼ö ÅÛÇÃ¸´
	template<typename U> T func(const U& c);
};

template<typename T> template<typename U> 
T Complex<T>::func(const U& c)
{
}

template<typename T> int Complex<T>::cnt = 0;

template<typename T> 
T Complex<T>::getReal() const
{
	return re;
}

int main()
{
	//Complex c1; // error
	Complex<int> c2; // ok
}*/