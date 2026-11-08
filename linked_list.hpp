#include <iostream>
#pragma once

template <typename T>
class linked_list
{
public:
    linked_list();
    linked_list(T value);
    ~linked_list();

    void push_front(T value);
    void push_back(T value);
    void display_list();
private:
    struct Node
    {
        Node* prev = nullptr;
        T value;
        Node* next = nullptr;

        Node(T value) : value(value) {}
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
linked_list<T>::~linked_list() 
{
    Node* temp_ptr = first_ptr;
    while (temp_ptr != nullptr)
    {
        Node* next = temp_ptr->next;
        delete temp_ptr;
        temp_ptr = next;
    }
};

template <typename T>
void linked_list<T>::push_front(T value)
{
    Node* temp_ptr = linked_list::last_ptr;

    if (temp_ptr == nullptr)
    {
        temp_ptr = new Node(value);

        if (first_ptr == nullptr)
        {
            first_ptr = temp_ptr;
            last_ptr = temp_ptr;
        }

        return;
    }
    Node* in = new Node(value);
    first_ptr->next = in;
    in->prev = first_ptr;
    first_ptr = in;
}

template <typename T>
void linked_list<T>::push_back(T value)
{
    Node* temp_ptr = linked_list::first_ptr;
    if (temp_ptr == nullptr)
    {
        temp_ptr = new Node(value);
        if (last_ptr == nullptr)
        {
            last_ptr = temp_ptr;
            first_ptr = temp_ptr;
        }
        return;
    }
    Node* in = new Node(value);
    last_ptr->prev = in;
    in->next = last_ptr;
    last_ptr = in;
}

template <typename T>
void linked_list<T>::display_list()
{
    Node* temp_ptr = last_ptr;

    while (temp_ptr != nullptr)
    {
        std::cout << temp_ptr << " "
            << temp_ptr->prev << " "
            << temp_ptr->next << "\n";

        temp_ptr = temp_ptr->next;
    }
}