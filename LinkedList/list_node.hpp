template <typename T>
class ListNode
{
public:
    T val;
    ListNode<T> *next;

    ListNode();
    ListNode(T val);
    ListNode(T val, ListNode &node);
    ~ListNode();
};