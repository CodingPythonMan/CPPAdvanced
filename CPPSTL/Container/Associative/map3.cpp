/*#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>

int main()
{
	std::map<std::string, std::list<int>> index;
	std::ifstream f("Container/Associative/test.txt");
	int lineno = 0;
	std::string s;

	while (getline(f, s)) // 파일에서 한줄 읽기
	{
		lineno++;
		std::istringstream iss(s);
		std::string word;
		while (iss >> word)
		{
			index[word].push_back(lineno);
		}
	}

	//--------------------------------
	auto p = begin(index);

	while (p != end(index))
	{
		std::cout << p->first << " : "; // 단어 출력
		for (auto n : p->second)
			std::cout << n << ", ";

		std::cout << std::endl;
		++p;
	}
}*/