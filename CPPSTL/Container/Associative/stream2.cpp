/*#include <iostream>	// 표준 입출력
#include <fstream>	// 파일 입출력
#include <sstream>	// string 입출력
#include <string>

int main()
{
	//std::cout << "hello"; // 화면 출력

	//std::ofstream f("a.txt");
	//f << "hello"; // 파일 출력

	std::ostringstream oss;
	oss << "hello"; // oss 의 버퍼에 출력

	std::string s = oss.str();
	std::cout << s << std::endl; // "hello"

	int n = 10;
	// n의 값을 문자열로
	//char buf[10];
	//sprintf(buf, "n=%d", n);

	std::ostringstream oss2;
	oss2 << "n = " << n;

	std::string s3 = oss2.str();

	std::cout << s3 << std::endl;
}*/