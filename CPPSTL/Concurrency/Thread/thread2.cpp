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

	t.join(); // 스레드 종료 대기.
	//t.detach(); // 스레드 관심이 없으니까 또 실행하겠다.
}*/