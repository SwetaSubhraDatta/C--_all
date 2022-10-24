#include "bt_leetcode.hpp"



int Solution::min_depth(TreeNode* root)
{
    /*
    Only difference check minimum when there is a leaf node
    */
    int min_depth=numeric_limits<int>::max();
    stack<pair<int,TreeNode*>>bt_holder;
    if (root)
    {
        bt_holder.push(make_pair(1,root));
    }
    while(!bt_holder.empty())
    {
        //get current node and current depth
        int current_depth=bt_holder.top().first;
        TreeNode* temp=bt_holder.top().second;
        bt_holder.pop();// dont forget to pop the stack
        //check if the current node is a leaf node
        if( temp->left==nullptr && temp->right==nullptr)
        {
            min_depth=min(min_depth,current_depth);
        }

        if(temp->left!=nullptr )
        {
            bt_holder.push(make_pair(current_depth+1,temp->left));
        }
        if(temp->right!=nullptr)
        {
            bt_holder.push(make_pair(current_depth+1,temp->right));
        }
        
    }
    return min_depth;
        
}
