/*#include <iostream>
#include <iterator>

int main()
{
	char a = 0, b = 0, c = 0;

	// x \t y \t z
	//std::cin >> a;	// x
	//std::cin >> b;	// y
	//std::cin >> c;	// z

	a = std::cin.rdbuf()->sgetc();	// x
	b = std::cin.rdbuf()->snextc();	// \t
	c = std::cin.rdbuf()->snextc();	// y

	std::cout << a << ", " << b << ", " << c << std::endl;
}*/