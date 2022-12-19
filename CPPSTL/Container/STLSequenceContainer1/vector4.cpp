/*#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <fstream>

struct FindChar
{
	std::string data;
	FindChar(std::string s) : data(s) {}
	
	bool operator()(char c) const
	{
		auto p = find(begin(data), end(data), c);

		return p != end(data);
	}
};

int main()
{
	std::vector<std::list<int>> h(10);
	h[0].push_back(10);
	h[0].push_back(10);

	std::vector<std::string> v;

	std::ifstream f("Container/STLSequenceContainer1/vector4.cpp");

	std::string s;

	while (getline(f, s))
		v.push_back(s);

	//--------------------------------

	//reverse(begin(v), end(v));
	for (int i = 0; i < v.size(); i++)
	{
		//reverse(begin(v[i]), end(v[i]));
		//replace(begin(v[i]), end(v[i]), 'i', ' ');
		// 모든 모음을 공백 치환
		//replace_if(begin(v[i]), end(v[i]),
		//	[](char c) {return c == 'a'; }, ' ');
	
		FindChar fc("aieouAIEOU");
		replace_if(begin(v[i]), end(v[i]), fc, ' ');
	}
		
	//--------------------------------

	for (auto str : v)
		std::cout << str << std::endl;
}*/