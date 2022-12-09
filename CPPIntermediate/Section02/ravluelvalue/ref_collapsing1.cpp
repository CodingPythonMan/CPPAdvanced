/*int main()
{
	int n = 3;
	int& lr = n;
	int&& rr = 3;
	//int&& ref2ref = lr; // error

	decltype(lr)& r1 = n ;	// int& & => int &
	decltype(lr)&& r2 = n ;	// int& && => int &
	decltype(rr)& r3 = n ;	// int&& & => int &
	decltype(rr)&& r4 = 3 ;	// int&& && => int &&
}*/