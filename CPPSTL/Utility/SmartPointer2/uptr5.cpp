/*#include <iostream>
#include <memory>

int main()
{
	std::shared_ptr<int> sp(new int);
	std::unique_ptr<int> up(new int);

	//std::shared_ptr<int> sp1 = up;				// error
	std::shared_ptr<int> sp2 = std::move(up);	// ok

	//std::unique_ptr<int> up1 = sp;				// error
	//std::unique_ptr<int> up2 = std::move(sp);	// error
}*/