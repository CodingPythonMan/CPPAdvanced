/*#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

template<typename ... Types>
void foo(Types ... args)
{
	//(args, ...); // 1 , 2 , 3

	(v.push_back(args), ...);
		// v.push_back(1), (v.push_back(2),v.push_back(3));

	for (auto n : v)
		cout << n << endl;
}

int main()
{
	foo(1, 2, 3);
}*/