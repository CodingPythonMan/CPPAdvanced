/*#include <iostream>
using namespace std;

template<typename T> class Stack
{
public:
	T pop() {}
	void push(T a);
};
template<typename T> void Stack<T>::push(T a)
{
	cout << "T" << endl;
}
template<> void Stack<char*>::push(char* a)
{
	cout << "char*" << endl;
}


int main()
{
	Stack<int> s1; s1.push(0);
	Stack<char*> s2; s2.push(0);
}*/