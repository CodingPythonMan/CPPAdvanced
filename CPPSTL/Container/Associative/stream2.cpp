/*#include <iostream>	// ǥ�� �����
#include <fstream>	// ���� �����
#include <sstream>	// string �����
#include <string>

int main()
{
	//std::cout << "hello"; // ȭ�� ���

	//std::ofstream f("a.txt");
	//f << "hello"; // ���� ���

	std::ostringstream oss;
	oss << "hello"; // oss �� ���ۿ� ���

	std::string s = oss.str();
	std::cout << s << std::endl; // "hello"

	int n = 10;
	// n�� ���� ���ڿ���
	//char buf[10];
	//sprintf(buf, "n=%d", n);

	std::ostringstream oss2;
	oss2 << "n = " << n;

	std::string s3 = oss2.str();

	std::cout << s3 << std::endl;
}*/