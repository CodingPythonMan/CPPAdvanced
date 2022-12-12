/*#include <iostream>
using namespace std;

template<typename T, int N = 10> struct Stack
{
	T buff[N];
};

template<typename T, int N> struct Stack<T*, N>
{
	T* buff[N];
};

int main()
{
	Stack<int, 10> s1;
	Stack<int> s2;		// N = 10

	Stack<int*> s3;		// N = 10
}*/