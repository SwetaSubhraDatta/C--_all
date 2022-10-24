#include <bt_leetcode.hpp>



int height(TreeNode* root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}
int Solution::diameterOfBinaryTree(TreeNode* root)
{
    if (root==nullptr)
    {
        return 0;
    }
    //Diameter of a binary tree is 
    //opt1-Diameter of left subtree
    int ltree=diameterOfBinaryTree(root->left);
    int rtree=diameterOfBinaryTree(root->right);
    int h=height(root->left)+height(root->right);
    return max(h,max(ltree,rtree));
}

pair<int,int> Solution ::diameterofBinaryTree_Optimised(TreeNode* root)
{
    if (root==nullptr)
    {
        return make_pair(0,0);
    }
    //Diameter of a binary tree is
    pair<int,int>left_subtree=diameterofBinaryTree_Optimised(root->left);
    pair<int,int>right_subtree=diameterofBinaryTree_Optimised(root->right);
    int diamater_l=left_subtree.first;
    int diamater_r=right_subtree.first;
    int height=left_subtree.second+right_subtree.second+1;
    pair<int,int>ans;
    ans.first=max(height,max(diamater_l,diamater_r));
    ans.second=max(left_subtree.second,right_subtree.second)+1;
    return ans;
    

    
}




