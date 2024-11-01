#include "linked_list.hpp"
#include <iostream>

using namespace std;

template <typename T>
LinkedList<T>::LinkedList()
{
    this->head = new ListNode(0);
    this->length = 1;
}

template <typename T>
LinkedList<T>::LinkedList(ListNode<T> &head)
{
    this->head = &head;
    this->length = 1;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    ListNode<T> curr = new ListNode(head); // need copy constructor in ListNode
    ListNode<T> tmp;
    // while curr
    // {
    // }
}

template <typename T>
void LinkedList<T>::add_node(T val)
{
}

template <typename T>
void LinkedList<T>::remove_node(T val)
{
}

template <typename T>
void LinkedList<T>::reverse()
{
}

template <typename T>
bool LinkedList<T>::detect_cycle()
{
    return false;
}

template <typename T>
ListNode<T> *LinkedList<T>::find_mid()
{
    return this->head;
}