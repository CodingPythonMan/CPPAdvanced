/*#include <iostream>
using namespace std;

template<typename T> class Window
{
public:
	void msgLoop() // msgLoop(Window* const this)
	{
		//OnClick(); // this->OnClick()
		static_cast<T*>(this)->OnClick();
	}

	void OnClick() { cout << "Window OnClick" << endl; }
};

class FrameWindow : public Window<FrameWindow>
{
public:
	void OnClick() { cout << "FrameWindow OnClick" << endl; }

};

int main()
{
	FrameWindow fw;
	fw.msgLoop();
}*/