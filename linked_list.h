#pragma once

template <typename T>

struct Node
{
	Node* prev;
	T value;
	Node* next;
};

template <typename T>

class linked_list
{
public:
	void set_first_ptr(Node* ptr);
	void set_last_ptr(Node* ptr);
	void push_front(T value);
	void push_back(T value);
private:
	Node<T>* first_ptr = nullptr;
	Node<T>* last_ptr = nullptr;
};

