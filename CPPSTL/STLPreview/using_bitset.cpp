/*#include <iostream>
#include <bitset>
#include <string>

int main()
{
	//std::bitset<8> b1 = 0xf0;			// 11110000
	std::bitset<8> b1 = 0b11110000;		// 11110000

	b1.set();			// 모두 1로
	b1.reset();			// 모두 0으로

	b1.set(1);			// 0000 0010
	b1[2] = 1;			// 0000 0110
	b1[0].flip();		// 0000 0111

	if (b1.test(1) == true) {}
	if (b1[1] == true) {}

	if (b1.none() == true) {}

	int n2 = b1.count();
	std::cout << n2 << std::endl;		// 3

	std::bitset<8> b2 = 0b00001111;
	std::bitset<8> b3 = 0b11110000;
	std::bitset<8> b4 = b2 | b3;

	std::cout << b4 << std::endl;

	std::cout << b1 << std::endl;

	std::string s = b1.to_string();
	unsigned long n = b1.to_ulong();

	std::cout << s << std::endl;
	std::cout << n << std::endl;
}*/