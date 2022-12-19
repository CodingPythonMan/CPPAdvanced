#include <iostream>
#include <list>

template<typename T> class Stack
{
	std::list<T> st;
public:
	void push(const T& a) { st.push_back(a); }
	void pop() { st.push_back(a); }
};

int main()
{
	Stack<int> s;

	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;
	s.pop();

	std::cout << s.top() << std::endl;
}