/*#include <iostream>
using namespace std;

template<typename T, typename U> struct couple
{
	T v1;
	U v2;
	enum {N = 2};
};

struct Null {}; //empty calss

template <typename P1,
			typename P2,
			typename P3 = Null,
			typename P4 = Null,
			typename P5 = Null>
class xtuple :public couple<P1, xtuple<P2,P3,P4,P5,Null>>
{

};

template<typename P1, typename P2>
class xtuple<P1, P2, Null, Null, Null>
	:public couple<P1, P2>
{

};

int main()
{
	xtuple<int, char, long, short, double> t5;
}*/