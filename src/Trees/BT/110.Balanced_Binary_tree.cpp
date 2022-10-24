#include <bt_leetcode.hpp>

int get_height(TreeNode* root)
{
     if (root==nullptr)
     {
        return 0;
     }
     return max(get_height(root->left),get_height(root->right))+1;     
}


pair<bool,int> isBalancedFast(TreeNode* root)
{
    if (root==nullptr)
    {
        return make_pair(true,0);
    }
    pair<bool,int>left_subtree=isBalancedFast(root->left);
    pair<bool,int>right_subtree=isBalancedFast(root->right);
    int height=max(left_subtree.second,right_subtree.second)+1;
    bool height_balanced=abs(left_subtree.second-right_subtree.second)<=1;
    if(left_subtree.first && right_subtree.first && height_balanced)
    {
        return make_pair(true,height);
    }
    return make_pair(false,height);
}

bool Solution ::isBalanced(TreeNode* root)
{
    if(root==nullptr)
    {
        return true;
    }
    bool left= isBalanced(root->left);
    int right=isBalanced(root->right);
    int height=get_height(root->left)-get_height(root->right);
    bool height_balanced=abs(height)<=1;

    if(left && right && height_balanced)
    {
        return true;
    }
    return false;
}


