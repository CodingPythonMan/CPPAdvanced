/*#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <stack>

// stack 이 필요해서 구현
template<typename T, typename C = std::deque<T>> class Stack
{
	C st;
public:
	inline void push(const T& a) { st.push_back(a); }
	inline void pop() { st.pop(); }
	inline T& top() { return st.back(); }

	inline bool empty() { return st.empty(); }
};

int main()
{
	//stack<int, list<int, MyAlloc<int>> s3;

	Stack<int> s2;
	Stack<int, std::vector<int>> s1;
	Stack<int, std::list<int>> s;
	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl; // 20
	s.pop();

	std::cout << s.top() << std::endl; // 10
}*/