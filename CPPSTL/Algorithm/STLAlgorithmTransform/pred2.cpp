/*#include <iostream>
#include <vector>
#include <algorithm>
#include "ecourse_st1.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0};

	// 기본 버전
	//remove(begin(v1), end(v1), 3);

	// 조건자 버전
	//remove_if(begin(v1), end(v1), [](int a) {return a % 3 == 0; });

	// 복사 버전. 리턴 값 p는 v2 의 반복자..
	//auto p = remove_copy(begin(v1), end(v1), begin(v2), 3);
	 
	auto p = remove_copy_if(begin(v1), end(v1), begin(v2), [](int a) {return a % 3 == 0; });

	v2.erase(p, end(v2));

	show(v1); // 똑같이
	show(v2);
}*/