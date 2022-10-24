#include "bt_leetcode.hpp"

bool Solution::isSameTree(TreeNode*p,TreeNode*q)
{
    if(p==nullptr and q==nullptr)
    {
        return true;
    }
    if(p!=nullptr and q==nullptr)
    {
        return false;
    }
    if(p==nullptr and q!=nullptr)
    {
        return false;
    }

    bool left=isSameTree(p->left,q->left);
    bool right=isSameTree(p->right,q->right);
    bool current_value=p->val ==q->val;

    if(left and right and current_value)
    {
        return true;
    }
    else{
        return false;
    }
}
