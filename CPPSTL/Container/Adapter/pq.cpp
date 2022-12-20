/*#include <iostream>
#include <queue>
#include <vector>
#include <functional>

struct abs_greater
{
	bool operator()(int a, int b) const
	{
		return abs(a) > abs(b);
	}
};

int main()
{
	std::priority_queue<int, std::vector<int>, abs_greater> pq;

	pq.push(10);		// <	, >
	pq.push(20);
	pq.push(-15);
	pq.push(12);

	std::cout << pq.top() << std::endl; // 20	10
	pq.pop();
	std::cout << pq.top() << std::endl; // 15	12
}*/