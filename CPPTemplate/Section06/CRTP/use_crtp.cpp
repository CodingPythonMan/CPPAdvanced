/*template<typename T> class Singleton
{
protected:
	Singleton() {}

public:
	Singleton(const Singleton& c) = delete;
	void operator=(const Singleton& c) = delete;

	static T& getInstance()
	{
		static T instance;
		return instance;
	}
};

class Mouse : public Singleton<Mouse>
{

};

int main()
{
	Mouse& m = Mouse::getInstance();

}*/