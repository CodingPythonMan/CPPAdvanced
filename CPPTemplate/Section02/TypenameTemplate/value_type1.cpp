/*#include <iostream>
#include <vector>
#include <list>
using namespace std;

//template<typename T>
//void print_first_element(vector<T>& v)
//{
	//T n = v.front();
	//cout << n << endl;
//}

template<typename T>
void print_first_element(T& v)
{
	// T : list<double>
	// T::value_type => list<double>::value_type
	// double 이 필요함
	//typename T::value_type n = v.front();
	auto n = v.front();
	
	cout << n << endl;
}

int main()
{
	list<double> v = { 1,2,3 };
	print_first_element(v);
}*/