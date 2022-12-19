/*#include <iterator>

template<typename T> class slist_iterator
{
	Node<T>* current = 0;
public:
	using iterator_category = forward_iterator_tag;
	using value_type = T;
	using pointer = T*;
	using reference = T&;
	using difference_type = std::ptr;

	slist_iterator(Node<T>* p = 0) : current(p) {}

	slist_iterator& operator++()
	{
		current = current->next;
		return *this;
	}

	T& operator*() { return current->data; }

	bool operator ==(const slist_iterator& it)
	{
		return current == it.current;
	}

	bool operator !=(const slist_iterator& it)
	{
		return current != it.current;
	}
};*/