/*template<bool b, typename T = void> struct enable_if
{

};

template<typename T> struct enable_if<true, T>
{
	typedef T type;
};

int main()
{
	enable_if<true, int>::type t0;		// int
	//enable_if<true>::type t1;			// void

	//enable_if<false, int>::type t2;	// error, type 이 없다.
	//enable_if<false>::type t3;		// error, type 이 없다.
}*/