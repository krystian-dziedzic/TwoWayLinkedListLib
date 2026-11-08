#pragma once

template <typename T>

struct Node
{
	Node* prev = nullptr;
	T value;
	Node* next = nullptr;

	Node(T value) : value(value) {}
};

template <typename T>

class linked_list
{
public:
	linked_list();
	linked_list(T value);
	~linked_list();
	void push_front(T value);
	//void push_back(T value);
private:
	Node<T>* first_ptr = nullptr;
	Node<T>* last_ptr = nullptr;
	//void set_first_ptr(Node<T>* ptr);
	//void set_last_ptr(Node<T>* ptr);
};

template <typename T>
linked_list<T>::linked_list() {};

template <typename T>
linked_list<T>::linked_list(T value)
{
	Node<T>* node = new Node<T>(value);
	//set_first_ptr(node);
	//set_last_ptr(node);
};
template <typename T>
linked_list<T>::~linked_list() {};

