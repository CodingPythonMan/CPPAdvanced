/*template<typename T> void foo(T a) {}

template<typename T, typename U> struct pair
{
	T first;
	U second;
	pair(const T& a, const U& b) : first(a), second(b) {}
};

// �Լ� ���ø�
template<typename T, typename U>
pair<T, U> make_pair(const T& a, const U& b)
{
	return pair<T, U>(a, b);
}

int main()
{
	pair<int, double> p(1, 3.4);
	foo(p);

	foo(pair<int, double>(1, 3.4)); // �ӽð�ü�� ����..
	foo(make_pair(1, 3.4));

	//foo(make_tuple(1, 3.4, 1));
}*/