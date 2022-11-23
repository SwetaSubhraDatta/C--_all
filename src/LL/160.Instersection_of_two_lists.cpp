#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution
{
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        
        unordered_map<ListNode*,int> map;
        ListNode *temp=headA;
        //Step 1: Fill the map with the nodes of list A
        while(temp)
        {
            map.insert(make_pair(temp,1));
            temp=temp->next;
        }
        //Step 2: Check if the nodes of list B are present in the map
        temp=headB;
        while(temp)
        {
            if(map.find(temp)!=map.end())
            {
                return temp;
            }
            temp=temp->next;
        }
    }
};