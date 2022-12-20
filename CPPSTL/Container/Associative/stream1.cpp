/*#include <iostream>	// 표준 입출력
#include <fstream>	// 파일 입출력
#include <sstream>	// string 입출력
#include <string>

int main()
{
	std::string s;
	//std::cin >> s;	// 표준 입력에서 한단어

	//std::ifstream fin("Container/Associative/stream.cpp");
	//fin >> s;	// 파일에서 한단어.

	std::istringstream iss("I am a boy");
	
	while (iss >> s)
		std::cout << s << std::endl;
}*/