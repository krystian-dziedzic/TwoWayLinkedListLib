#pragma once

template <typename T>

struct Node
{
	Node* prev = nullptr;
	T value;
	Node* next = nullptr;
};

template <typename T>

class linked_list
{
public:
	linked_list();
	linked_list(T value);
	~linked_list();
	void push_front(T value);
	void push_back(T value);
private:
	Node<T>* first_ptr = nullptr;
	Node<T>* last_ptr = nullptr;
	void set_first_ptr(Node* ptr);
	void set_last_ptr(Node* ptr);
};

