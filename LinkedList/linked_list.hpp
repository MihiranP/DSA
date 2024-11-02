#include "list_node.cpp"

template <typename T>
class LinkedList
{
public:
    ListNode<T> *head;
    int length;

    LinkedList();
    LinkedList(ListNode<T> &head);
    ~LinkedList();
    void add_node(T val);
    void remove_node(T val);
    void reverse();
    bool detect_cycle();
    ListNode<T> *find_mid();
    void print_list();
};
