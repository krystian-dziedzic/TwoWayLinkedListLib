#include "linked_list.h"

template <typename T>
linked_list<T>::linked_list() {};

template <typename T>
linked_list<T>::linked_list(T value) 
{
	Node* node = new Node();
	node->value = value;
	set_first_ptr(node);
	set_last_ptr(node);
};