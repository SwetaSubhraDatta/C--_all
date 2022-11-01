#include <iostream>
#include <vector>
#include <queue>

using namespace std;


struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/*
This function will return me the 
current pointer and the Sentinel Previous pointer
*/
void find_left(ListNode*& current,ListNode*& prev_sentinel,int left)
{
    ListNode* tail=nullptr;
    int count =0;
    while(count<left-1)
    {
        prev_sentinel=current;
        current=current->next;
        count++;
    }
    tail=current;
}

/*
Gets the end point
*/
void find_right(ListNode*& current,ListNode*& nextSentinel,int right,int left)
{
    ListNode* temp=current;
    int right_pos =0;
    for(int i=left;i<right+1;i++)
    {
        nextSentinel=temp->next;
        temp=temp->next;
        right_pos++;
    }
    

}

void reverse(ListNode*& current,int right,int left)
{
    ListNode *prev=nullptr;
    ListNode *next=nullptr;
    int i=0;
    int dest=abs(right-(left));
    while(current and i<=dest)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        i++;
    }
    current=prev;

}

void join(ListNode*& Sentinel_prev,ListNode*& Sentinel_next,ListNode*& current)
{
    Sentinel_prev->next=current;
    while(current)
    {
        current=current->next;
    }
    current->next=Sentinel_next;
    
}

ListNode* reverseBetween(ListNode* head,int left,int right)
{
    if (head==nullptr)
    {
        return nullptr;
    }
    ListNode* tail_of_previous=nullptr;
    ListNode* current=head;
    ListNode* previous=nullptr;
    ListNode* next=nullptr;
    find_left(current,tail_of_previous,left);
    reverse()

}


ListNode* reverseBetween_1(ListNode* head,int left,int right)
{
    if (head==nullptr)
    {
        return nullptr;
    }
    ListNode* current=head;
    ListNode* previous=nullptr;
    ListNode* next=nullptr;
    //get the left -1
    int i=0;
    while(i<left-1 and current)
    {
        previous=current;
        current=current->next;
        i+=1;
    }

    ListNode *lastnodeofFirstPart=previous;
    ListNode *LastnodeofSublist=current;

    i=0;
    while(i<right-left+1 and current)
    {
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
        i+=1;

    }
    if (lastnodeofFirstPart != nullptr) 
    {
      lastnodeofFirstPart->next = previous;  
    } 
    else 
    {  
        head = previous;
    }
    LastnodeofSublist->next = current;
    return head;
}


int main()
{
    ListNode* head=new ListNode(1);
    ListNode* n1=new ListNode(2);
    ListNode* n2=new ListNode(3);
    ListNode* n3=new ListNode(4);
    ListNode* n4=new ListNode(5);

    head->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=nullptr;
    reverseBetween(head,2,4);
}