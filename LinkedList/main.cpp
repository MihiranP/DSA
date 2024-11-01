#include "linked_list.cpp"

using namespace std;

int main()
{
    ListNode<int> test = ListNode<int>(100);
    ListNode<int> test2 = ListNode<int>(1, test);

    cout << "List Node tests: " << endl;
    cout << "test val: " << test.val << endl;
    cout << "test next: " << test.next << endl;

    cout << "test2 val: " << test2.val << endl;
    cout << "test2 next: " << test2.next << endl;
    cout << "test2.next val: " << test2.next->val << endl;

    cout << "--------------" << endl;
    cout << "Linked List tests: " << endl;

    LinkedList<int> testlist = LinkedList<int>();
    cout << "head val: " << testlist.head->val << endl;
    cout << "head next: " << testlist.head->next << endl;
}