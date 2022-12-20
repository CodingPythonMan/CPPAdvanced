/*#include <iostream>
#include <chrono>
using namespace std;

void foo(chrono::seconds s) {}

int main()
{
	chrono::seconds s1(3); //ok
	//std::chrono::seconds s2 = 3; //error
	chrono::seconds s3 = 3s; // ok. seconds.operator""s(3)
	chrono::seconds s4 = 3min;

	cout << s4.count() << endl; // 180

	//foo(3); // error
	foo(3s); // ok

	//this_thread::sleep_for(3s);
	chrono::seconds s5 = 3min + 40s;
	cout << s5.count() << endl;
}*/