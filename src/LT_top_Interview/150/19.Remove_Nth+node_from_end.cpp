#include <vector>
#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void reverse(ListNode *&head)
{
    ListNode *next = nullptr;
    ListNode *prev = nullptr;
    ListNode *current = head;

    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}
void deleteNode(ListNode *&head, int n)
{
    ListNode *prev = nullptr;
    ListNode *current = head;
    int i = 0;
    // go till current is not null
    while (current)
    {
        if (i == n - 1)
        {
            prev->next = current->next;
            return;
        }
        prev = current;
        current = current->next;
        i++;
    }
}

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    reverse(head);
    deleteNode(head, n);
    reverse(head);
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    int n = 2;
    removeNthFromEnd(head, n);
    return 0;
}