//Swap Pairs in Linked List

#include <iostream>
#include <vector>


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class swapped_pairs
{
    public:
    ListNode* swapPairs(ListNode*head)
    {
        ListNode* dummy=new ListNode(0);//dummy node
        ListNode* prev=dummy;
        ListNode * current=head;

        while(current && current->next)
        {
            ListNode* nextpair=current->next->next;
            ListNode* second=current->next;
            //swap
            second->next=current;
            current->next=nextpair;
            prev->next=second;

            //update prev and current
            prev=current;
            current=nextpair;
        }
        return(dummy->next);
    }

   
};



