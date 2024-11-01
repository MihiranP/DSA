#include "list_node.hpp"

template <typename T>
ListNode<T>::ListNode()
{
    this->val = 0;
    this->next = nullptr;
}

template <typename T>
ListNode<T>::ListNode(T val)
{
    this->val = val;
    this->next = nullptr;
}

template <typename T>
ListNode<T>::ListNode(T val, ListNode<T> &node)
{
    this->val = val;
    this->next = &node;
}

template <typename T>
ListNode<T>::~ListNode()
{
    this->val = 0;
    delete this->next;
    this->next = nullptr;
}