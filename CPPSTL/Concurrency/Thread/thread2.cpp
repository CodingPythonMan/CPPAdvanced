/*#include <iostream>
#include <thread>
using namespace std;

void foo()
{
	cout << "thread start" << endl;
	this_thread::sleep_for(2s);
	cout << "thread end" << endl;
}

int main()
{
	thread t(&foo);

	t.join(); // ������ ���� ���.
	//t.detach(); // ������ ������ �����ϱ� �� �����ϰڴ�.
}*/