#include "list_node.cpp"
#include <iostream>

using namespace std;

int main()
{
    ListNode<int> test(100);
    cout << test.val << endl;
    cout << test.next << endl;

    ListNode<int> test2(1, test);
    cout << test2.val << endl;
    cout << test2.next << endl;
    cout << test2.next->val << endl;
}