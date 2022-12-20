#include <iostream>
#include <thread>
#include <future>
using namespace std;

int f1()
{
	this_thread::sleep_for(3s);
	cout << "f1 end" << endl;
	return 10;
}

int main()
{
	//async(launch::async, &f1);	// ���ϰ����� future<int> ��ü
								// ���Ͽ� �ӽ� ��ü
 				
	future<int> ft = async(launch::async, &f1);

	cout << "main routine" << endl;
}