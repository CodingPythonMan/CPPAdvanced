/*#include <iostream>
#include <iterator>
#include <vector>
#include "People.h"

int main()
{
	std::vector<People> v;
	v.push_back(People("A"));
	v.push_back(People("B"));
	v.push_back(People("C"));
	v.push_back(People("D"));

	std::cout << "-----------------------------" << std::endl;

	//std::vector<People> v2(begin(v), end(v));
	std::vector<People> v2(std::make_move_iterator(std::begin(v)), 
		std::make_move_iterator(std::end(v)));

	//auto p1 = std::begin(v);

	//People peo1 = *p1;

	// 规过1.
	//std::move_iterator<std::vector<People>::iterator> p2(p1);
	//People peo2 = *p2; // move 积己磊
	//People peo3 = std::move(*p1); 

	// 规过2.
	//auto p3 = std::make_move_iterator(begin(v));
}*/