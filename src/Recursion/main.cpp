#include "Dynammic_Programming/322.Coin_change.cpp"
#include "24.Swap_pairs.cpp"

// Path: main.cpp


void test_dp()
{
    vector<int>nums={1,2,5};
    int amount=11;
    Solution obj;
    cout<<obj.coinChange(nums,amount);

}

void test_swap_pairs()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    swapped_pairs obj;
    ListNode* new_head=obj.swapPairs(head);
    while(new_head)
    {
        cout<<new_head->val<<" ";
        new_head=new_head->next;
    }
}
int main()
{
    test_swap_pairs();

}