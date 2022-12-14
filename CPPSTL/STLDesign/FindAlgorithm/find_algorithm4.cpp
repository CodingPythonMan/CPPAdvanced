/*#include <iostream>
#include <algorithm>

template<typename T1, typename T2>
T1 efind(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
	{
		++first;
	}

	return first;// == last ? 0 : first;
}

int main()
{
	double x[10] = {1,2,3,4,5,6,7,8,9,10};

	double* p = std::find(x, x+10, 5);

	if (p == x+10)
		std::cout << "fail" << std::endl;
	else
		std::cout << "success : " << *p << std::endl;
}*/