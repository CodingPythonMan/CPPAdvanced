/*#include <iostream>
using namespace std;

template<typename T>
class Object
{
public:
	static int cnt;
	Object() { ++cnt; }
	~Object() { --cnt; }
	static int getCount() { return cnt; }
};
template<typename T> int Object<T>::cnt = 0;

class Mouse : public Object<Mouse>
{

};

class Keyboard : public Object<Keyboard>
{

};

int main()
{
	Mouse c1, c2;
	Keyboard k1, k2;

	cout << k1.getCount() << endl;
}*/