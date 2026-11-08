#pragma once

template <typename T>
class linked_list
{
public:
    linked_list();
    linked_list(T value);
    ~linked_list();

    void push_front(T value);

    T* get_first_ptr();
    T* get_last_ptr();

private:
    struct Node
    {
        Node* prev = nullptr;
        T value;
        Node* next = nullptr;

        Node(T value) : value(value) {}
        Node(T value, Node* prev) : value(value), prev(prev) {}
    };

    Node* first_ptr = nullptr;
    Node* last_ptr = nullptr;
};

template <typename T>
linked_list<T>::linked_list() {};

template <typename T>
linked_list<T>::linked_list(T value)
{
    Node* node = new Node(value);
}

template <typename T>
linked_list<T>::~linked_list() {};

template <typename T>
T* linked_list<T>::get_first_ptr()
{
    return first_ptr ? &first_ptr->value : nullptr;
}

template <typename T>
T* linked_list<T>::get_last_ptr()
{
    return last_ptr ? &last_ptr->value : nullptr;
}

template <typename T>
void linked_list<T>::push_front(T value)
{
    Node* first_ptr = get_first_ptr();

    while (first_ptr->next != nullptr)
    {
        first_ptr = first_ptr->next;
    }

    first_ptr->next = new Node(value, first_ptr);
}